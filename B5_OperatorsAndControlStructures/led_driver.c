#include "led_driver.h"
#include <stdlib.h>

static uint32_t *led_buffer = NULL;
static size_t led_count = 0;

int led_init(size_t num_pixels)
{
    if (num_pixels == 0) return -1;

    led_buffer = (uint32_t*)malloc(num_pixels * sizeof(uint32_t));
    if (led_buffer == NULL) return -1;

    led_count = num_pixels;

    for (size_t i = 0; i < led_count; i++) {
        led_buffer[i] = 0x00000000;
    }

    return 0;
}

void led_shutdown()
{
    if (led_buffer != NULL)
    {
        free(led_buffer);
        led_buffer = NULL;
        led_count = 0;
    }
}

void led_set_pixel_color(size_t index, uint8_t r, uint8_t g, uint8_t b)
{
    if (led_buffer == NULL) return;
    if (index >= led_count) return;

    led_buffer[index] = g << 16 | r << 8 | b;
}

void led_fill(uint8_t r, uint8_t g, uint8_t b)
{
    if (led_buffer == NULL) return;

    uint32_t color = g << 16 | r << 8 | b;

    for (size_t i = 0; i < led_count; i++)
    {
        led_buffer[i] = color;
    }
}

void led_clear()
{
    led_fill(0, 0, 0);
}

const uint32_t* led_get_buffer()
{
    return led_buffer;
}

size_t led_get_pixel_count()
{
    return led_count;
}
