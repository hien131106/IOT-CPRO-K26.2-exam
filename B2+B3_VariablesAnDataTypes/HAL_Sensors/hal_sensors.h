#ifndef HAL_SENSORS_H
#define HAL_SENSORS_H

#include "config.h"

void HAL_Sensors_Init(void);
void HAL_Sensors_Read(SensorData_t* data);

#endif