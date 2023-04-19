#include <stdint.h>
#include <stdbool.h>
#include "LimpMode.h"
#include "common_macros.h"


void LimpMode_init(void)
{
    // Nothing needed rn
}


double LimpMode_voltage_limit(BatteryModel_t *bm)
{
    double current_limit = OVERCURRENT_A; // Set to maximum if not in limp mode ranges
    bool is_current_limiting = false;

    if(bm->smallest_V <= LIMP_MODE_VOLTAGE_LEVEL_3)
    {
        current_limit = LIMP_MODE_LEVEL_3;
        is_current_limiting = true;
    }
    else if(bm->smallest_V <= LIMP_MODE_VOLTAGE_LEVEL_2)
    {
        current_limit = LIMP_MODE_LEVEL_2;
        is_current_limiting = true;
    }
    else if(bm->smallest_V <= LIMP_MODE_VOLTAGE_LEVEL_1)
    {
        current_limit = LIMP_MODE_LEVEL_1;
        is_current_limiting = true;
    }

    // TODO: Send the current limit over CAN

    return current_limit;
}


double LimpMode_temperature_limit(TempModel_t *tm)
{
    double current_limit = OVERCURRENT_A; // Set to maximum if not in limp mode ranges
    bool is_current_limiting = false;

    // Find highest temperature
    float max_temp = tm->temps_C[0];
    for(uint8_t i = 1; i < NUM_THERMISTOR; i++)
    {
        max_temp = MAX(max_temp, tm->temps_C[i]);
    }
    
    // Set the limit if needed
    if(max_temp >= LIMP_MODE_TEMP_LEVEL_3)
    {
        current_limit = LIMP_MODE_LEVEL_3;
        is_current_limiting = true;
    }
    else if(max_temp >= LIMP_MODE_TEMP_LEVEL_2)
    {
        current_limit = LIMP_MODE_LEVEL_2;
        is_current_limiting = true;
    }
    else if(max_temp >= LIMP_MODE_TEMP_LEVEL_1)
    {
        current_limit = LIMP_MODE_LEVEL_1;
        is_current_limiting = true;
    }

    // TODO: Send the current limit over CAN

    return current_limit;
}