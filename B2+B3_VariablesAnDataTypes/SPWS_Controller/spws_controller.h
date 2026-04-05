#ifndef SPWS_CONTROLLER_H
#define SPWS_CONTROLLER_H

#include "config.h"

void SPWS_Run(SystemSettings_t* settings,
              SystemState_t* state, 
              SensorData_t* sensorData);

#endif