// src/mmxu/mmxu_simulator.c
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <unistd.h>
#include <time.h>
#include <math.h>

#include "iec61850_server.h"
#include "hal_thread.h"
#include "static_model.h"

static IedServer iedServer = NULL;
static bool running = true;
static const char *iedType = "MMXU";

// Improved logging
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

static void connectionHandler(IedServer self, ClientConnection connection, bool connected, void *parameter)
{
    if (connected)
        LOG_INFO("Client connected");
    else
        LOG_INFO("Client disconnected");
}

// Simulate MMXU measurements with realistic three-phase values
static void simulateMMXU(void)
{
    float voltageBase = 220.0f;
    float currentBase = 1000.0f;
    float powerBase = voltageBase * currentBase * sqrt(3);
    float frequency = 50.0f;

    // Deklarasi variabel untuk menyimpan nilai per fase
    float voltage_phaseA, voltage_phaseB, voltage_phaseC;
    float current_phaseA, current_phaseB, current_phaseC;

    while (running)
    {
        uint64_t timestamp = Hal_getTimeInMs();

        // Simulate three-phase measurements with 120° phase shifts
        for (int phase = 0; phase < 3; phase++)
        {
            float phaseAngle = phase * 120.0f;

            // Add some random variation to measurements
            float voltage = voltageBase + ((rand() % 1000 - 500) / 100.0f);
            float current = currentBase + ((rand() % 2000 - 1000) / 10.0f);
            float power = voltage * current * sqrt(3) / 1000.0f;

            // Simpan nilai per fase
            if (phase == 0)
            {
                voltage_phaseA = voltage;
                current_phaseA = current;
                IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_Measurements_MMXU1_PhV_phsA_cVal_mag_f, voltage);
                IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_Measurements_MMXU1_PhV_phsA_q, QUALITY_VALIDITY_GOOD);
                IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_Measurements_MMXU1_PhV_phsA_t, timestamp);

                IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_Measurements_MMXU1_A_phsA_cVal_mag_f, current);
                IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_Measurements_MMXU1_A_phsA_q, QUALITY_VALIDITY_GOOD);
                IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_Measurements_MMXU1_A_phsA_t, timestamp);
            }
            else if (phase == 1)
            {
                voltage_phaseB = voltage;
                current_phaseB = current;
                IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_Measurements_MMXU1_PhV_phsB_cVal_mag_f, voltage);
                IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_Measurements_MMXU1_PhV_phsB_q, QUALITY_VALIDITY_GOOD);
                IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_Measurements_MMXU1_PhV_phsB_t, timestamp);

                IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_Measurements_MMXU1_A_phsB_cVal_mag_f, current);
                IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_Measurements_MMXU1_A_phsB_q, QUALITY_VALIDITY_GOOD);
                IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_Measurements_MMXU1_A_phsB_t, timestamp);
            }
            else
            {
                voltage_phaseC = voltage;
                current_phaseC = current;
                IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_Measurements_MMXU1_PhV_phsC_cVal_mag_f, voltage);
                IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_Measurements_MMXU1_PhV_phsC_q, QUALITY_VALIDITY_GOOD);
                IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_Measurements_MMXU1_PhV_phsC_t, timestamp);

                IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_Measurements_MMXU1_A_phsC_cVal_mag_f, current);
                IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_Measurements_MMXU1_A_phsC_q, QUALITY_VALIDITY_GOOD);
                IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_Measurements_MMXU1_A_phsC_t, timestamp);
            }
        }

        // Update frequency with small variations
        frequency = 50.0f + ((rand() % 100 - 50) / 1000.0f);
        IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_Measurements_MMXU1_Hz_mag_f, frequency);

        // Gunakan variabel fase yang telah disimpan untuk logging
        LOG_INFO("Updated measurements - V(A/B/C): %.2f/%.2f/%.2f kV, I(A/B/C): %.2f/%.2f/%.2f A, F: %.3f Hz",
                 voltage_phaseA, voltage_phaseB, voltage_phaseC,
                 current_phaseA, current_phaseB, current_phaseC,
                 frequency);

        Thread_sleep(10);
    }
}

int main(int argc, char **argv)
{
    // Disable output buffering
    setbuf(stdout, NULL);
    setbuf(stderr, NULL);

    LOG_INFO("Starting MMXU IED simulator...");

    // Create new server with MMXU data model
    iedServer = IedServer_create(&iedModel);
    if (!iedServer)
    {
        LOG_ERROR("Failed to create IED server! Exit.");
        exit(-1);
    }

    // Register connection handler
    IedServer_setConnectionIndicationHandler(iedServer, connectionHandler, NULL);

    // Start the server
    IedServer_start(iedServer, 10103);
    if (!IedServer_isRunning(iedServer))
    {
        LOG_ERROR("Starting server failed! Exit.");
        IedServer_destroy(iedServer);
        exit(-1);
    }

    LOG_INFO("MMXU simulator is running");

    // Start simulation thread
    Thread simThread = Thread_create((ThreadExecutionFunction)simulateMMXU, NULL, false);
    Thread_start(simThread);

    // Server main loop
    while (running)
    {
        Thread_sleep(1000);
    }

    // Cleanup
    IedServer_stop(iedServer);
    IedServer_destroy(iedServer);
    Thread_destroy(simThread);

    LOG_INFO("MMXU simulator shutdown complete");

    return 0;
}