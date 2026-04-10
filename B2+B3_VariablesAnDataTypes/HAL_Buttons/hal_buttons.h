#ifndef HAL_BUTTONS_H
#define HAL_BUTTONS_H

#include <stdint.h>

/**
 * @brief   Checks if Button1 is pressed.
 * @param   None.
 * @return  uint8_t: 1 if pressed, 0 if not pressed.
 * @details This function simulates checking the state of Button1 by returning a simulated value.
 */
uint8_t HAL_Button1_Pressed(void);

/**
 * @brief   Checks if Button2 is pressed.
 * @param   None.
 * @return  uint8_t: 1 if pressed, 0 if not pressed.
 * @details This function simulates checking the state of Button2 by returning a simulated value.
 */
uint8_t HAL_Button2_Pressed(void);

#endif