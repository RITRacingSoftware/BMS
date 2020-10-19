#include "unity.h"

#include "PackMonitor.h"

#include "MockChargeMonitor.h"
#include "MockFaultManager.h"

static BatteryModel_t bm;
static TempModel_t tm;

void setUp(void)
{
    PackMonitor_init(); 

    // initialize a battery model that won't trigger faults
    for (int i = 0; i < NUM_SERIES_CELLS; i++)
    {
        bm.cells[i].is_draining = false;
        bm.cells[i].voltage = MIN_ALLOWED_CELL_V + 0.1;
    }   
    // not testing charging
    ChargeMonitor_charger_available_IgnoreAndReturn(false);
}

/**
 * For each cell, make sure an irrational value causes a fault
 * to be raised after the hysteresis. Clear faults in between each iteration
 * so we know it was the cell of the current iteration that caused the fault.
 * Also verifies the faults are properly cleared.
 */
void test_PackMonitor_irrational_voltage(void)
{
    // initialize a battery model with no fault conditions
    for (int i = 0; i < NUM_SERIES_CELLS; i++)
    {
        bm.cells[i].is_draining = false;
        bm.cells[i].voltage = MAX_CELL_V - 0.1; // this must be explicitly less than MAX_CELL_V or float math makes 4.3 > 4.3 == 1
    }

    for (int cell_idx = 0; cell_idx < NUM_SERIES_CELLS; cell_idx++)
    {
        for (int ms = 0; ms < VOLTAGE_FAULT_HYSTERESIS_MS - 100; ms += 100)
        {
            // alternate between high and low irrational conditions to test both
            // shouldnt matter which it is
            bm.cells[cell_idx].voltage = ms & 200 ? (MAX_CELL_V + 0.01) : (MIN_CELL_V - 0.1);

            // should be no fault yet
            FaultManager_clear_fault_Ignore();
            PackMonitor_validate_battery_model_10Hz(&bm);
        }        

        // should overrun the hysteresis and cause a fault
        FaultManager_set_fault_active_ExpectAnyArgs();
        // Will also clear other faults
        FaultManager_clear_fault_Ignore();
        PackMonitor_validate_battery_model_10Hz(&bm);
        // clear the fault 
        bm.cells[cell_idx].voltage = MAX_CELL_V - 0.1;
        for (int ms = 0; ms < VOLTAGE_FAULT_HYSTERESIS_MS-100; ms += 100)
        {
            FaultManager_set_fault_active_Ignore();
            FaultManager_clear_fault_Ignore();
            PackMonitor_validate_battery_model_10Hz(&bm);
        }
        
        // should not be setting any faults
        FaultManager_clear_fault_Ignore();
        PackMonitor_validate_battery_model_10Hz(&bm);
    }
}

/**
 * For each cell, make sure an "out of charge" value causes a fault
 * to be raised after the hysteresis. Clear faults in between each iteration
 * so we know it was the cell of the current iteration that caused the fault.
 * Also verifies the faults are properly cleared.
 */
void test_PackMonitor_out_of_juice(void)
{
    // initialize a battery model that won't trigger diff faults with low voltages.
    for (int i = 0; i < NUM_SERIES_CELLS; i++)
    {
        bm.cells[i].is_draining = false;
        bm.cells[i].voltage = MIN_ALLOWED_CELL_V + 0.1;
    }

    for (int cell_idx = 0; cell_idx < NUM_SERIES_CELLS; cell_idx++)
    {
        for (int ms = 0; ms < VOLTAGE_FAULT_HYSTERESIS_MS - 100; ms += 100)
        {
            // stimulate "out of charge" condition
            bm.cells[cell_idx].voltage = MIN_ALLOWED_CELL_V - 0.1;

            // should be no fault yet
            FaultManager_clear_fault_Ignore();
            PackMonitor_validate_battery_model_10Hz(&bm);
        }        

        // should overrun the hysteresis and cause a fault
        FaultManager_set_fault_active_ExpectAnyArgs();
        // Will also clear other faults
        FaultManager_clear_fault_Ignore();
        PackMonitor_validate_battery_model_10Hz(&bm);
        // clear the fault 
        bm.cells[cell_idx].voltage = MIN_ALLOWED_CELL_V + 0.1;
        for (int ms = 0; ms < VOLTAGE_FAULT_HYSTERESIS_MS-100; ms += 100)
        {
            FaultManager_set_fault_active_Ignore();
            FaultManager_clear_fault_Ignore();
            PackMonitor_validate_battery_model_10Hz(&bm);
        }
        
        // should not be setting any faults
        FaultManager_clear_fault_Ignore();
        PackMonitor_validate_battery_model_10Hz(&bm);
    }
}

/**
 * For each cell, make sure voltage differences cause a fault
 * to be raised after the hysteresis. Clear faults in between each iteration
 * so we know it was the cell of the current iteration that caused the fault.
 * Also verifies the faults are properly cleared.
 */
void test_PackMonitor_voltage_diff(void)
{
    // initialize a battery model with no faults
    for (int i = 0; i < NUM_SERIES_CELLS; i++)
    {
        bm.cells[i].is_draining = false;
        bm.cells[i].voltage = MAX_CELL_V - 0.1;
    }

    for (int cell_idx = 0; cell_idx < NUM_SERIES_CELLS; cell_idx++)
    {
        for (int ms = 0; ms < VOLTAGE_FAULT_HYSTERESIS_MS - 100; ms += 100)
        {
            // stimulate a faulty voltage diff condition, but not an out of juice fault condition
            bm.cells[cell_idx].voltage = MIN_ALLOWED_CELL_V + 0.1;

            // should be no fault yet
            FaultManager_clear_fault_Ignore();
            PackMonitor_validate_battery_model_10Hz(&bm);
        }        

        // should overrun the hysteresis and cause a fault
        FaultManager_set_fault_active_ExpectAnyArgs();
        // Will also clear other faults
        FaultManager_clear_fault_Ignore();
        PackMonitor_validate_battery_model_10Hz(&bm);

        // clear the fault 
        bm.cells[cell_idx].voltage = MAX_CELL_V - 0.1;
        for (int ms = 0; ms < VOLTAGE_FAULT_HYSTERESIS_MS-100; ms += 100)
        {
            FaultManager_set_fault_active_Ignore();
            FaultManager_clear_fault_Ignore();
            PackMonitor_validate_battery_model_10Hz(&bm);
        }
        
        // should not be setting any faults
        FaultManager_clear_fault_Ignore();
        PackMonitor_validate_battery_model_10Hz(&bm);
    }
}

/**
 * For each thermistor, make sure an over temperature condition causes a fault
 * to be raised after the hysteresis. Clear faults in between each iteration
 * so we know it was the cell of the current iteration that caused the fault.
 * Also verifies the faults are properly cleared.
 */
void test_PackMonitor_over_temperature(void)
{
    // initialize a temp model with no faults
    for (int i = 0; i < NUM_THERMISTOR; i++)
    {
        tm.temps_C[i] = OVER_TEMP_DEG_C - 1.0;
    }

    for (int temp_idx = 0; temp_idx < NUM_THERMISTOR; temp_idx++)
    {
        for (int ms = 0; ms < TEMPERATURE_FAULT_HYSTERESIS_MS - 100; ms += 100)
        {
            // stimulate an over temp condition, but not an irrational condition
            tm.temps_C[temp_idx] = OVER_TEMP_DEG_C + 1.0;

            // should be no fault yet
            FaultManager_clear_fault_Ignore();
            PackMonitor_validate_temp_model_10Hz(&tm);
        }

        // should overrun the hysteresis and cause a fault
        FaultManager_set_fault_active_ExpectAnyArgs();
        // Will also clear other faults
        FaultManager_clear_fault_Ignore();
        PackMonitor_validate_temp_model_10Hz(&tm);
        
        // clear the fault 
        tm.temps_C[temp_idx] = OVER_TEMP_DEG_C - 1.0;
        for (int ms = 0; ms < TEMPERATURE_FAULT_HYSTERESIS_MS-100; ms += 100)
        {
            FaultManager_set_fault_active_Ignore();
            FaultManager_clear_fault_Ignore();
            PackMonitor_validate_temp_model_10Hz(&tm);
        }
        
        // should not be setting any faults
        FaultManager_clear_fault_Ignore();
        PackMonitor_validate_temp_model_10Hz(&tm);
    }
}

/**
 * For each thermistor, make sure an irrational temperature condition causes a fault
 * to be raised after the hysteresis. Clear faults in between each iteration
 * so we know it was the cell of the current iteration that caused the fault.
 * Also verifies the faults are properly cleared.
 */
void test_PackMonitor_irrational_temperature(void)
{
    // initialize a temp model with no faults
    for (int i = 0; i < NUM_THERMISTOR; i++)
    {
        tm.temps_C[i] = OVER_TEMP_DEG_C - 1.0;
    }

    for (int temp_idx = 0; temp_idx < NUM_THERMISTOR; temp_idx++)
    {
        for (int ms = 0; ms < TEMPERATURE_FAULT_HYSTERESIS_MS - 100; ms += 100)
        {
            // stimulate an irrational temp condition. Test by alternating both extremes.
            tm.temps_C[temp_idx] = ms % 200 ? MAX_TEMP_DEG_C + 1.0 : MIN_TEMP_DEG_C - 1.0;

            // should be no fault yet
            FaultManager_clear_fault_Ignore();
            PackMonitor_validate_temp_model_10Hz(&tm);
        }

        // should overrun the hysteresis and cause a fault
        FaultManager_set_fault_active_ExpectAnyArgs();
        // Will also clear other faults
        FaultManager_clear_fault_Ignore();
        PackMonitor_validate_temp_model_10Hz(&tm);
        
        // clear the fault 
        tm.temps_C[temp_idx] = OVER_TEMP_DEG_C - 1.0;
        for (int ms = 0; ms < TEMPERATURE_FAULT_HYSTERESIS_MS-100; ms += 100)
        {
            FaultManager_set_fault_active_Ignore();
            FaultManager_clear_fault_Ignore();
            PackMonitor_validate_temp_model_10Hz(&tm);
        }
        
        // should not be setting any faults
        FaultManager_clear_fault_Ignore();
        PackMonitor_validate_temp_model_10Hz(&tm);
    }
}