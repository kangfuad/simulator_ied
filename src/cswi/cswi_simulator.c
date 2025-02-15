// src/cswi/cswi_simulator.c
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <unistd.h>
#include <time.h>

#include "iec61850_server.h"
#include <hal_thread.h>
#include "static_model.h"

static IedServer iedServer = NULL;
static bool running = true;
static const char *iedType = "CSWI";

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

// Status struktur
static struct
{
    bool position;       // true = closed, false = open
    bool local;          // true = local, false = remote
    int health;          // 1 = ok, 2 = warning, 3 = alarm
    int operationCount;  // operation counter
    uint64_t lastOpTime; // timestamp of last operation
} deviceStatus = {
    .position = false, // initially open
    .local = false,    // initially in remote mode
    .health = 1,       // initially healthy
    .operationCount = 0,
    .lastOpTime = 0};

static void connectionHandler(IedServer self, ClientConnection connection, bool connected, void *parameter)
{
    if (connected)
        LOG_INFO("Client connected");
    else
        LOG_INFO("Client disconnected");
}

static void simulateCSWI(void)
{
    while (running)
    {
        uint64_t timestamp = Hal_getTimeInMs();

        IedServer_lockDataModel(iedServer);

        // Update position status
        IedServer_updateBooleanAttributeValue(iedServer, IEDMODEL_CSWI_Control_CSWI1_Pos_stVal, deviceStatus.position);
        IedServer_updateQuality(iedServer, IEDMODEL_CSWI_Control_CSWI1_Pos_q, QUALITY_VALIDITY_GOOD);
        IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_CSWI_Control_CSWI1_Pos_t, timestamp);

        // Update local/remote status
        IedServer_updateBooleanAttributeValue(iedServer, IEDMODEL_CSWI_Control_CSWI1_Loc_stVal, deviceStatus.local);
        IedServer_updateQuality(iedServer, IEDMODEL_CSWI_Control_CSWI1_Loc_q, QUALITY_VALIDITY_GOOD);
        IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_CSWI_Control_CSWI1_Loc_t, timestamp);

        // Update operation counter
        IedServer_updateInt32AttributeValue(iedServer, IEDMODEL_CSWI_Control_CSWI1_OpCnt_stVal, deviceStatus.operationCount);
        IedServer_updateQuality(iedServer, IEDMODEL_CSWI_Control_CSWI1_OpCnt_q, QUALITY_VALIDITY_GOOD);
        IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_CSWI_Control_CSWI1_OpCnt_t, timestamp);

        // Update health status
        IedServer_updateInt32AttributeValue(iedServer, IEDMODEL_CSWI_Control_CSWI1_Health_stVal, deviceStatus.health);
        IedServer_updateQuality(iedServer, IEDMODEL_CSWI_Control_CSWI1_Health_q, QUALITY_VALIDITY_GOOD);
        IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_CSWI_Control_CSWI1_Health_t, timestamp);

        IedServer_unlockDataModel(iedServer);

        LOG_INFO("Status - Position: %s, Mode: %s, Health: %d, Operations: %d",
                 deviceStatus.position ? "CLOSED" : "OPEN",
                 deviceStatus.local ? "LOCAL" : "REMOTE",
                 deviceStatus.health,
                 deviceStatus.operationCount);

        Thread_sleep(1000);
    }
}

// Callback handlers for controls
static CheckHandlerResult checkHandler(void *parameter, MmsValue *ctlVal, bool test, bool interlockCheck, bool synchroCheck)
{
    if (deviceStatus.local)
        return CONTROL_OBJECT_ACCESS_DENIED; // Ubah ke nilai yang sesuai dengan header

    return CONTROL_ACCEPTED;
}

static ControlHandlerResult
controlHandler(void *parameter, DataObject *node, MmsValue *value, bool test)
{
    if (deviceStatus.local)
    {
        LOG_INFO("Control rejected - device in local mode");
        return CONTROL_RESULT_FAILED;
    }

    bool newPosition = MmsValue_getBoolean(value);
    deviceStatus.position = newPosition;
    deviceStatus.operationCount++;
    deviceStatus.lastOpTime = Hal_getTimeInMs();

    LOG_INFO("Position changed to: %s", newPosition ? "CLOSED" : "OPEN");
    return CONTROL_RESULT_OK;
}

int main(int argc, char **argv)
{
    setbuf(stdout, NULL);
    setbuf(stderr, NULL);

    LOG_INFO("Starting CSWI IED simulator...");

    iedServer = IedServer_create(&iedModel);
    if (!iedServer)
    {
        LOG_ERROR("Failed to create IED server! Exit.");
        exit(-1);
    }

    // Register control handler - sekarang dengan 4 parameter
    IedServer_setControlHandler(iedServer, IEDMODEL_CSWI_Control_CSWI1_Pos,
                                (ControlHandler)controlHandler,
                                NULL); // parameter terakhir untuk user data

    IedServer_setConnectionIndicationHandler(iedServer, connectionHandler, NULL);

    IedServer_start(iedServer, 10102);
    if (!IedServer_isRunning(iedServer))
    {
        LOG_ERROR("Starting server failed! Exit.");
        IedServer_destroy(iedServer);
        exit(-1);
    }

    LOG_INFO("CSWI simulator is running");

    Thread simThread = Thread_create((ThreadExecutionFunction)simulateCSWI, NULL, false);
    Thread_start(simThread);

    while (running)
    {
        Thread_sleep(1000);
    }

    IedServer_stop(iedServer);
    IedServer_destroy(iedServer);
    Thread_destroy(simThread);

    LOG_INFO("CSWI simulator shutdown complete");

    return 0;
}