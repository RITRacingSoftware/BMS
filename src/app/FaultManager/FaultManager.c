#include <stdint.h>

#include "common_macros.h"
#include "CAN.h"
#include "FaultManager.h"

/**
 * Each bit represents fault status.
 * 1 for active
 * 0 for inactive.
 * 
 * Fault bits are indexed using the FaultCode_e enum values.
 */
static uint64_t fault_vector;

void FaultManager_init(void)
{
    // zero out every fault/latch bit
    fault_vector = 0;

    // initialize the fault vector CAN message
    unpack_message(&CAN_BUS, CAN_ID_BmsFaultVector, fault_vector, 8, 0);
}

// TODO- use mutex around faultvector
void FaultManager_set_fault_active(FaultCode_e code, void* data)
{
    // set the fault
    fault_vector |= BIT(code);

    // set the CAN alert data field accordingly
    switch(code)
    {
        case FaultCode_OVER_CURRENT:
            encode_can_0x2bd_BmsFaultAlert_current(&CAN_BUS, *((float*)data));
            break;
        
        case FaultCode_SLAVE_COMM_CELLS:
            encode_can_0x2bd_BmsFaultAlert_cell_comm_slave_board_num(&CAN_BUS, *((uint8_t*)data));
            break;
        
        case FaultCode_SLAVE_COMM_TEMPS:
            encode_can_0x2bd_BmsFaultAlert_temp_comm_slave_board_num(&CAN_BUS, *((uint8_t*)data));
            break;

        case FaultCode_SLAVE_COMM_DRAIN_REQUEST:
            encode_can_0x2bd_BmsFaultAlert_drain_comm_slave_board_num(&CAN_BUS, *((uint8_t*)data));
            break;

        case FaultCode_CURRENT_SENSOR_COMM:
            encode_can_0x2bd_BmsFaultAlert_adc_error_code(&CAN_BUS, *((uint8_t*)data));
            break;
        
        default:
            // send garbage data
            break;
    }

    // set the mux of the alert message to the fault code
    encode_can_0x2bd_BmsFaultAlert_code(&CAN_BUS, (uint8_t)code);

    CAN_send_message(CAN_ID_BmsFaultAlert);

    // update the fault vector CAN message data
    unpack_message(&CAN_BUS, CAN_ID_BmsFaultVector, fault_vector, 8, 0);
}

// TODO- use mutex around faultvector
void FaultManager_clear_fault(FaultCode_e code)
{
    uint64_t temp_fault_vector = fault_vector;

    // clear the fault bit
    temp_fault_vector &= ~BIT(code);

    // atomically? set the fault vector
    // this is only atomic if the stm32 supports 64 bit instructions...
    fault_vector = temp_fault_vector;

    // update the fault vector CAN message data
    unpack_message(&CAN_BUS, CAN_ID_BmsFaultVector, fault_vector, 8, 0);
}

bool FaultManager_is_fault_active(FaultCode_e code)
{
    return (fault_vector & BIT(code)) != 0;
}

bool FaultManager_is_any_fault_active(void)
{
    return (fault_vector != 0);
}