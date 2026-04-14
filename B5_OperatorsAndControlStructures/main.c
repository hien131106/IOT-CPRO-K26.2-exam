#include <stdio.h>
#include "led_driver.h"

int main()
{
    if (led_init(10) != 0)
    {
        printf("Init failed\n");
        return -1;
    }

    const uint32_t *buf = led_get_buffer();

    printf("Initial state:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("LED[%d] = 0x%08X\n", i, buf[i]);
    }

    led_set_pixel_color(0, 255, 0, 0);   // Red
    led_set_pixel_color(9, 0, 0, 255);   // Blue
    led_set_pixel_color(4, 255, 255, 255); // White

    printf("\nAfter setting colors:\n");
    printf("LED[0] = 0x%08X\n", buf[0]);
    printf("LED[4] = 0x%08X\n", buf[4]);
    printf("LED[9] = 0x%08X\n", buf[9]);

    led_fill(0, 255, 0);

    printf("\nAfter fill GREEN:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("LED[%d] = 0x%08X\n", i, buf[i]);
    }

    led_shutdown();
    return 0;

}