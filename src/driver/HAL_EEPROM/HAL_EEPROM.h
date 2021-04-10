#ifndef HAL_EEPROM_H
#define HAL_EEPROM_H

#include <stdint.h>

// EEPROM MAP
typedef struct {
    // whether or not the saved soc is valid
    uint32_t saved_soc_en;
    // saved soc (int 0-100)
    uint32_t saved_soc;
} bms_eeprom_t;

void HAL_EEPROM_write(bms_eeprom_t* map);

void HAL_EEPROM_read(bms_eeprom_t* map);

#endif // HAL_EEPROM_H