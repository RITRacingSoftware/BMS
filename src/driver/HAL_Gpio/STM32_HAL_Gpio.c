#include "HAL_Gpio.h"

#include <stdint.h>
#include "stm32f0xx_gpio.h"
#include "stm32f0xx.h"
#include <string.h>
#include <stdlib.h>

#define STATUS_LED_PIN ((uint16_t)0x0001)
#define CHARGE_ENABLE_PIN ((uint16_t)0x0100)    //Charge Signal
#define CHARGE_AVAILABLE_PIN ((uint16_t)0x0040) //Charging

/** @defgroup GPIO_pins_define 
  * @{
  */
#define GPIO_Pin_0 ((uint16_t)0x0001)   /*!< Pin 0 selected    */
#define GPIO_Pin_1 ((uint16_t)0x0002)   /*!< Pin 1 selected    */
#define GPIO_Pin_2 ((uint16_t)0x0004)   /*!< Pin 2 selected    */
#define GPIO_Pin_3 ((uint16_t)0x0008)   /*!< Pin 3 selected    */
#define GPIO_Pin_4 ((uint16_t)0x0010)   /*!< Pin 4 selected    */
#define GPIO_Pin_5 ((uint16_t)0x0020)   /*!< Pin 5 selected    */
#define GPIO_Pin_6 ((uint16_t)0x0040)   /*!< Pin 6 selected    */
#define GPIO_Pin_7 ((uint16_t)0x0080)   /*!< Pin 7 selected    */
#define GPIO_Pin_8 ((uint16_t)0x0100)   /*!< Pin 8 selected    */
#define GPIO_Pin_9 ((uint16_t)0x0200)   /*!< Pin 9 selected    */
#define GPIO_Pin_10 ((uint16_t)0x0400)  /*!< Pin 10 selected   */
#define GPIO_Pin_11 ((uint16_t)0x0800)  /*!< Pin 11 selected   */
#define GPIO_Pin_12 ((uint16_t)0x1000)  /*!< Pin 12 selected   */
#define GPIO_Pin_13 ((uint16_t)0x2000)  /*!< Pin 13 selected   */
#define GPIO_Pin_14 ((uint16_t)0x4000)  /*!< Pin 14 selected   */
#define GPIO_Pin_15 ((uint16_t)0x8000)  /*!< Pin 15 selected   */
#define GPIO_Pin_All ((uint16_t)0xFFFF) /*!< All pins selected */

// const GPIO_TypeDef STATUS_LED_GPIOx = GPIOA;
// const GPIO_TypeDef CHARGE_ENABLE_GPIOx = GPIOA;
// const GPIO_TypeDef CHARGE_AVAILABLE_GPIOx = GPIOA;

struct PIN_Typedef
{
    GPIO_TypeDef *GPIOx;
    uint16_t GPIO_Pin;
};

static void get_GPIO_TypeDef(GpioPin_e thisPin, struct PIN_Typedef *thisGPIO)
{
    switch (thisPin)
    {
    case GpioPin_STATUS_LED:
        thisGPIO->GPIOx = GPIOA;
        thisGPIO->GPIO_Pin = STATUS_LED_PIN;
        break;
    case GpioPin_CHARGE_ENABLE:
        thisGPIO->GPIOx = GPIOA;
        thisGPIO->GPIO_Pin = CHARGE_ENABLE_PIN;
        break;
    case GpioPin_CHARGER_AVAILABLE:
        thisGPIO->GPIOx = GPIOA;
        thisGPIO->GPIO_Pin = CHARGE_AVAILABLE_PIN;
        break;
    }
}

void HAL_Gpio_init(void)
{
    //RCC_AHBPeriphClockCmd();
    //To do
}

bool HAL_Gpio_read(GpioPin_e pin)
{
    struct PIN_Typedef thisGPIO;
    get_GPIO_TypeDef(pin, &thisGPIO);
    return GPIO_ReadOutputDataBit(thisGPIO.GPIOx, thisGPIO.GPIO_Pin);
}

void HAL_Gpio_write(GpioPin_e pin, bool state)
{
    BitAction thisState = Bit_RESET;
    if (state)
    {
        thisState = Bit_SET;
    }
    struct PIN_Typedef thisGPIO;
    get_GPIO_TypeDef(pin, &thisGPIO);
    GPIO_WriteBit(thisGPIO.GPIOx, thisGPIO.GPIO_Pin, thisState);
}
