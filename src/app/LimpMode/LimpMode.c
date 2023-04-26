#include <stdint.h>
#include <stdbool.h>
#include "CAN.h"
#include "LimpMode.h"
#include "common_macros.h"


void LimpMode_init(void)
{
    // Nothing needed rn
}


double LimpMode_voltage_limit(BatteryModel_t *bm)
{
    double current_limit = OVERCURRENT_A; // Set to maximum if not in limp mode ranges

    LimpModeLevel_e voltage_limp_level = LimpModeLevel_NO_LIMP;

    if(bm->smallest_V <= LIMP_MODE_VOLTAGE_LEVEL_3)
    {
        current_limit = LIMP_MODE_LEVEL_3_CURRENT_A;
        voltage_limp_level = LimpModeLevel_LEVEL_3;
    }
    else if(bm->smallest_V <= LIMP_MODE_VOLTAGE_LEVEL_2)
    {
        current_limit = LIMP_MODE_LEVEL_2_CURRENT_A;
        voltage_limp_level = LimpModeLevel_LEVEL_2;
    }
    else if(bm->smallest_V <= LIMP_MODE_VOLTAGE_LEVEL_1)
    {
        current_limit = LIMP_MODE_LEVEL_1_CURRENT_A;
        voltage_limp_level = LimpModeLevel_LEVEL_1;
    }

    //Send the current limit over CAN
    // For some reason when not current limiting, the current limit says -162 on CANalyzer
    can_bus.bms_limp_mode.bms_limp_mode_voltage_limp_level = f29bms_dbc_bms_limp_mode_bms_limp_mode_voltage_limp_level_encode(voltage_limp_level);
    can_bus.bms_limp_mode.bms_limp_mode_voltage_current_limit = f29bms_dbc_bms_limp_mode_bms_limp_mode_voltage_current_limit_encode(current_limit);

    return current_limit;
}


double LimpMode_temperature_limit(TempModel_t *tm)
{
    double current_limit = OVERCURRENT_A; // Set to maximum if not in limp mode ranges

    LimpModeLevel_e temperature_limp_level = LimpModeLevel_NO_LIMP;

    // Find highest temperature
    float max_temp = tm->temps_C[0];
    for(uint8_t i = 1; i < NUM_THERMISTOR; i++)
    {
        max_temp = MAX(max_temp, tm->temps_C[i]);
    }
    
    // Set the limit if needed
    if(max_temp >= LIMP_MODE_TEMP_LEVEL_3)
    {
        current_limit = LIMP_MODE_LEVEL_3_CURRENT_A;
        temperature_limp_level = LimpModeLevel_LEVEL_3;
    }
    else if(max_temp >= LIMP_MODE_TEMP_LEVEL_2)
    {
        current_limit = LIMP_MODE_LEVEL_2_CURRENT_A;
        temperature_limp_level = LimpModeLevel_LEVEL_2;
    }
    else if(max_temp >= LIMP_MODE_TEMP_LEVEL_1)
    {
        current_limit = LIMP_MODE_LEVEL_1_CURRENT_A;
        temperature_limp_level = LimpModeLevel_LEVEL_1;
    }

    // Send the current limit over CAN
    // For some reason when not current limiting, the current limit says -162 on CANalyzer
    can_bus.bms_limp_mode.bms_limp_mode_temp_limp_level = f29bms_dbc_bms_limp_mode_bms_limp_mode_temp_limp_level_encode(temperature_limp_level);
    can_bus.bms_limp_mode.bms_limp_mode_temp_current_limit = f29bms_dbc_bms_limp_mode_bms_limp_mode_temp_current_limit_encode(current_limit);

    return current_limit;
}