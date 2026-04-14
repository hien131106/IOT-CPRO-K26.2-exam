#ifndef LED_DRIVER_H
#define LED_DRIVER_H

#include <stdint.h>
#include <stddef.h>

/** 
 * @brief   Initialize the LED driver.
 * @param   num_pixels The number of pixels to control.
 * @return  0 on success, -1 on failure.
 */
int led_init(size_t num_pixels);

/** 
 * @brief   Shutdown the LED driver and free resources.
 * @return  void.
 */
void led_shutdown();

/** 
 * @brief   Set the color of a specific pixel.
 * @param   index The index of the pixel to set (0-based).
 * @param   r The red component (0-255).
 * @param   g The green component (0-255).
 * @param   b The blue component (0-255).
 * @return  void.
 */
void led_set_pixel_color(size_t index, uint8_t r, uint8_t g, uint8_t b);

/** 
 * @brief   Fill all pixels with a specific color.
 * @param   r The red component (0-255).
 * @param   g The green component (0-255).
 * @param   b The blue component (0-255).
 * @return  void.
 */
void led_fill(uint8_t r, uint8_t g, uint8_t b);

/** 
 * @brief   Clear all pixels.
 * @return  void.
 */
void led_clear();

/** 
 * @brief   Get a pointer to the internal pixel buffer.
 * @return  A pointer to the pixel buffer.
 */
const uint32_t* led_get_buffer();

/** 
 * @brief   Get the number of pixels.
 * @return  The number of pixels.
 */
size_t led_get_pixel_count();

#endif