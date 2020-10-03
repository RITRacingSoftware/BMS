#include <math.h>

#include "CAN.h"
#include "HAL_Can.h"
#include "common_macros.h"

can_obj_f29bms_dbc_h_t CAN_BUS;

static bool can_error = false;

void CAN_send_message(int id)
{   
    uint64_t msg_data;
    
    // get the message data for the given id
    if (-1 != pack_message(&CAN_BUS, id, &msg_data))
    {
        // dbcc only supports dlc=8 right now
        Error_t err = HAL_Can_send_message(id, 8, msg_data);
        
        if (err.active)
        {
            can_error = true;
        }
        else
        {
            can_error = false;
        }
        
    }
    else
    {
        // CAN id invalid, dont attempt to send the message
    }
    
}

bool CAN_get_error(void)
{
    return can_error;
}

void CAN_1kHz(void)
{
    CAN_send_message(CAN_ID_BmsCurrent);    
}

void CAN_10Hz(BatteryModel_t* bm, TempModel_t* tm)
{
    static int voltages_mux = 0;
    // this is a multiplexed message. Mux value cycles every 100ms
    encode_can_0x2be_BmsVoltages_mux(&CAN_BUS, voltages_mux);
    CAN_send_message(CAN_ID_BmsVoltages);
    voltages_mux++;

    if (voltages_mux >= ceil(NUM_SERIES_CELLS / 4))
    {
        voltages_mux = 0;
    }

    CAN_send_message(CAN_ID_BmsDrainStatusA);
    CAN_send_message(CAN_ID_BmsDrainStatusB);
}

void CAN_1Hz(void)
{
    CAN_send_message(CAN_ID_BmsStatus);
    CAN_send_message(CAN_ID_BmsFaultVector);
}