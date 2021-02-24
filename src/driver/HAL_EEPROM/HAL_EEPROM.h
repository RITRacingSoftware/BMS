#ifndef HAL_EEPROM_H
#define HAL_EEPROM_H

#include <stdint.h>

// EEPROM MAP
#define SAVED_SOC_EN_ADDR ((uint32_t) 0x803E000)
#define SAVED_SOC_ADDR    ((uint32_t) 0x803E010)

// TODO- actually implement this module and redefine it as needed
void HAL_EEPROM_write(uint32_t addr, uint32_t data);

void HAL_EEPROM_read(uint32_t addr, uint32_t* data);

#endif // HAL_EEPROM_H