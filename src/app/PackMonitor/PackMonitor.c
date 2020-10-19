#include "counters.h"

#include "ChargeMonitor.h"
#include "FaultManager.h"
#include "PackMonitor.h"

/**
 * Get the largest and smallest voltages currently in the pack.
 * Also get the average voltage of the pack
 */
static void get_cell_voltage_info(BatteryModel_t* bm, float* largest_V, float* smallest_V, float* average_V)
{
    *largest_V = -100;
    *smallest_V = 1000;

    float total_V = 0;
    for (int i = 0; i < NUM_SERIES_CELLS; i++)
    {
        float cell_V = bm->cells[i].voltage;
        if (cell_V > *largest_V)
        {
            *largest_V = cell_V;
        }
        else if (cell_V < *smallest_V)
        {
            *smallest_V = cell_V;
        }

        total_V += cell_V;
    }

    *average_V = total_V / (float) NUM_SERIES_CELLS;
}

static void get_temp_info(TempModel_t* tm, float* largest_deg_C, float* smallest_deg_C)
{
    *largest_deg_C = -200;
    *smallest_deg_C = 1000;
    for (int i = 0; i < NUM_THERMISTOR; i++)
    {
        float temp_deg_C = tm->temps_C[i];

        if (temp_deg_C > *largest_deg_C)
        {
            *largest_deg_C = temp_deg_C;
        }
        else if (temp_deg_C < *smallest_deg_C)
        {
            *smallest_deg_C = temp_deg_C;
        }
    }
}

// voltage fault condition timers
static int irrational_voltage_ms; // how long an irrational voltage fault condition has been present
static int diff_ms; // how long a voltage diff fault condition has been present
static int low_voltage_ms; // how long an out of juice fault condition has been present

// temperature fault condition timers
static int irrational_temp_ms; // how long an irrational temperature fault condition has been present
static int over_temp_ms; // how long an over temp fault condition has been present

void PackMonitor_init(void)
{
    // reset voltage fault timers
    irrational_voltage_ms = 0;
    diff_ms = 0;
    low_voltage_ms = 0;

    // reset temperature fault timers
    irrational_temp_ms = 0;
    over_temp_ms = 0;
}

/**
 * Check for dangerous voltage differences, invalid voltages, etc. in the battery pack.
 * Activate faults if these error conditions are present.
 */
void PackMonitor_validate_battery_model_10Hz(BatteryModel_t* bm)
{
    float largest_V = 0;
    float smallest_V = MAX_CELL_V * 2;
    float average_V = 0;

    get_cell_voltage_info(bm, &largest_V, &smallest_V, &average_V);

    // check for irrationality
    if ((largest_V > MAX_CELL_V) || (smallest_V < MIN_CELL_V))
    {
        if (incr_to_limit(&irrational_voltage_ms, VOLTAGE_FAULT_HYSTERESIS_MS, 100))
        {
            FaultManager_set_fault_active(FaultCode_CELL_VOLTAGE_IRRATIONAL, &largest_V);
        }
    }
    else
    {
        if (decr_to_limit(&irrational_voltage_ms, 0, 100))
        {
            FaultManager_clear_fault(FaultCode_CELL_VOLTAGE_IRRATIONAL);
        }
    }

    // check for out of charge
    // out of charge should not occur if we're connected to the charger
    if ((smallest_V <= MIN_ALLOWED_CELL_V) && !ChargeMonitor_charger_available())
    {
        if (incr_to_limit(&low_voltage_ms, VOLTAGE_FAULT_HYSTERESIS_MS, 100))
        {
            FaultManager_set_fault_active(FaultCode_OUT_OF_JUICE, &smallest_V);
        }
    }
    else
    {
        if (decr_to_limit(&low_voltage_ms, 0, 100))
        {
            FaultManager_clear_fault(FaultCode_OUT_OF_JUICE);
        }
    }
    
    float largest_diff_V = largest_V - smallest_V;

    // check for voltage difference error
    if (largest_diff_V >= MAX_CELL_DIFF_V)
    {
        if (incr_to_limit(&diff_ms, VOLTAGE_FAULT_HYSTERESIS_MS, 100))
        {   
            FaultManager_set_fault_active(FaultCode_CELL_VOLTAGE_DIFF, &largest_diff_V);
        }
    }
    else
    {
        if (decr_to_limit(&diff_ms, 0, 100))
        {
            FaultManager_clear_fault(FaultCode_CELL_VOLTAGE_DIFF);
        }
    }

    bm->largest_V = largest_V;
    bm->smallest_V = smallest_V;
    bm->average_V = average_V;
}



/**
 * Check for over/invalid temperature events. Activate faults if these conditions are present.
 */
void PackMonitor_validate_temp_model_10Hz(TempModel_t* tm)
{
    float largest_deg_C, smallest_deg_C;

    get_temp_info(tm, &largest_deg_C, &smallest_deg_C);

    // check for irrational temp
    if ((largest_deg_C > MAX_TEMP_DEG_C) || (smallest_deg_C < MIN_TEMP_DEG_C))
    {
        if (incr_to_limit(&irrational_temp_ms, TEMPERATURE_FAULT_HYSTERESIS_MS, 100))
        {
            float bad_temp;
            if (largest_deg_C > MAX_TEMP_DEG_C)
            {
                bad_temp = largest_deg_C;
            }
            else
            {
                bad_temp = smallest_deg_C;
            }
            
            FaultManager_set_fault_active(FaultCode_TEMPERATURE_IRRATIONAL, &bad_temp);
        }
    }
    else
    {
        if (decr_to_limit(&irrational_temp_ms, 0, 100))
        {
            FaultManager_clear_fault(FaultCode_TEMPERATURE_IRRATIONAL);
        }
    }

    // check for overtemperature
    if (largest_deg_C > OVER_TEMP_DEG_C)
    {
        if (incr_to_limit(&over_temp_ms, TEMPERATURE_FAULT_HYSTERESIS_MS, 100))
        {
            FaultManager_set_fault_active(FaultCode_OVER_TEMPERATURE, &largest_deg_C);
        }
    }
    else
    {
        if (decr_to_limit(&over_temp_ms, 0, 100))
        {
            FaultManager_clear_fault(FaultCode_OVER_TEMPERATURE);
        }
    }
}