#include "CurrentLimiter.h"
#include "f29BmsConfig.h"
#include "CAN.h"

void CurrentLimiter_init(void)
{
    // nothing needs to be initialized
}

void CurrentLimiter_10Hz(BatteryModel_t* bm)
{
    // Calculate the current limit
    double current_limit;
    current_limit = MAX_POWER_LIMIT_KW / bm->total_V;

    // Set the current limit
    can_bus.bms_current_limit.d1_max_discharge_current = f29bms_dbc_bms_current_limit_d1_max_discharge_current_encode(current_limit);
}