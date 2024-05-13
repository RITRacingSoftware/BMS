#include "LimpMode.h"

#include <stdint.h>
#include <stdbool.h>

#include "CAN.h"
#include "common_macros.h"

// Calculated for a time constant of ~5s
// https://en.wikipedia.org/wiki/Exponential_smoothing#Time_constant
#define VOLTAGE_AVERAGE_FACTOR 0.02

static double min_V_avg;

void LimpMode_init(void)
{
    min_V_avg = 0;
}


double LimpMode_voltage_limit(BatteryModel_t *bm)
{
    double min_V = bm->smallest_V;

    min_V_avg = VOLTAGE_AVERAGE_FACTOR * min_V + (1-VOLTAGE_AVERAGE_FACTOR) * min_V_avg;

    double current_limit = -222*min_V_avg*min_V_avg + 1845.9*min_V_avg - 3538.8;

    if (current_limit < 0.0) {
        current_limit = 0.0;
    }

    // Send the current limit over CAN
    // can_bus.bms_limp_mode.bms_limp_mode_voltage_limp_level = formula_main_dbc_bms_limp_mode_bms_limp_mode_voltage_limp_level_encode(voltage_limp_level);
    can_bus.bms_limp_mode.bms_limp_mode_voltage_current_limit = formula_main_dbc_bms_limp_mode_bms_limp_mode_voltage_current_limit_encode(current_limit);

    return current_limit;
}


double LimpMode_temperature_limit(TempModel_t *tm)
{
    double max_T = tm->max_temp_C;

    double current_limit = -0.1999*max_T*max_T + 8.5934*max_T + 203.91;

    // Send the current limit over CAN
    //can_bus.bms_limp_mode.bms_limp_mode_temp_limp_level = formula_main_dbc_bms_limp_mode_bms_limp_mode_temp_limp_level_encode(temperature_limp_level);
    can_bus.bms_limp_mode.bms_limp_mode_temp_current_limit = formula_main_dbc_bms_limp_mode_bms_limp_mode_temp_current_limit_encode(current_limit);

    return current_limit;
}
