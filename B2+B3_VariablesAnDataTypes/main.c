#include "config.h"
#include "hal_sensors.h"
#include "spws_controller.h"
#include <stdio.h>

static SystemSettings_t g_systemSettings;
static SensorData_t g_sensorData;
static SystemState_t g_systemState;

void SystemInit(void)
{
    /* --- Init system settings --- */
    g_systemSettings.minSoilMoistureThreshold = 30.0f; 
    g_systemSettings.maxSoilMoistureThreshold = 70.0f;

    g_systemSettings.maxWateringDuration_s = 40;
    g_systemSettings.sensorReadInterval_s = 5;
    g_systemSettings.manualWateringDuration_s = 30;

    /* --- Init system state --- */
    g_systemState.currentMode = MODE_AUTO;
    g_systemState.pumpState = PUMP_OFF;

    g_systemState.ledState = LED_NORMAL;

    g_systemState.wateringTimeCounter = 0;
    g_systemState.sensorCheckCounter = 0;

    /* --- Init sensor data --- */
    g_sensorData.soilMoisturePercent = 0.0f;
    g_sensorData.airTemperatureCelsius = 0.0f;
}

int main(void)
{
    SystemInit();
    HAL_Sensors_Init();

    while (1)
    {
        SPWS_Run(&g_systemSettings, &g_systemState, &g_sensorData);
        usleep(100000*30);
    }
    return 0;
}