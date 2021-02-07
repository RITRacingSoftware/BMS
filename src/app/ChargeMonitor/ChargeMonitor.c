#include "ChargeMonitor.h"
#include "CAN.h"
#include "common_macros.h"
#include "CurrentSense.h"
#include "BatteryCharacteristics.h"
#include "FaultManager.h"

#include "HAL_Gpio.h"

// STATE MACHINE STUFF
typedef enum
{
    // The charger is disconnected from the vehicle
    ChargeState_DISCONNECTED,

    // Charging has completed or the BMS faulted and the cable must be cycled to restart charging
    ChargeState_CONNECTED_COMPLETE,
    
    // Cell balancing is occuring
    ChargeState_CONNECTED_BALANCING,

    // Charging is occuring
    ChargeState_CONNECTED_CHARGING
} ChargeState_e;

typedef struct
{
    // is the charging system connected to the BMS?
    bool charger_connected;

    // are any cells still under CHARGED_CELL_V?
    bool cell_left_to_charge;

    // are any cells at MAX_ALLOWED_CELL_V?
    bool cell_at_max;

    // is the pack accepting enough current to warrant more charging?
    bool charge_current_nominal;

    // are there any faults active?
    bool bms_faulted;

    // are any cells eligible for balancing (> CHARGED_CELL_V)? 
    bool cell_over_charged;
} ChargeStateInputs_s;

typedef struct
{
    bool allow_balancing;
    bool request_charge;
} ChargeStateOutputs_s;

static ChargeState_e state;
static int state_counter_seconds; // time spent in current state
static ChargeStateInputs_s sm_inputs;
static ChargeStateOutputs_s sm_outputs;

static void new_state(ChargeState_e next)
{
    state = next;
    state_counter_seconds = 0;
}

static void sm_1Hz(void)
{
    switch(state)
    {
        case ChargeState_DISCONNECTED:
            if (sm_inputs.charger_connected)
            {
                new_state(ChargeState_CONNECTED_BALANCING);
            }

            sm_outputs.request_charge = false;
            sm_outputs.allow_balancing = false;
            break;
        
        case ChargeState_CONNECTED_BALANCING:
            if (!sm_inputs.charger_connected)
            {
                new_state(ChargeState_DISCONNECTED);
            }
            else if (sm_inputs.bms_faulted || !sm_inputs.cell_left_to_charge)
            {
                new_state(ChargeState_CONNECTED_COMPLETE);
            }
            else if (!sm_inputs.cell_over_charged)
            {
                new_state(ChargeState_CONNECTED_CHARGING);
            }

            sm_outputs.request_charge = false;
            sm_outputs.allow_balancing = true;
            break;

        case ChargeState_CONNECTED_COMPLETE:
            if (!sm_inputs.charger_connected)
            {
                new_state(ChargeState_DISCONNECTED);
            }

            sm_outputs.request_charge = false;
            sm_outputs.allow_balancing = false;
            break;
        
        case ChargeState_CONNECTED_CHARGING:
            if (!sm_inputs.charger_connected)
            {
                new_state(ChargeState_DISCONNECTED);
            }
            else if (!sm_inputs.cell_left_to_charge || sm_inputs.bms_faulted)
            {
                new_state(ChargeState_CONNECTED_COMPLETE);
            }
            else if (!sm_inputs.charge_current_nominal && (state_counter_seconds >= CHARGE_CURRENT_SETTLE_TIME_S))
            {
                new_state(ChargeState_CONNECTED_COMPLETE);
            }
            else if (sm_inputs.cell_at_max)
            {
                new_state(ChargeState_CONNECTED_BALANCING);
            }

            sm_outputs.request_charge = true;
            sm_outputs.allow_balancing = false;
            break;
    }

    state_counter_seconds++;
}

static void start_charging(void)
{
    encode_can_0x9806e5f4_BmsChargeRequest_Control(&CAN_BUS, 0);
}

static void stop_charging(void)
{
    // yes, according to Elcon its 1 to stop and 0 to start...
    encode_can_0x9806e5f4_BmsChargeRequest_Control(&CAN_BUS, 1);
}

void ChargeMonitor_init(void)
{
    // don't start up requesting charge
    stop_charging();

    state = ChargeState_DISCONNECTED;
    state_counter_seconds = 0;
    sm_inputs.charger_connected = false;
    sm_inputs.cell_at_max = false;
    sm_inputs.charge_current_nominal = true;
    sm_inputs.cell_left_to_charge = false;
    sm_inputs.bms_faulted = false;
    sm_inputs.cell_over_charged = false;

    sm_outputs.allow_balancing = false;
    sm_outputs.request_charge = false;

    encode_can_0x9806e5f4_BmsChargeRequest_MaxCurrent(&CAN_BUS, MAX_CHARGING_CURRENT_A);
    encode_can_0x9806e5f4_BmsChargeRequest_MaxVoltage(&CAN_BUS, MAX_CHARGING_V);
}

/**
 * Request charging if the charger is connected.
 * Check the average cell voltage in the battery pack.
 * Once it crosses the fully charged threshold, request to stop charging.
 */
void ChargeMonitor_1Hz(BatteryModel_t* bm)
{
    // first get updated state machine inputs
    // // this is active low, hence the !
    sm_inputs.charger_connected = !HAL_Gpio_read(GpioPin_CHARGER_AVAILABLE);
    sm_inputs.cell_left_to_charge = bm->smallest_V < CHARGED_CELL_V;
    sm_inputs.cell_at_max = FLOAT_GT_EQ(bm->largest_V, MAX_ALLOWED_CELL_V, VOLTAGE_TOLERANCE);
    sm_inputs.cell_over_charged = FLOAT_GT(bm->largest_V, CHARGED_CELL_V, VOLTAGE_TOLERANCE);
    sm_inputs.bms_faulted = FaultManager_is_any_fault_active();
    float current;
    if (CurrentSense_get_current(&current))
    {
        sm_inputs.charge_current_nominal = (current >= (MAX_CHARGING_CURRENT_A / 10.0));
    }
    else
    {
        // current filter not initialized yet, we just booted up
        sm_inputs.charge_current_nominal = false;
    }

    // next, run the state machine
    sm_1Hz();

    // finally, apply outputs
    // ** allow_balancing is applied using a getter
    if (sm_outputs.request_charge)
    {
        start_charging();
    }
    else
    {
        stop_charging();
    }

    // Actually send the charger control CAN message, if we are connected to the charger
    if (state != ChargeState_DISCONNECTED)
    {
        CAN_send_message(CAN_ID_BmsChargeRequest);
    }

}

/**
 * Return true if the charger is connected, false otherwise.
 */
bool ChargeMonitor_charger_available(void)
{
    return sm_inputs.charger_connected;
}

bool ChargeMonitor_is_charging(void)
{
    return sm_outputs.request_charge;
}

bool ChargeMonitor_is_balancing_allowed(void)
{
    return sm_outputs.allow_balancing;
}