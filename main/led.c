#include "led.h"

#include "esp_system.h"

#include <stdbool.h>

bool is_on;

void led_change(bool level) {
	is_on = level;
	gpio_set_level(GPIO_LED, level);
}

bool led_get(void) {
	return is_on;
	//return gpio_get_level(GPIO_LED);
}

void led_init(void) {
	gpio_set_direction(GPIO_LED, GPIO_MODE_OUTPUT);
	led_change(0);
}
