#ifndef HAL_GPIO_H
#define HAL_GPIO_H

#include <stdbool.h>

void HAL_Gpio_write(int pin, bool state);
bool HAL_Gpio_read(int pin);

#endif // HAL_GPIO_H