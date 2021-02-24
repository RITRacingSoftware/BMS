#include "HAL_EEPROM.h"
#include "stm32f0xx_flash.h"

#define CONFIG_FLASH_PAGE_ADDR 0x803F800

void HAL_EEPROM_write(bms_eeprom_t* map)
{
    FLASH_Unlock();
    FLASH_ErasePage(CONFIG_FLASH_PAGE_ADDR);
    for (int i = 0; i < sizeof(bms_eeprom_t)/4; i++)
    {
        FLASH_ProgramWord(CONFIG_FLASH_PAGE_ADDR+i*4, ((uint32_t*)map)[i]);
    }
    FLASH_Lock();
}

void HAL_EEPROM_read(bms_eeprom_t* map)
{
    *map = *((bms_eeprom_t*)CONFIG_FLASH_PAGE_ADDR);
}
