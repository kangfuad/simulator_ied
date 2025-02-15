#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <unistd.h>
#include <time.h>

#include "iec61850_server.h"
#include "hal_thread.h"
#include "static_model.h"

static IedServer iedServer = NULL;
static bool running = true;
static const char *iedType = "XCBR";

#define LOG_INFO(msg, ...)                                               \
    do                                                                   \
    {                                                                    \
        fprintf(stdout, "[INFO][%s] " msg "\n", iedType, ##__VA_ARGS__); \
        fflush(stdout);                                                  \
    } while (0)

#define LOG_ERROR(msg, ...)                                               \
    do                                                                    \
    {                                                                     \
        fprintf(stderr, "[ERROR][%s] " msg "\n", iedType, ##__VA_ARGS__); \
        fflush(stderr);                                                   \
    } while (0)

static struct
{
    bool position;       // true = closed, false = open
    int health;          // 1 = ok, 2 = warning, 3 = alarm
    int operationCount;  // operation counter
    uint64_t lastOpTime; // timestamp of last operation
} breaker = {
    .position = false,
    .health = 1,
    .operationCount = 0,
    .lastOpTime = 0};

static void connectionHandler(IedServer self, ClientConnection connection, bool connected, void *parameter)
{
    if (connected)
        LOG_INFO("Client connected");
    else
        LOG_INFO("Client disconnected");
}

static void simulateXCBR(void)
{
    while (running)
    {
        uint64_t timestamp = Hal_getTimeInMs();

        IedServer_lockDataModel(iedServer);

        IedServer_updateBooleanAttributeValue(iedServer, IEDMODEL_CSWI_Control_CSWI1_Pos_stVal, breaker.position);
        IedServer_updateQuality(iedServer, IEDMODEL_CSWI_Control_CSWI1_Pos_q, QUALITY_VALIDITY_GOOD);
        IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_CSWI_Control_CSWI1_Pos_t, timestamp);

        IedServer_updateInt32AttributeValue(iedServer, IEDMODEL_CSWI_Control_CSWI1_Health_stVal, breaker.health);
        IedServer_updateQuality(iedServer, IEDMODEL_CSWI_Control_CSWI1_Health_q, QUALITY_VALIDITY_GOOD);
        IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_CSWI_Control_CSWI1_Health_t, timestamp);

        IedServer_updateInt32AttributeValue(iedServer, IEDMODEL_CSWI_Control_CSWI1_OpCnt_stVal, breaker.operationCount);
        IedServer_updateQuality(iedServer, IEDMODEL_CSWI_Control_CSWI1_OpCnt_q, QUALITY_VALIDITY_GOOD);
        IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_CSWI_Control_CSWI1_OpCnt_t, timestamp);

        IedServer_unlockDataModel(iedServer);

        LOG_INFO("Status - Position: %s, Health: %d, Operations: %d",
                 breaker.position ? "CLOSED" : "OPEN",
                 breaker.health,
                 breaker.operationCount);

        Thread_sleep(1000);
    }
}

static ControlHandlerResult
controlHandler(void *parameter, void *node, MmsValue *value, bool test)
{
    DataObject *dataObject = (DataObject *)node;
    bool newPosition = MmsValue_getBoolean(value);
    breaker.position = newPosition;
    breaker.operationCount++;
    breaker.lastOpTime = Hal_getTimeInMs();

    LOG_INFO("Position changed to: %s", newPosition ? "CLOSED" : "OPEN");
    return CONTROL_RESULT_OK;
}

int main(int argc, char **argv)
{
    setbuf(stdout, NULL);
    setbuf(stderr, NULL);

    LOG_INFO("Starting XCBR IED simulator...");

    iedServer = IedServer_create(&iedModel);
    if (!iedServer)
    {
        LOG_ERROR("Failed to create IED server! Exit.");
        exit(-1);
    }

    IedServer_setControlHandler(iedServer, IEDMODEL_CSWI_Control_CSWI1_Pos,
                                controlHandler,
                                NULL);

    IedServer_setConnectionIndicationHandler(iedServer, connectionHandler, NULL);

    // Changed from port 102 to 8102
    IedServer_start(iedServer, 10104);
    if (!IedServer_isRunning(iedServer))
    {
        LOG_ERROR("Starting server failed! Exit.");
        IedServer_destroy(iedServer);
        exit(-1);
    }

    LOG_INFO("XCBR simulator is running");

    Thread simThread = Thread_create((ThreadExecutionFunction)simulateXCBR, NULL, false);
    Thread_start(simThread);

    while (running)
    {
        Thread_sleep(1000);
    }

    IedServer_stop(iedServer);
    IedServer_destroy(iedServer);
    Thread_destroy(simThread);

    LOG_INFO("XCBR simulator shutdown complete");

    return 0;
}