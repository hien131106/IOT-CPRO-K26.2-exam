#ifndef HAL_ACTUATORS_H
#define HAL_ACTUATORS_H

#include "config.h"

/**
 * @brief   Turns the water pump ON.
 * @param   None.
 * @return  void.
 * @details This function simulates turning the water pump on by printing a message to the console.
 */
void HAL_Pump_On(void);

/**
 * @brief   Turns the water pump OFF.
 * @param   None.
 * @return  void.
 * @details This function simulates turning the water pump off by printing a message to the console.
 */
void HAL_Pump_Off(void);

/**
 * @brief   Sets the LED state to indicate the current system status.
 * @param   state The desired LED state defined in LedState_t.
 * @return  void.
 * @details This function simulates setting the LED state by printing a message to the console based on the provided state.
 */
void HAL_LED_Set(LedState_t state);

#endif