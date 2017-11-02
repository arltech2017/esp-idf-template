#include <stdbool.h>

#define GPIO_LED 5

void led_init(void);

void led_change(bool level);

bool led_get(void);
