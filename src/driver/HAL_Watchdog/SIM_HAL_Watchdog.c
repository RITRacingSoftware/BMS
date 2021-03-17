#include "HAL_Watchdog.h"
#include "BmsSim.pb.h"

void HAL_Watchdog_pet(void)
{
    BmsOut* out = BmsSimClient_get_outputs();
    out->watchdog_pet = true;
}