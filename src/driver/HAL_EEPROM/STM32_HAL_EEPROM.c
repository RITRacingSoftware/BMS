#include "HAL_EEPROM.h"
#include "stm32f0xx_flash.h"

#define CONFIG_FLASH_PAGE 0x803E000

void HAL_EEPROM_write(uint32_t addr, uint32_t data)
{
    FLASH_Unlock();
    FLASH_ErasePage(CONFIG_FLASH_PAGE);
    FLASH_ProgramWord(addr, data);
    FLASH_Lock();
}

void HAL_EEPROM_read(uint32_t addr, uint32_t* data)
{
    *data = *((uint32_t*)addr);
}