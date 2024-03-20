#include <stdint.h>
#include <stdbool.h>
#include "CAN.h"
#include "LimpMode.h"
#include "common_macros.h"

static LimpModeLevel_e voltage_limp_level;
static LimpModeLevel_e temperature_limp_level;

// STATE MACHINE STUFF
typedef enum
{
    // The power is not limited
    LimpModeVoltage_NO_LIMP,

    // The min cell voltage is below the level 1 threshold, but the time has not elapsed to enter 
    // Level 1 of power limiting
    LimpModeVoltage_NO_LIMP_BELOW_THRESHOLD,

    // The power is limited to level 1
    LimpModeVoltage_LIMP_LEVEL_1,

    // The min cell voltage is below the level 2 threshold, but the time has not elapsed to enter 
    // Level 2 of power limiting
    LimpModeVoltage_LIMP_LEVEL_1_BELOW_THRESHOLD,

    // The power is limited to level 2
    LimpModeVoltage_LIMP_LEVEL_2,

    // The min cell voltage is below the level 3 threshold, but the time has not elapsed to enter 
    // Level 3 of power limiting
    LimpModeVoltage_LIMP_LEVEL_2_BELOW_THRESHOLD,    

    // The power is limited to level 3
    LimpModeVoltage_LIMP_LEVEL_3,

    // The min cell voltage is below the level 4 threshold, but the time has not elapsed to enter 
    // Level 4 of power limiting
    LimpModeVoltage_LIMP_LEVEL_3_BELOW_THRESHOLD,    

    // The power is limited to level 4
    LimpModeVoltage_LIMP_LEVEL_4,

    // The min cell voltage is below the level 5 threshold, but the time has not elapsed to enter 
    // Level 5 of power limiting
    LimpModeVoltage_LIMP_LEVEL_4_BELOW_THRESHOLD,  

    // The power is limited to level 5
    LimpModeVoltage_LIMP_LEVEL_5

} LimpModeVoltage_e;

static LimpModeVoltage_e voltage_limp_state;
static uint16_t state_counter_ms;

static void Voltage_Limp_State_Machine(float min_voltage);

void LimpMode_init(void)
{
    // Initialize to no limp
    voltage_limp_level = LimpModeLevel_NO_LIMP;
    temperature_limp_level = LimpModeLevel_NO_LIMP;

    voltage_limp_state = LimpModeVoltage_NO_LIMP;
    state_counter_ms = 0;
}


double LimpMode_voltage_limit(BatteryModel_t *bm)
{
    double current_limit = (double) OVERCURRENT_A;

    Voltage_Limp_State_Machine(bm->smallest_V); // Run the state machine to get state

    // Set the current level based on the state
    switch (voltage_limp_state)
    {
        // Limit to level 1 current if in level 1 or level 1 below threshold
        case LimpModeVoltage_LIMP_LEVEL_1:
        case LimpModeVoltage_LIMP_LEVEL_1_BELOW_THRESHOLD:
            voltage_limp_level = LimpModeLevel_LEVEL_1;
            current_limit = (double) LIMP_MODE_LEVEL_1_CURRENT_A;
            break;

        // Limit to level 2 current if in level 2 or level 2 below threshold
        case LimpModeVoltage_LIMP_LEVEL_2:
        case LimpModeVoltage_LIMP_LEVEL_2_BELOW_THRESHOLD:
            voltage_limp_level = LimpModeLevel_LEVEL_2;
            current_limit = (double) LIMP_MODE_LEVEL_2_CURRENT_A;
            break;
        
        // Limit to level 3 current if in level 3 or level 3 below threshold
        case LimpModeVoltage_LIMP_LEVEL_3:
        case LimpModeVoltage_LIMP_LEVEL_3_BELOW_THRESHOLD:
            voltage_limp_level = LimpModeLevel_LEVEL_3;
            current_limit = (double) LIMP_MODE_LEVEL_3_CURRENT_A;
            break;
        
        // Limit to level 4 current if in level 4 or level 4 below threshold
        case LimpModeVoltage_LIMP_LEVEL_4:
        case LimpModeVoltage_LIMP_LEVEL_4_BELOW_THRESHOLD:
            voltage_limp_level = LimpModeLevel_LEVEL_4;
            current_limit = (double) LIMP_MODE_LEVEL_4_CURRENT_A;
            break;

        // Limit to level 5 current if in level 5
        case LimpModeVoltage_LIMP_LEVEL_5:
            voltage_limp_level = LimpModeLevel_LEVEL_5;
            current_limit = (double) LIMP_MODE_LEVEL_5_CURRENT_A;
            break;

        // Don't limit if in no limp or no limp below threshold
        case LimpModeVoltage_NO_LIMP:
        case LimpModeVoltage_NO_LIMP_BELOW_THRESHOLD:
        default:
            voltage_limp_level = LimpModeLevel_NO_LIMP;
            current_limit = (double) OVERCURRENT_A;
            break;

    }

    // Send the current limit over CAN
    // For some reason when not current limiting, the current limit says -162 on CANalyzer
    can_bus.bms_limp_mode.bms_limp_mode_voltage_limp_level = formula_main_dbc_bms_limp_mode_bms_limp_mode_voltage_limp_level_encode(voltage_limp_level);
    can_bus.bms_limp_mode.bms_limp_mode_voltage_current_limit = formula_main_dbc_bms_limp_mode_bms_limp_mode_voltage_current_limit_encode(current_limit);

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
            if(max_temp >= LIMP_MODE_TEMP_LEVEL_4)
            {
                temperature_limp_level = LimpModeLevel_LEVEL_4;
            }
            break;
        case LimpModeLevel_LEVEL_4:
            current_limit = LIMP_MODE_LEVEL_4_CURRENT_A;
            if(max_temp >= LIMP_MODE_TEMP_LEVEL_5)
            {
                temperature_limp_level = LimpModeLevel_LEVEL_5;
            }
            break;
        case LimpModeLevel_LEVEL_5:
            current_limit = LIMP_MODE_LEVEL_5_CURRENT_A;
            break;
        default:
            break;
    }

    // Send the current limit over CAN
    // For some reason when not current limiting, the current limit says -162 on CANalyzer
    can_bus.bms_limp_mode.bms_limp_mode_temp_limp_level = formula_main_dbc_bms_limp_mode_bms_limp_mode_temp_limp_level_encode(temperature_limp_level);
    can_bus.bms_limp_mode.bms_limp_mode_temp_current_limit = formula_main_dbc_bms_limp_mode_bms_limp_mode_temp_current_limit_encode(current_limit);

    return current_limit;
}

void Voltage_Limp_State_Machine(float min_voltage)
{
    switch(voltage_limp_state)
    {
        case LimpModeVoltage_NO_LIMP:
            if(min_voltage <= LIMP_MODE_VOLTAGE_LEVEL_1)
            {
                voltage_limp_state = LimpModeVoltage_NO_LIMP_BELOW_THRESHOLD;
                state_counter_ms = 0;
            }
            break;

        case LimpModeVoltage_NO_LIMP_BELOW_THRESHOLD:
            // If above voltage threshold for level 1, stay at no limp
            if(min_voltage > LIMP_MODE_VOLTAGE_LEVEL_1)
            {
                voltage_limp_state = LimpModeVoltage_NO_LIMP;
                state_counter_ms = 0;
            }
            // If time to trip has elapsed below voltage threshold, move to level 1
            else if (state_counter_ms >= LIMP_MODE_VOLTAGE_LEVEL_1_TIME_MS)
            {
                voltage_limp_state = LimpModeVoltage_LIMP_LEVEL_1;
                state_counter_ms = 0;
            }
            else
            {
                state_counter_ms += 100;
            }
            break;
        
        case LimpModeVoltage_LIMP_LEVEL_1:
            if(min_voltage <= LIMP_MODE_VOLTAGE_LEVEL_2)
            {
                voltage_limp_state = LimpModeVoltage_LIMP_LEVEL_1_BELOW_THRESHOLD;
                state_counter_ms = 0;
            }
            break;

        case LimpModeVoltage_LIMP_LEVEL_1_BELOW_THRESHOLD:
            // If above voltage threshold for level 2, stay at level 1
            if(min_voltage > LIMP_MODE_VOLTAGE_LEVEL_2)
            {
                voltage_limp_state = LimpModeVoltage_LIMP_LEVEL_1;
                state_counter_ms = 0;
            }
            // If time to trip has elapsed below voltage threshold, move to level 2
            else if (state_counter_ms >= LIMP_MODE_VOLTAGE_LEVEL_2_TIME_MS)
            {
                voltage_limp_state = LimpModeVoltage_LIMP_LEVEL_2;
                state_counter_ms = 0;
            }
            else
            {
                state_counter_ms += 100;
            }
            break;
        
        case LimpModeVoltage_LIMP_LEVEL_2:
            if(min_voltage <= LIMP_MODE_VOLTAGE_LEVEL_3)
            {
                voltage_limp_state = LimpModeVoltage_LIMP_LEVEL_2_BELOW_THRESHOLD;
                state_counter_ms = 0;
            }
            break;

        case LimpModeVoltage_LIMP_LEVEL_2_BELOW_THRESHOLD:
            // If above voltage threshold for level 3, stay at level 2
            if(min_voltage > LIMP_MODE_VOLTAGE_LEVEL_3)
            {
                voltage_limp_state = LimpModeVoltage_LIMP_LEVEL_2;
                state_counter_ms = 0;
            }
            // If time to trip has elapsed below voltage threshold, move to level 3
            else if (state_counter_ms >= LIMP_MODE_VOLTAGE_LEVEL_3_TIME_MS)
            {
                voltage_limp_state = LimpModeVoltage_LIMP_LEVEL_3;
                state_counter_ms = 0;
            }
            else
            {
                state_counter_ms += 100;
            }
            break;

        case LimpModeVoltage_LIMP_LEVEL_3:
            if(min_voltage <= LIMP_MODE_VOLTAGE_LEVEL_4)
            {
                voltage_limp_state = LimpModeVoltage_LIMP_LEVEL_3_BELOW_THRESHOLD;
                state_counter_ms = 0;
            }
            break;
        
        case LimpModeVoltage_LIMP_LEVEL_3_BELOW_THRESHOLD:
            // If time to trip has elapsed below voltage threshold, move to level 4
            if (state_counter_ms >= LIMP_MODE_VOLTAGE_LEVEL_4_TIME_MS)
            {
                voltage_limp_state = LimpModeVoltage_LIMP_LEVEL_4;
                state_counter_ms = 0;
            }
            // If above voltage threshold for level 4, stay at level 3
            else if(min_voltage > LIMP_MODE_VOLTAGE_LEVEL_4)
            {
                voltage_limp_state = LimpModeVoltage_LIMP_LEVEL_3;
                state_counter_ms = 0;
            }
            else
            {
                state_counter_ms += 100;
            }
            break;

        case LimpModeVoltage_LIMP_LEVEL_4:
            if(min_voltage <= LIMP_MODE_VOLTAGE_LEVEL_5)
            {
                voltage_limp_state = LimpModeVoltage_LIMP_LEVEL_4_BELOW_THRESHOLD;
                state_counter_ms = 0;
            }
            break;

        case LimpModeVoltage_LIMP_LEVEL_4_BELOW_THRESHOLD:
            // If time to trip has elapsed below voltage threshold, move to level 4
            if (state_counter_ms >= LIMP_MODE_VOLTAGE_LEVEL_4_TIME_MS)
            {
                voltage_limp_state = LimpModeVoltage_LIMP_LEVEL_5;
                state_counter_ms = 0;
            }
            // If above voltage threshold for level 5, stay at level 4
            else if(min_voltage > LIMP_MODE_VOLTAGE_LEVEL_5)
            {
                voltage_limp_state = LimpModeVoltage_LIMP_LEVEL_4;
                state_counter_ms = 0;
            }
            else
            {
                state_counter_ms += 100;
            }
            break;
        
        default:
            break;
    }
}

