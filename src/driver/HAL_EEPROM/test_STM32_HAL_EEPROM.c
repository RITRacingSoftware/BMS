#include "HAL_EEPROM.h"

int main()
{
    //HAL_EEPROM_write(SAVED_SOC_ADDR, 0x123);
    uint32_t data = 0;
    HAL_EEPROM_read(SAVED_SOC_ADDR, &data);
    if (data == 0);
}