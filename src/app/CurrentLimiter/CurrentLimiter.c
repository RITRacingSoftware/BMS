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
    // Calculate the current limit to stay under the power
    double current_limit;
    current_limit = (MAX_POWER_LIMIT_KW*1000) / (bm->total_V);

    //Calculate the current limit for voltages and decrease the limit if needed
    double voltage_limp_mode_current = LimpMode_voltage_limit(bm);
    current_limit = MIN(current_limit, voltage_limp_mode_current);

    //Calculate the current limit for temperatures and decrease the limit if needed
    double temp_limp_mode_current = LimpMode_temperature_limit(tm);
    current_limit = MIN(current_limit, temp_limp_mode_current);

    // Set the current limit
    can_bus.bms_current_limit.d1_max_discharge_current = f29bms_dbc_bms_current_limit_d1_max_discharge_current_encode(current_limit);


    double charge_current_limit = MIN(current_limit, MAX_REGEN_CURRENT_A);
    can_bus.bms_current_limit.d2_max_charge_current = f29bms_dbc_bms_current_limit_d2_max_charge_current_encode(current_limit);
}