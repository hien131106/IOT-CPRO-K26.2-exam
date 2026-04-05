#ifndef HAL_ACTUATORS_H
#define HAL_ACTUATORS_H

#include "config.h"

void HAL_Pump_On(void);
void HAL_Pump_Off(void);
void HAL_LED_Set(LedState_t state);

#endif