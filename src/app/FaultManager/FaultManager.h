#ifndef FAULT_MANAGER_H
#define FAULT_MANAGER_H

#include <stdbool.h>

/**
 * Handles setting and clearing faults. 
 * Additionally transmits CAN alerts on setting faults and provides information for CAN fault vectors. 
 * Provides functionality for latching faults. Some faults are latched by default.
 */

#define ERROR_DATA_LEN 7

// Error type used in intermediate indexes, assessed by higher level code for fault generation.
typedef struct
{
    bool active;
    char data[ERROR_DATA_LEN];
} Error_t;

// Different fault types
typedef enum
{
    // Used to indicate there is no fault
    NO_FAULT,
    // Problem communicating with slave boards for voltages/drain states
    FaultCode_SLAVE_COMM_CELLS,
    // Problem communicating with slave boards for thermistor readings
    FaultCode_SLAVE_COMM_TEMPS,
    // Problem communicating with slave boards when requesting new drain states
    FaultCode_SLAVE_COMM_DRAIN_REQUEST,
    // Current sensor HAL indicated error reading current
    FaultCode_CURRENT_SENSOR_COMM,
    // Number of enumerations
    FaultCode_NUM
} FaultCode_e;

/**
 * Record a fault as active, and transmit a CAN alert that contains the fault
 * code and associated data.
 * fault [in] - type of fault to set to active, data associated with fault
 * latch [in] - true to lock fault to active until power cycle, false otherwise
 */
void FaultManager_set_fault_active(FaultCode_e code, char data[ERROR_DATA_LEN], bool latch);

void FaultManager_clear_fault(FaultCode_e code);

/**
 * Check if a fault is active. Return true if active, false otherwise.
 * code [in] - fault code to check if active
 */
bool FaultManager_is_fault_active(FaultCode_e code);

#endif // FAULT_MANAGER_H