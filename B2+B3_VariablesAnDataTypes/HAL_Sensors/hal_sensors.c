#include "hal_sensors.h"
#include <stdio.h>

void HAL_Sensors_Init(void)
{
    printf("Initializing sensors...\n");
}

void HAL_Sensors_Read(SensorData_t* data)
{
    static float fakeMoisture = 50.0f;

    fakeMoisture -= 2.0f;
    if (fakeMoisture < 20.0f) 
    {
        fakeMoisture = 70.0f;
    }

    data->soilMoisturePercent = fakeMoisture;
    data->airTemperatureCelsius = 25.0f;
    printf("[SENSOR] Moisture: %.2f, Temp: %.2f\n", data->soilMoisturePercent, data->airTemperatureCelsius);
}