#include "CAN.h"
#include "CurrentSense.h"
#include "f29BmsConfig.h"
#include "HAL_CurrentSensor.h"
#include "FaultManager.h"
#include <stdio.h>
#include <math.h>

// kept track of in order to not filter on garbage memory
static bool first_reading_received;

// kept track of to prevent application code from using unfiltered current
static bool filter_valid;

// Smoothing factor for smoothing over 3ms
// https://en.wikipedia.org/wiki/Exponential_smoothing#Time_constant
#define CURRENT_AVG_FACTOR 0.283

static float current_A;

static bool did_last_read_error;

void filter_new_current_reading(float new_reading_A)
{
    if (!first_reading_received) {
        current_A = new_reading_A;
        first_reading_received = true;
        return;
    }

    // Exponential smoothing
    current_A = new_reading_A * CURRENT_AVG_FACTOR + (1-CURRENT_AVG_FACTOR) * current_A;

    // data in last_current_reading is now filtered, safe to use
    filter_valid = true;
}

bool current_valid(float new_reading_A)
{
    if (fabs(new_reading_A <= CURRENT_IRRATIONAL_A))
    {
        return true;
    }

    return false;
}

void CurrentSense_init(void)
{
    first_reading_received = false;
    filter_valid = false;
    did_last_read_error = false;
}

void CurrentSense_1kHz(void)
{
    // Get new current reading from ADC
    float raw_current_A;
    Error_t err = HAL_CurrentSensor_read_current(&raw_current_A);

    // Verify no errors accessing ADC
    if (err.active)
    {
        did_last_read_error = true;
        FaultManager_set_fault_active(FaultCode_CURRENT_SENSOR_COMM, err.data);
    }
    else
    {
        did_last_read_error = false;
        FaultManager_clear_fault(FaultCode_CURRENT_SENSOR_COMM);
        
        // this check is done here since we don't want to screw up the filter with huge currents
        // it wont recover from. There's no fault for irrational current yet.. maybe there should be?
        if (current_valid(raw_current_A))
        {
            if (fabs(raw_current_A) < CURRENT_REJECTION_THRESHOLD_A)
            {
                raw_current_A = 0;
            }

            filter_new_current_reading(raw_current_A);
        }

        can_bus.bms_current.bms_inst_current_filt = formula_main_dbc_bms_current_bms_inst_current_filt_encode(current_A);
    }
}

bool CurrentSense_get_current(float* out_current_A)
{
    // save this off
    // keeps actions from here till return value consistent in case task is preempted...
    bool inst_current_valid = filter_valid && !did_last_read_error;

    if (inst_current_valid)
    {
        *out_current_A = current_A;
    }
    
    return inst_current_valid;
}