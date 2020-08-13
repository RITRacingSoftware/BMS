#ifndef FAULT_MANAGER_H
#define FAULT_MANAGER_H

#include <stdbool.h>

/**
 * Handles setting and clearing faults. 
 * Additionally transmits CAN alerts on setting faults and provides information for CAN fault vectors. 
 * Provides functionality for latching faults. Some faults are latched by default.
 */

// Different fault types
typedef enum
{
    // Used to indicate there is no fault
    NO_FAULT,
    // Current sensor HAL indicated error reading current
    FaultCode_CURRENT_SENSOR_COMM,
    // Number of enumerations
    FaultCode_NUM
} FaultCode_e;

// Package for a fault type and relevant data for debugging
typedef struct 
{
    FaultCode_e code;
    char data[7];
} Fault_t;

/**
 * Record a fault as active, and transmit a CAN alert that contains the fault
 * code and associated data.
 * fault [in] - type of fault to set to active, data associated with fault
 * latch [in] - true to lock fault to active until power cycle, false otherwise
 */
void FaultManager_set_fault_active(Fault_t fault, bool latch);

/**
 * Check if a fault is active. Return true if active, false otherwise.
 * code [in] - fault code to check if active
 */
bool FaultManager_is_fault_active(FaultCode_e code);

#endif // FAULT_MANAGER_H