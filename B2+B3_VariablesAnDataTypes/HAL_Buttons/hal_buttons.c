#include "hal_buttons.h"

uint8_t HAL_Button1_Pressed(void)
{
    static int counter = 0;
    counter++;
    return (counter % 2 == 0) ? 1 : 0;
}

uint8_t HAL_Button2_Pressed(void)
{
    static int counter = 0;
    counter++;
    return (counter % 2 == 0) ? 1 : 0;
}