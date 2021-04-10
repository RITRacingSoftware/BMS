#include <math.h>
#include <stdio.h>

#include "CAN.h"
#include "HAL_Can.h"
#include "common_macros.h"

#define TICKS_TO_WAIT_QUEUE_CAN_MESSAGE (0) //Will return immediately if queue is full, not sure if this should be different

// can_obj_f29bms_dbc_h_t CAN_BUS;
CAN_BUS can_bus;


static bool can_error;

static QueueHandle_t message_queue;

void CAN_init(void)
{
    message_queue = xQueueCreate(CAN_QUEUE_LEN, sizeof(can_message));
    can_error = false;
}

static int pack_message(int id, uint8_t* msg_data)
{
    switch(id)
    {
        case F29BMS_DBC_BMS_STATUS_FRAME_ID:
             return f29bms_dbc_bms_status_pack(msg_data, &can_bus.bms_status, 8);

        case F29BMS_DBC_BMS_FAULT_VECTOR_FRAME_ID:
            return f29bms_dbc_bms_fault_vector_pack(msg_data, &can_bus.bms_fault_vector, 8);

        case F29BMS_DBC_BMS_FAULT_ALERT_FRAME_ID:
            return f29bms_dbc_bms_fault_alert_pack(msg_data, &can_bus.bms_fault_alert, 8);

        case F29BMS_DBC_BMS_VOLTAGES_FRAME_ID:
            return f29bms_dbc_bms_voltages_pack(msg_data, &can_bus.bms_voltages, 8);
        
        case F29BMS_DBC_BMS_THERMISTOR_VOLTAGES_FRAME_ID:
            return f29bms_dbc_bms_thermistor_voltages_pack(msg_data, &can_bus.bms_thermistor_voltages, 8);
        
        case F29BMS_DBC_BMS_TEMPERATURES_FRAME_ID:
            return f29bms_dbc_bms_temperatures_pack(msg_data, &can_bus.bms_temperatures, 8);

        case F29BMS_DBC_BMS_DRAIN_STATUS_A_FRAME_ID:
            return f29bms_dbc_bms_drain_status_a_pack(msg_data, &can_bus.bms_drain_status_a, 8);

        case F29BMS_DBC_BMS_DRAIN_STATUS_B_FRAME_ID:
            return f29bms_dbc_bms_drain_status_b_pack(msg_data, &can_bus.bms_drain_status_b, 8);

        case F29BMS_DBC_BMS_CURRENT_FRAME_ID:
            return f29bms_dbc_bms_current_pack(msg_data, &can_bus.bms_current, 8);
        
        case F29BMS_DBC_BMS_CHARGE_REQUEST_FRAME_ID:
            return f29bms_dbc_bms_charge_request_pack(msg_data, &can_bus.bms_charge_request, 8);
        
        default:
            printf("f29bms: unknown CAN id: %d\n", id);
            break;
    }

    return -1;
}

void CAN_send_message(unsigned long int id)
{
    uint64_t msg_data;

    // get the message data for the given id
    if (-1 != pack_message(id, (uint8_t*) &msg_data))
    {
        can_message thisMessage = {id, 8, msg_data};
        xQueueSend(message_queue, &thisMessage, 10);
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

void CAN_set_error(void)
{
    can_error = true;
}

void CAN_reset_error(void)
{
    can_error = false;
}

void CAN_1kHz(void)
{
    CAN_send_message(F29BMS_DBC_BMS_CURRENT_FRAME_ID);
}

void CAN_10Hz(BatteryModel_t* bm, TempModel_t* tm)
{
    uint64_t msg_data = 0; 

    // Multiplexed message cycling. Mux value cycles every 100ms
    static uint8_t voltages_mux = 0;
    msg_data |= voltages_mux;
    const int voltages_per_message = 6; 
    // must pack these kinds of messages manually or call 90 signal encoding functions individually
    for (uint64_t i = 0; i < voltages_per_message; i++)
    {
        const uint64_t voltages_start_bit = 8;
        const uint64_t voltage_len_bits = 9;
        const uint16_t voltage_mask = 0b111111111;
        const float voltage_granularity = 0.01;

        int cell_index = voltages_mux * voltages_per_message + i;
        float cell_voltage = bm->cells[cell_index].voltage;
        uint64_t frac_voltage = ROUND_INT((cell_voltage / voltage_granularity));
        frac_voltage &= voltage_mask;
        msg_data |= (frac_voltage << (voltages_start_bit + i*voltage_len_bits)); 
    }
    f29bms_dbc_bms_voltages_unpack(&can_bus.bms_voltages, (uint8_t*)(&msg_data), 8);
    CAN_send_message(F29BMS_DBC_BMS_VOLTAGES_FRAME_ID);
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
    f29bms_dbc_bms_thermistor_voltages_unpack(&can_bus.bms_thermistor_voltages, (uint8_t*)&msg_data, 8);
    CAN_send_message(F29BMS_DBC_BMS_THERMISTOR_VOLTAGES_FRAME_ID);
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

    f29bms_dbc_bms_temperatures_unpack(&can_bus.bms_temperatures, (uint8_t*)&msg_data, 8);
    CAN_send_message(F29BMS_DBC_BMS_TEMPERATURES_FRAME_ID);
}



void CAN_1Hz(void)
{
    CAN_send_message(F29BMS_DBC_BMS_STATUS_FRAME_ID);
    CAN_send_message(F29BMS_DBC_BMS_FAULT_VECTOR_FRAME_ID);
}


void CAN_send_queued_messages(void)
{
    //Check how many mailboxes are free, and put a new message in each empty mailbox, if there are any messages
    uint8_t num_free_mailboxes = HAL_number_of_empty_mailboxes();
    can_message dequeued_message;
    while (num_free_mailboxes > 0) //Fill all empty mailboxes with messages
    {
        if (xQueueReceive(message_queue, &dequeued_message, TICKS_TO_WAIT_QUEUE_CAN_MESSAGE) == pdTRUE) //Get next message to send if there is one
        {
            Error_t err = HAL_Can_send_message(dequeued_message.id, dequeued_message.dlc, dequeued_message.data);
            can_error = err.active;
        }
        else
        {
            break;
        }   
        num_free_mailboxes--;
    }
}
