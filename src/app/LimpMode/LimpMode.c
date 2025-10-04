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

    double current_limit = (-35.431*FOURTH(min_V)) + (563.33*CUBE(min_V)) - (3359*SQ(min_V)) + (8907.7*min_V) - (8832.2);


    if (current_limit < 0.0) {
        current_limit = 0.0;
    }

    // Send the current limit over CAN
    // can_bus.bms_limp_mode.bms_limp_mode_voltage_limp_level = main_dbc_bms_limp_mode_bms_limp_mode_voltage_limp_level_encode(voltage_limp_level);
    can_bus.bms_limp_mode.bms_limp_mode_voltage_current_limit = main_dbc_bms_limp_mode_bms_limp_mode_voltage_current_limit_encode(current_limit);

    return current_limit;
}


double LimpMode_temperature_limit(TempModel_t *tm)
{
    double max_T = tm->max_temp_C;

    double current_limit = (0.00004*FOURTH(max_T)) - (0.0066*CUBE(max_T)) + (0.3708*SQ(max_T)) - (8.5571*max_T) + (108.66);


    // Send the current limit over CAN
    //can_bus.bms_limp_mode.bms_limp_mode_temp_limp_level = main_dbc_bms_limp_mode_bms_limp_mode_temp_limp_level_encode(temperature_limp_level);
    can_bus.bms_limp_mode.bms_limp_mode_temp_current_limit = main_dbc_bms_limp_mode_bms_limp_mode_temp_current_limit_encode(current_limit);

    return current_limit;
}
