#ifndef HAL_EEPROM_H
#define HAL_EEPROM_H

#include <stdint.h>

// subject to change, will probably need unions here
typedef uint32_t eeprom_data_t;
typedef uint16_t eeprom_addr_t;

// EEPROM MAP
#define SAVED_SOC_EN_ADDR ((eeprom_addr_t) 69)
#define SAVED_SOC_ADDR    ((eeprom_addr_t) 420)

// TODO- actually implement this module and redefine it as needed

void HAL_EEPROM_write(eeprom_addr_t addr, eeprom_data_t data);

void HAL_EEPROM_read(eeprom_addr_t addr, eeprom_data_t* data);

#endif // HAL_EEPROM_H