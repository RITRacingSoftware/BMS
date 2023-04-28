#include <stdint.h>
#include <stdbool.h>
#include "CAN.h"
#include "LimpMode.h"
#include "common_macros.h"

static LimpModeLevel_e voltage_limp_level;
static LimpModeLevel_e temperature_limp_level;

void LimpMode_init(void)
{
    // Initialize to no limp
    voltage_limp_level = LimpModeLevel_NO_LIMP;
    temperature_limp_level = LimpModeLevel_NO_LIMP;
}


double LimpMode_voltage_limit(BatteryModel_t *bm)
{
    double current_limit = (double) OVERCURRENT_A;

    // Sort of a state machine. Could  probably be improved, just trying to get it done and working
    // Set the current limit based on the level, and move to higher limp mode level if needed
    switch(voltage_limp_level)
    {
        case LimpModeLevel_NO_LIMP:
            current_limit = (double) OVERCURRENT_A;
            if(bm->smallest_V <= LIMP_MODE_VOLTAGE_LEVEL_1)
            {
                voltage_limp_level = LimpModeLevel_LEVEL_1;
            }
            break;
        case LimpModeLevel_LEVEL_1:
            current_limit = LIMP_MODE_LEVEL_1_CURRENT_A;
            if(bm->smallest_V <= LIMP_MODE_VOLTAGE_LEVEL_2)
            {
                voltage_limp_level = LimpModeLevel_LEVEL_2;
            }
            break;
        case LimpModeLevel_LEVEL_2:
            current_limit = LIMP_MODE_LEVEL_2_CURRENT_A;
            if(bm->smallest_V <= LIMP_MODE_VOLTAGE_LEVEL_3)
            {
                voltage_limp_level = LimpModeLevel_LEVEL_3;
            }
            break;
        case LimpModeLevel_LEVEL_3:
            current_limit = LIMP_MODE_LEVEL_3_CURRENT_A;
            break;
    }

    // Send the current limit over CAN
    // For some reason when not current limiting, the current limit says -162 on CANalyzer
    can_bus.bms_limp_mode.bms_limp_mode_voltage_limp_level = f29bms_dbc_bms_limp_mode_bms_limp_mode_voltage_limp_level_encode(voltage_limp_level);
    can_bus.bms_limp_mode.bms_limp_mode_voltage_current_limit = f29bms_dbc_bms_limp_mode_bms_limp_mode_voltage_current_limit_encode(current_limit);

    return current_limit;
}


double LimpMode_temperature_limit(TempModel_t *tm)
{

    // Find highest temperature
    float max_temp = tm->temps_C[0];
    for(uint8_t i = 1; i < NUM_THERMISTOR; i++)
    {
        max_temp = MAX(max_temp, tm->temps_C[i]);
    }

    double current_limit = (double) OVERCURRENT_A;

    // Sort of a state machine. Could  probably be improved, just trying to get it done and working
    // Set the current limit based on the level, and move to higher limp mode level if needed
    switch(temperature_limp_level)
    {
        case LimpModeLevel_NO_LIMP:
            current_limit = (double) OVERCURRENT_A;
            if(max_temp >= LIMP_MODE_TEMP_LEVEL_1)
            {
                temperature_limp_level = LimpModeLevel_LEVEL_1;
            }
            break;
        case LimpModeLevel_LEVEL_1:
            current_limit = LIMP_MODE_LEVEL_1_CURRENT_A;
            if(max_temp >= LIMP_MODE_TEMP_LEVEL_2)
            {
                temperature_limp_level = LimpModeLevel_LEVEL_2;
            }
            break;
        case LimpModeLevel_LEVEL_2:
            current_limit = LIMP_MODE_LEVEL_2_CURRENT_A;
            if(max_temp >= LIMP_MODE_TEMP_LEVEL_3)
            {
                temperature_limp_level = LimpModeLevel_LEVEL_3;
            }
            break;
        case LimpModeLevel_LEVEL_3:
            current_limit = LIMP_MODE_LEVEL_3_CURRENT_A;
            break;
    }

    // Send the current limit over CAN
    // For some reason when not current limiting, the current limit says -162 on CANalyzer
    can_bus.bms_limp_mode.bms_limp_mode_temp_limp_level = f29bms_dbc_bms_limp_mode_bms_limp_mode_temp_limp_level_encode(temperature_limp_level);
    can_bus.bms_limp_mode.bms_limp_mode_temp_current_limit = f29bms_dbc_bms_limp_mode_bms_limp_mode_temp_current_limit_encode(current_limit);

    return current_limit;
}