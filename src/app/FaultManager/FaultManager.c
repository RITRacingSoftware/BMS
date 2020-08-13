#include "FaultManager.h"

// Status of a fault
typedef enum
{
    CLEAR,
    ACTIVE,
    LATCHED
} FaultStatus_e;

// An array with an element for each fault indicating the status of the fault.
static FaultStatus_e FAULT_STATUS[FaultCode_NUM];

void FaultManager_set_fault_active(Fault_t fault, bool latch)
{
    // set the fault
    if (latch)
    {
        FAULT_STATUS[fault.code] = LATCHED;
    }
    else
    {
        FAULT_STATUS[fault.code] = ACTIVE;
    }

    // TODO- Send the CAN alert
}

bool FaultManager_is_fault_active(FaultCode_e code)
{
    return FAULT_STATUS[code] == ACTIVE || FAULT_STATUS[code] == LATCHED;
}