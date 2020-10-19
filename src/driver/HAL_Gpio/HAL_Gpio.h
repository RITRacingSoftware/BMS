#ifndef HAL_GPIO_H
#define HAL_GPIO_H

#include <stdbool.h>

typedef enum 
{
    GpioPin_STATUS_LED,
    GpioPin_CHARGE_ENABLE,
    GpioPin_CHARGER_AVAILABLE
} GpioPin_e;
// TODO - implement these
void HAL_Gpio_init(void);
void HAL_Gpio_write(GpioPin_e pin, bool state);
bool HAL_Gpio_read(GpioPin_e pin);

#endif // HAL_GPIO_H