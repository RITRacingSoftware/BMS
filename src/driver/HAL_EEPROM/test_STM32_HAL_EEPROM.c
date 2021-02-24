#include "HAL_EEPROM.h"

#define CONFIG_FLASH_PAGE 0x8040000

int main()
{
    bms_eeprom_t map;
    map.saved_soc_en = 0;
    map.saved_soc = 0;
    HAL_EEPROM_write(&map);
    HAL_EEPROM_read(&map);
}