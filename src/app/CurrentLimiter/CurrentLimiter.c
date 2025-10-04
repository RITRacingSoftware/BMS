#include "CurrentLimiter.h"
#include "f29BmsConfig.h"
#include "CAN.h"
#include "LimpMode.h"
#include "common_macros.h"

void CurrentLimiter_init(void)
{
    // nothing needs to be initialized
}

void CurrentLimiter_10Hz(BatteryModel_t* bm, TempModel_t *tm)
{
    //Calculate the current limit for voltages and decrease the limit if needed
    double voltage_current_limit = LimpMode_voltage_limit(bm);

    //Calculate the current limit for temperatures and decrease the limit if needed
    double temp_limp_mode_current = LimpMode_temperature_limit(tm);
    double current_limit = MIN(voltage_current_limit, temp_limp_mode_current);

    // Set the current limit
    can_bus.bms_current_limit.d1_max_discharge_current = main_dbc_bms_current_limit_d1_max_discharge_current_encode(current_limit);
}
