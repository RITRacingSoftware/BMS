#include "HAL_EEPROM.h"

void HAL_EEPROM_write(bms_eeprom_t* map)
{
    // :D
}

void HAL_EEPROM_read(bms_eeprom_t* map)
{
    // O.O
    map->saved_soc = 0;
    map->saved_soc_en = 0;
}