#include <stdio.h>

#include "counters.h"
#include "common_macros.h"
#include "CAN.h"

#include "ChargeMonitor.h"
#include "FaultManager.h"
#include "PackMonitor.h"

/**
 * Get the largest and smallest voltages currently in the pack.
 * Also get the average voltage of the pack
 */
static void get_cell_voltage_info(BatteryModel_t* bm)
{
    bm->largest_V = -100;
    bm->smallest_V = 1000;

    bm->total_V = 0;
    for (int i = 0; i < NUM_SERIES_CELLS; i++)
    {
        float cell_V = bm->cells[i].voltage;
        if (FLOAT_GT(cell_V, bm->largest_V, VOLTAGE_TOLERANCE))
        {
            bm->largest_V = cell_V;
        }
        
        if (FLOAT_LT(cell_V, bm->smallest_V, VOLTAGE_TOLERANCE))
        {
            bm->smallest_V = cell_V;
        }

        bm->total_V += cell_V;
    }

    bm->average_V = bm->total_V / (float) NUM_SERIES_CELLS;
}

static void get_temp_info(TempModel_t* tm, float* largest_deg_C, float* smallest_deg_C)
{
    *largest_deg_C = tm->max_temp_C;
    *smallest_deg_C = tm->min_temp_C;
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
    get_cell_voltage_info(bm);
    can_bus.bms_status.bms_status_pack_voltage = (uint16_t) ((((float)bm->total_V))/.1 + .5);
    can_bus.bms_cell_overview.bms_overview_volt_min = formula_main_dbc_bms_cell_overview_bms_overview_volt_min_encode((double) bm->smallest_V);
    can_bus.bms_cell_overview.bms_overview_volt_max = formula_main_dbc_bms_cell_overview_bms_overview_volt_max_encode((double) bm->largest_V);
    can_bus.bms_cell_overview.bms_overview_volt_avg = formula_main_dbc_bms_cell_overview_bms_overview_volt_avg_encode((double) bm->average_V);

    uint32_t num_draining = 0;
    for (int i = 0; i < NUM_SERIES_CELLS; i++) {
        if (bm->cells[i].drain_request) {
            num_draining++;
        }
    }
    can_bus.bms_cell_overview.bms_overview_drains = formula_main_dbc_bms_cell_overview_bms_overview_drains_encode(num_draining);

    // check for irrationality
    if (bm->smallest_V < CELL_IRRATIONAL_LOW_V || bm->largest_V > CELL_IRRATIONAL_HIGH_V)
    {
        if (incr_to_limit(&irrational_voltage_ms, VOLTAGE_FAULT_HYSTERESIS_MS, 100))
        {
            FaultManager_set_fault_active(FaultCode_CELL_VOLTAGE_IRRATIONAL, &bm->largest_V);
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
    if (bm->smallest_V < CELL_MIN_V, VOLTAGE_TOLERANCE)
    {
        if (incr_to_limit(&low_voltage_ms, VOLTAGE_FAULT_HYSTERESIS_MS, 100))
        {
            FaultManager_set_fault_active(FaultCode_OUT_OF_JUICE, &bm->smallest_V);
        }
    }
    else
    {
        if (decr_to_limit(&low_voltage_ms, 0, 100))
        {
            FaultManager_clear_fault(FaultCode_OUT_OF_JUICE);
        }
    }
    
    float largest_diff_V = bm->largest_V - bm->smallest_V;

    // check for voltage difference error
    if (FLOAT_GT_EQ(largest_diff_V, MAX_CELL_DIFF_V, VOLTAGE_TOLERANCE))
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
}



/**
 * Check for over/invalid temperature events. Activate faults if these conditions are present.
 */
void PackMonitor_validate_temp_model_10Hz(TempModel_t* tm)
{
    can_bus.bms_cell_overview.bms_overview_temp_min = formula_main_dbc_bms_cell_overview_bms_overview_temp_min_encode((double) tm->min_temp_C);
    can_bus.bms_cell_overview.bms_overview_temp_max = formula_main_dbc_bms_cell_overview_bms_overview_temp_max_encode((double) tm->max_temp_C);
    can_bus.bms_cell_overview.bms_overview_temp_avg = formula_main_dbc_bms_cell_overview_bms_overview_temp_avg_encode((double) tm->average_temp_C);

    float largest_deg_C, smallest_deg_C;
    get_temp_info(tm, &largest_deg_C, &smallest_deg_C);

    // check for irrational temp
    if (FLOAT_GT(largest_deg_C, MAX_TEMP_DEG_C, VOLTAGE_TOLERANCE) || FLOAT_LT(smallest_deg_C, MIN_TEMP_DEG_C, VOLTAGE_TOLERANCE))
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
    if (FLOAT_GT(largest_deg_C, OVER_TEMP_DEG_C, VOLTAGE_TOLERANCE))
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