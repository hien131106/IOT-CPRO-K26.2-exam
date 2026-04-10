#ifndef SPWS_CONTROLLER_H
#define SPWS_CONTROLLER_H

#include "config.h"

/**
 * @brief   Runs the SPWS controller logic.
 * @param   settings Pointer to the system settings structure.
 * @param   state Pointer to the system state structure.
 * @param   sensorData Pointer to the sensor data structure.
 * @return  void.
 * @details This function implements the main control logic for the SPWS system.
 */
void SPWS_Run(SystemSettings_t* settings,
              SystemState_t* state, 
              SensorData_t* sensorData);

#endif