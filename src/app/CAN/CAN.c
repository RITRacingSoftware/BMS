#include <math.h>

#include "CAN.h"
#include "HAL_Can.h"
#include "common_macros.h"

can_obj_f29bms_dbc_h_t CAN_BUS;

static bool can_error;

void CAN_init(void)
{
    can_error = false;
}

void CAN_send_message(unsigned long int id)
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
        can_error = true;
        printf("CAN ERROR: %x\n", id);
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
    uint64_t msg_data = 0; 

    // Multiplexed message cycling. Mux value cycles every 100ms
    static uint8_t voltages_mux = 0;
    msg_data |= voltages_mux;
    const int voltages_per_message = 6; 
    // must pack these kinds of messages manually or call 90 signal encoding functions individually
    for (int i = 0; i < voltages_per_message; i++)
    {
        const int voltages_start_bit = 8;
        const int voltage_len_bits = 9;
        const int voltage_mask = 0b111111111;
        const float voltage_granularity = 0.01;

        int cell_index = voltages_mux * voltages_per_message + i;
        float cell_voltage = bm->cells[cell_index].voltage;
        uint64_t frac_voltage = ROUND_INT((cell_voltage / voltage_granularity)) & voltage_mask;
        msg_data |= (frac_voltage << (voltages_start_bit + i*voltage_len_bits)); 
    }
    unpack_message(&CAN_BUS, CAN_ID_BmsVoltages, msg_data, 8, 0);
    CAN_send_message(CAN_ID_BmsVoltages);
    voltages_mux = (voltages_mux + 1) % 15; // mux limits like this are hardcoded according to the DBC maximum mux values (here its m14)

    msg_data = 0;
    static uint8_t thermistor_mux = 0;
    msg_data |= thermistor_mux;
    const int therm_per_message = 6;
    for (int i = 0; i < therm_per_message; i++)
    {
        const int therm_start_bit = 2;
        const int therm_len_bits = 9;
        const int therm_mask = 0b111111111;
        const float therm_granularity = 0.01;

        int therm_index = thermistor_mux * therm_per_message + i;
        if (therm_index < NUM_THERMISTOR)
        {
            float therm_voltage = tm->tm_readings_V[therm_index];
            // printf("Therm voltage: %f\n", therm_voltage);
            uint64_t frac_voltage = ROUND_INT((therm_voltage / therm_granularity)) & therm_mask;
            // printf("Fractional voltage: %x\n", frac_voltage);
            uint64_t shifted_fractional = (frac_voltage << (uint64_t)(therm_start_bit + i*therm_len_bits));
            msg_data |= shifted_fractional;
            // printf("index %d value %lx\n", therm_index, shifted_fractional);

        }
    }
    unpack_message(&CAN_BUS, CAN_ID_BmsThermistorVoltages, msg_data, 8, 0);
    CAN_send_message(CAN_ID_BmsThermistorVoltages);
    thermistor_mux = (thermistor_mux + 1) % 4;

    msg_data = 0;
    static int temperature_mux = 0;
    msg_data |= temperature_mux;
    const int temp_per_message = 7;
    for (int i = 0; i < temp_per_message; i++)
    {
        const int temp_start_bit = 2;
        const int temp_len_bits = 8;
        const int temp_mask = 0b11111111;
        const float temp_granularity = 1;

        int temp_index = temperature_mux * temp_per_message + i;
        if (temp_index < NUM_THERMISTOR)
        {
            float temp = SAT(tm->temps_C[temp_index], -128, 127);
            uint64_t frac_temp;
            if (temp >= 0)
            {
                frac_temp = ROUND_INT((temp / temp_granularity)) & temp_mask;
            }
            else
            {
                 frac_temp = ROUND_INT(((temp * -1) / temp_granularity)) & temp_mask;
                 frac_temp *= -1;
                 frac_temp &= temp_mask;
            }

            msg_data |= (frac_temp << (temp_start_bit + i*temp_len_bits)); 
        }
    }
    unpack_message(&CAN_BUS, CAN_ID_BmsTemperatures, msg_data, 8, 0);
    CAN_send_message(CAN_ID_BmsTemperatures);
    temperature_mux = (temperature_mux + 1) % 3;
    
    uint64_t status_a = 0;
    uint64_t status_b = 0;
    for (int i = 0; i < NUM_SERIES_CELLS; i++)
    {
        int drain_state = bm->cells[i].is_draining;

        if (i < 64)
        {
            status_a |= (drain_state) << i;
        }
        else
        {
            status_b |= (drain_state) << (i - 64);
        }
    }
    unpack_message(&CAN_BUS, CAN_ID_BmsDrainStatusA, status_a, 8, 0);
    unpack_message(&CAN_BUS, CAN_ID_BmsDrainStatusB, status_b, 8, 0);
    CAN_send_message(CAN_ID_BmsDrainStatusA);
    CAN_send_message(CAN_ID_BmsDrainStatusB);
}

void CAN_1Hz(void)
{
    CAN_send_message(CAN_ID_BmsStatus);
    CAN_send_message(CAN_ID_BmsFaultVector);
}