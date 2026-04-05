#include "spws_controller.h"
#include "config.h"
#include "hal_buttons.h"
#include "hal_sensors.h"
#include "hal_actuators.h"

void SPWS_Run(SystemSettings_t* settings,
              SystemState_t* state, 
              SensorData_t* sensorData)
{
    /* --- BUTTON 1: Toggle mode --- */
    if (HAL_Button1_Pressed())
    {
        if (state->currentMode == MODE_AUTO)
        {
            state->currentMode = MODE_MANUAL;
            HAL_Pump_Off();
            state->pumpState = PUMP_OFF;
        }
        else
        {
            state->currentMode = MODE_AUTO;
        }
    }

    /* --- BUTTON 2: Manual watering --- */
    if (HAL_Button2_Pressed())
    {
        if (state->currentMode == MODE_MANUAL)
        {
            HAL_Pump_On();
            state->pumpState = PUMP_ON;
            state->wateringTimeCounter = 0; 
        }
    }

    /* --- Sensor update --- */
    state->sensorCheckCounter++;
    if (state->sensorCheckCounter > settings->sensorReadInterval_s)
    {
        HAL_Sensors_Read(sensorData);
        state->sensorCheckCounter = 0;
    }

    /* --- AUTO MODE --- */
    if (state->currentMode == MODE_AUTO)
    {
        if (sensorData->soilMoisturePercent < settings->minSoilMoistureThreshold)
        {
            HAL_Pump_On();
            state->pumpState = PUMP_ON;
            state->wateringTimeCounter = 0; 
        }
        
        if (state->pumpState == PUMP_ON)
        {
            state->wateringTimeCounter++;

            if ((sensorData->soilMoisturePercent > settings->maxSoilMoistureThreshold) ||
                (state->wateringTimeCounter > settings->maxWateringDuration_s))
            {
                HAL_Pump_Off();
                state->pumpState = PUMP_OFF;
            }
        }
    }

    /* --- MANUAL MODE --- */
    if (state->currentMode == MODE_MANUAL)
    {
        if (state->pumpState = PUMP_ON)
        {
            state->wateringTimeCounter++;
            
            if (state->wateringTimeCounter > settings->manualWateringDuration_s)
            {
                HAL_Pump_Off();
                state->pumpState = PUMP_OFF;
            }
        }
    }

    /* --- LED State --- */
    if (state->pumpState == PUMP_ON)
    {
        state->ledState = LED_WATERING;
    }
    else if (sensorData->soilMoisturePercent < settings->minSoilMoistureThreshold)
    {
        state->ledState = LED_LOW_MOISTURE_ALERT;
    }
    else
    {
        state->ledState = LED_NORMAL;
    }

    HAL_LED_Set(state->ledState);
}