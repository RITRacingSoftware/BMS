#include "StatusLed.h"

#include <stdbool.h>

#include "CAN.h"
#include "FaultManager.h"

#include "HAL_Gpio.h"

static void turn_led_on(void)
{
    HAL_Gpio_write(GpioPin_STATUS_LED, true);
}

static void turn_led_off(void)
{
    HAL_Gpio_write(GpioPin_STATUS_LED, false);
}

static void toggle_led(void)
{
    bool current_state = HAL_Gpio_read(GpioPin_STATUS_LED);
    HAL_Gpio_write(GpioPin_STATUS_LED, current_state ^ 1); // XOR with 1 always yields opposite
}

/**
 * Each represents an LED blink pattern, used to indicate software status.
 */
typedef enum {
    /**
     * No faults, no problem transmitting CAN messages.
     */
    LedState_NOMINAL,

    /**
     * At least one fault is active. No CAN transmission errors.
     */
    LedState_FAULTED,

    /**
     * A CAN transmission error occured recenlty. The BMS may or may not be faulted.
     */
    LedState_CAN_ERROR,

    LedState_NUM
} LedState_e;

// current state of the led state machine
static LedState_e state;

// counter used by each state 
static int state_counter_ms;

static void state_machine_transition(bool faulted, bool can_error)
{
    LedState_e next_state = state;

    switch(state)
    {
        case LedState_NOMINAL:
            if (can_error == true)
            {
                next_state = LedState_CAN_ERROR;
            }
            else if (faulted == true)
            {
                next_state = LedState_FAULTED;
            }
            break;

        case LedState_FAULTED:
            if (can_error == true)
            {
                next_state = LedState_CAN_ERROR;
            }
            else if (faulted == false)
            {
                next_state = LedState_NOMINAL;
            }
            break;

        case LedState_CAN_ERROR:
            if (can_error == false)
            {
                if (faulted)
                {
                    next_state = LedState_FAULTED;
                }
                else
                {
                    next_state = LedState_NOMINAL;
                }
            }
            break;
        
        default:
            break;
    }

    if (next_state != state)
    {
        state_counter_ms = 0;
    }

    state = next_state;
}

/**
 * Blink once every 3 seconds.
 * 
 * A blink is turning on for half a second.
 */
void nominal_pattern_10Hz(void)
{
    if (state_counter_ms == 0)
    {
        turn_led_on();
    }
    else if (state_counter_ms == 500)
    {
        turn_led_off();
    }
    else if (state_counter_ms >= 3000)
    {
        // will be incremented to 0
        state_counter_ms = -100;
    }
}

/**
 * Triple blink once every 3 seconds.
 */
void faulted_pattern_10Hz(void)
{
    if (state_counter_ms == 0)
    {
        turn_led_on();
    }
    else if (state_counter_ms <= 1000)
    {
        if (!(state_counter_ms % 200))
        {
            toggle_led();
        }
    }
    else if (state_counter_ms >= 3000)
    {
        // will be incremented to 0
        state_counter_ms = -100;
    }
}

/**
 * Blink constantly.
 */
void can_error_pattern_10Hz(void)
{
    if (state_counter_ms >= 500)
    {
        // will be incremented to 0
        state_counter_ms = -100;
        toggle_led();
    }
}

void StatusLed_init(void)
{
    state = LedState_NOMINAL;
}

/**
 * Led state machine iteration. Decide which led pattern to blink out based on inputs.
 * 
 * State diagram included in documentation.
 */
void StatusLed_10Hz(void)
{
    // First determine if a state transition should happen based on inputs
    // and transition state machine if so.
    state_machine_transition(FaultManager_is_any_fault_active(), CAN_get_error());

    // Second, continue (or start) the pattern for the current state.
    switch(state)
    {
        case LedState_NOMINAL:
            nominal_pattern_10Hz();
            break;
        
        case LedState_FAULTED:
            faulted_pattern_10Hz();
            break;
        
        case LedState_CAN_ERROR:
            can_error_pattern_10Hz();
            break;
        
        default:
            break;
    }

    state_counter_ms += 100;
}