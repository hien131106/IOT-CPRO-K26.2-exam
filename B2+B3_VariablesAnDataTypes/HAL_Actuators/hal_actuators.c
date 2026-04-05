#include "hal_actuators.h"
#include <stdio.h>

void HAL_Pump_On(void)
{
    printf("[ACTUATOR] Pump ON\n");
}

void HAL_Pump_Off(void)
{
    printf("[ACTUATOR] Pump OFF\n");
}

void HAL_LED_Set(LedState_t state)
{
    switch (state)
    {
        case LED_NORMAL:
            printf("[LED] GREEN\n");
            break;
        case LED_WATERING:
            printf("[LED] YELLOW\n");
            break;
        case LED_LOW_MOISTURE_ALERT:
            printf("[LED] RED_INTERMITTENT\n");
            break;
        case LED_ERROR:
            printf("[LED] RED_CONTINUOUS\n");
            break;
        default:    
            printf("[LED] UNKNOWN STATE\n");
            break;
    }
}