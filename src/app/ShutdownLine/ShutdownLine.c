#include "ShutdownLine.h"

#include "HAL_ShutdownLine.h"

void ShutdownLine_init(void)
{
    ShutdownLine_indicate_fault();
}

void ShutdownLine_indicate_fault(void)
{
    HAL_ShutdownLine_drive_low();
}

void ShutdownLine_nominal(void)
{
    HAL_ShutdownLine_drive_high();
}
