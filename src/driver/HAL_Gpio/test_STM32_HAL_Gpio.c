#include HAL_Gpio.h

int main()
{
    // TODO- implement
    HAL_GPIO_Init();
    bool chargeAvailableState = HAL_Gpio_read(CHARGE_AVAILABLE_PIN);
    printf("Charge available state: %d", chargeAvailableState);
    HAL_Gpio_write(STATUS_LED_PIN, true);
    HAL_Gpio_write(CHARGE_ENABLE_PIN, true);

}