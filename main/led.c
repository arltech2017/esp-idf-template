#include "led.h"

#include <stdbool.h>

void led_change(bool level) {
	gpio_set_level(GPIO_LED, level);
}

void led_init(void) {
	gpio_set_direction(GPIO_LED, GPIO_MODE_OUTPUT);
	led_change(0);
}
