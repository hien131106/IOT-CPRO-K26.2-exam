#ifndef HAL_SENSORS_H
#define HAL_SENSORS_H

#include "config.h"

/**
 * @brief   Initializes the sensors.
 * @param   None.
 * @return  void.
 * @details This function initializes the sensors by setting up their configuration and enabling them.
 */
void HAL_Sensors_Init(void);

/**
 * @brief   Reads data from the sensors.
 * @param   data Pointer to the structure where sensor data will be stored.
 * @return  void.
 * @details This function reads data from the sensors and stores it in the provided structure.
 */
void HAL_Sensors_Read(SensorData_t* data);

#endif