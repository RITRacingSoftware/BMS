#include <math.h>
#include <stdio.h>
#include <string.h>

#include "CAN.h"
#include "HAL_Can.h"
#include "common_macros.h"
#include "HAL_Uart.h"


#define TICKS_TO_WAIT_QUEUE_CAN_MESSAGE (0) //Will return immediately if queue is full, not sure if this should be different

// can_obj_formula_main_dbc_h_t CAN_BUS;
CAN_BUS can_bus;


static bool can_error;

static QueueHandle_t tx_can_message_queue;
static QueueHandle_t rx_can_message_queue;

void CAN_init(void)
{
    tx_can_message_queue = xQueueCreate(CAN_QUEUE_LEN, sizeof(can_message));
    rx_can_message_queue= xQueueCreate(CAN_QUEUE_LEN, sizeof(can_message));
    can_error = false;
}

static int pack_message(int id, uint8_t* msg_data)
{
    switch(id)
    {
        case FORMULA_MAIN_DBC_BMS_STATUS_FRAME_ID:
            return formula_main_dbc_bms_status_pack(msg_data, &can_bus.bms_status, 8);

        case FORMULA_MAIN_DBC_BMS_CELL_OVERVIEW_FRAME_ID:
            return formula_main_dbc_bms_cell_overview_pack(msg_data, &can_bus.bms_cell_overview, 8);

        case FORMULA_MAIN_DBC_BMS_FAULT_VECTOR_FRAME_ID:
            return formula_main_dbc_bms_fault_vector_pack(msg_data, &can_bus.bms_fault_vector, 8);

        case FORMULA_MAIN_DBC_BMS_FAULT_ALERT_FRAME_ID:
            return formula_main_dbc_bms_fault_alert_pack(msg_data, &can_bus.bms_fault_alert, 8);

        case FORMULA_MAIN_DBC_BMS_CURRENT_FRAME_ID:
            return formula_main_dbc_bms_current_pack(msg_data, &can_bus.bms_current, 8);
        
        case FORMULA_MAIN_DBC_BMS_CHARGE_REQUEST_FRAME_ID:
            return formula_main_dbc_bms_charge_request_pack(msg_data, &can_bus.bms_charge_request, 8);

        case FORMULA_MAIN_DBC_BMS_REF_FRAME_ID:
            return formula_main_dbc_bms_ref_pack(msg_data, &can_bus.bms_ref, 8);
        
        case FORMULA_MAIN_DBC_BMS_CURRENT_LIMIT_FRAME_ID:
            return formula_main_dbc_bms_current_limit_pack(msg_data, &can_bus.bms_current_limit, 8);

        case FORMULA_MAIN_DBC_BMS_LIMP_MODE_FRAME_ID:
            return formula_main_dbc_bms_limp_mode_pack(msg_data, &can_bus.bms_limp_mode, 8);
        
        default:
            printf("f29bms: unknown CAN id: %d\n", id);
            break;
    }

    return -1;
}

static void CAN_send_message(uint32_t id, uint64_t data)
{
    can_message thisMessage = {id, 8, data};
    xQueueSend(tx_can_message_queue, &thisMessage, 10);
    xSemaphoreGive(can_message_transmit_semaphore);
}

void CAN_send_message_by_id(unsigned long int id)
{
    uint64_t msg_data;

    // get the message data for the given id
    if (-1 != pack_message(id, (uint8_t*) &msg_data))
    {
        CAN_send_message(id, msg_data);
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
    CAN_send_message_by_id(FORMULA_MAIN_DBC_BMS_CURRENT_FRAME_ID);
}

void CAN_10Hz(BatteryModel_t* bm, TempModel_t* tm)
{
    // Voltages
    uint64_t msg_data;
    const int num_voltages = NUM_SERIES_CELLS;
    const int voltage_max_mux = 12;
    const int voltages_per_mux = 6;
    const int voltage_start_bit = 8;
    const int voltage_len_bits = 9;
    const uint64_t voltage_mask = (1 << voltage_len_bits) - 1;
    const float voltage_granularity = 0.01;
    for (uint8_t mux = 0; mux <= voltage_max_mux; mux++) {
        msg_data = 0;
        msg_data |= mux;
        
        for (int i = 0; i < voltages_per_mux; i++) {
            int cell_index = mux * voltages_per_mux + i;
            if (cell_index >= num_voltages) {
                break;
            }
            float cell_voltage = bm->cells[cell_index].voltage;
            uint64_t frac_voltage = ROUND_INT((cell_voltage / voltage_granularity));
            frac_voltage &= voltage_mask;
            msg_data |= (frac_voltage << (voltage_start_bit + i*voltage_len_bits)); 
        }

        CAN_send_message(FORMULA_MAIN_DBC_BMS_VOLTAGES_FRAME_ID, msg_data);
    }

    // Thermistor Voltages
    const int num_therms = NUM_CHIPS * NUM_THERMISTORS_PER_CHIP;
    const int therm_max_mux = 5;
    const int therms_per_message = 6;
    const int therm_start_bit = 3;
    const int therm_len_bits = 9;
    const uint64_t therm_mask = (1 << therm_len_bits) - 1;
    const float therm_granularity = 0.01;
    for (uint8_t mux = 0; mux <= therm_max_mux; mux++) {
        msg_data = 0;
        msg_data |= mux;
        
        for (int i = 0; i < therms_per_message; i++) {
            int therm_index = mux * therms_per_message + i;
            if (therm_index >= num_therms) {
                break;
            }
            float therm_voltage = tm->tm_readings_V[therm_index];
            uint64_t frac_voltage = ROUND_INT((therm_voltage / therm_granularity)) & therm_mask;
            msg_data |= (frac_voltage << (therm_start_bit + i*therm_len_bits)); 
        }

        CAN_send_message(FORMULA_MAIN_DBC_BMS_THERMISTOR_VOLTAGES_FRAME_ID, msg_data);
    }

    // Temperatures
    const int num_temps = NUM_CHIPS * NUM_THERMISTORS_PER_CHIP;
    const int temp_max_mux = 4;
    const int temps_per_message = 7;
    const int temp_start_bit = 3;
    const int temp_len_bits = 8;
    const uint64_t temp_mask = (1 << temp_len_bits) - 1;
    const float temp_granularity = 1;
    for (uint8_t mux = 0; mux <= temp_max_mux; mux++) {
        msg_data = 0;
        msg_data |= mux;

        for (int i = 0; i < temps_per_message; i++) {
            int temp_index = mux * temps_per_message + i;
            if (temp_index >= num_temps) {
                break;
            }
            float temperature = tm->temps_C[temp_index];
            uint64_t temp_bits = ROUND_INT((temperature / temp_granularity)) & temp_mask;
            msg_data |= (temp_bits << (temp_start_bit + i*temp_len_bits));
        }

        CAN_send_message(FORMULA_MAIN_DBC_BMS_TEMPERATURES_FRAME_ID, msg_data);
    }

    // Drain States
    const int num_drains = NUM_SERIES_CELLS;
    const int drain_max_mux = 1;
    const int drains_per_message = 63;
    const int drain_start_bit = 1;
    for (uint8_t mux = 0; mux <= drain_max_mux; mux++) {
        msg_data = 0;
        msg_data |= mux; // 1 bit

        for (int i = 0; i < drains_per_message; i++) {
            int drain_index = mux * drains_per_message + i;
            if (drain_index >= num_drains) {
                break;
            }
            uint64_t draining = bm->cells[drain_index].is_draining ? 1 : 0;
            msg_data |= (draining << (drain_start_bit + i));
        }

        CAN_send_message(FORMULA_MAIN_DBC_BMS_DRAIN_STATUS_FRAME_ID, msg_data);
    }

    // Ref Values
    static int bms_ref_mux = 0;
    can_bus.bms_ref.bms_ref_mux = bms_ref_mux;
    can_bus.bms_ref.bms_ref_ref0 = formula_main_dbc_bms_ref_bms_ref_ref0_encode(tm->vref2s[0]);
    can_bus.bms_ref.bms_ref_ref1 = formula_main_dbc_bms_ref_bms_ref_ref1_encode(tm->vref2s[1]);
    can_bus.bms_ref.bms_ref_ref2 = formula_main_dbc_bms_ref_bms_ref_ref2_encode(tm->vref2s[2]);
    can_bus.bms_ref.bms_ref_ref3 = formula_main_dbc_bms_ref_bms_ref_ref3_encode(tm->vref2s[3]);
    can_bus.bms_ref.bms_ref_ref4 = formula_main_dbc_bms_ref_bms_ref_ref4_encode(tm->vref2s[4]);
    can_bus.bms_ref.bms_ref_ref5 = formula_main_dbc_bms_ref_bms_ref_ref5_encode(tm->vref2s[5]);
    can_bus.bms_ref.bms_ref_ref6 = formula_main_dbc_bms_ref_bms_ref_ref6_encode(tm->vref2s[6]);
    can_bus.bms_ref.bms_ref_ref7 = formula_main_dbc_bms_ref_bms_ref_ref7_encode(tm->vref2s[7]);
    can_bus.bms_ref.bms_ref_ref8 = formula_main_dbc_bms_ref_bms_ref_ref8_encode(tm->vref2s[8]);
    can_bus.bms_ref.bms_ref_ref9 = formula_main_dbc_bms_ref_bms_ref_ref9_encode(tm->vref2s[9]);
    can_bus.bms_ref.bms_ref_ref10 = formula_main_dbc_bms_ref_bms_ref_ref10_encode(tm->vref2s[10]);
    can_bus.bms_ref.bms_ref_ref11 = formula_main_dbc_bms_ref_bms_ref_ref11_encode(tm->vref2s[11]);
    CAN_send_message_by_id(FORMULA_MAIN_DBC_BMS_REF_FRAME_ID);
    bms_ref_mux ^= 1;

    CAN_send_message_by_id(FORMULA_MAIN_DBC_BMS_CURRENT_LIMIT_FRAME_ID);
    CAN_send_message_by_id(FORMULA_MAIN_DBC_BMS_LIMP_MODE_FRAME_ID);
}



void CAN_1Hz(void)
{
    CAN_send_message_by_id(FORMULA_MAIN_DBC_BMS_STATUS_FRAME_ID);
    CAN_send_message_by_id(FORMULA_MAIN_DBC_BMS_CELL_OVERVIEW_FRAME_ID);
    CAN_send_message_by_id(FORMULA_MAIN_DBC_BMS_FAULT_VECTOR_FRAME_ID);
}

void CAN_process_recieved_messages(void)
{
    can_message received_message;
    //Get all can messages received
    while (xQueueReceive(rx_can_message_queue, &received_message, TICKS_TO_WAIT_QUEUE_CAN_MESSAGE) == pdTRUE)
    {
        uint8_t data[8];
        for (int i = 0; i < 8; i++)
        {
            data[i] = (received_message.data >> (i*8)) & 0xff;
        }
        // uint8_t print_buffer[50];
        // uint8_t n = sprintf(&print_buffer[0], "ID: %d  Data: %d  %d  %d  %d  %d  %d  %d  %d\n\r", received_message.id, data[0],
        //      data[1], data[2], data[3], data[4], data[5], data[6], data[7]);
        // HAL_Uart_send(&print_buffer[0], n);

        //Unpack message recieved
        switch(received_message.id)
        {
            // Add case if any CAN messages have to be recieved
            
            default:
                // printf("f29bms: unknown CAN id: %d\n", received_message.id);
                break;
        }

    }
}


void CAN_send_queued_messages(void)
{
    //Check how many mailboxes are free, and put a new message in each empty mailbox, if there are any messages
    uint8_t num_free_mailboxes = HAL_number_of_empty_mailboxes();
    can_message dequeued_message;
    while (num_free_mailboxes > 0) //Fill all empty mailboxes with messages
    {
        if (xQueueReceive(tx_can_message_queue, &dequeued_message, TICKS_TO_WAIT_QUEUE_CAN_MESSAGE) == pdTRUE) //Get next message to send if there is one
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

bool CAN_is_transmit_queue_empty_fromISR(void)
{
    return xQueueIsQueueEmptyFromISR(tx_can_message_queue) == pdTRUE;
}

void CAN_add_message_rx_queue(uint32_t id, uint8_t dlc, uint8_t *data)
{
    uint64_t msg_data = 0x0;
    memcpy(&msg_data, data, sizeof(msg_data));
    
    can_message rx_msg;
    rx_msg.data = msg_data;
    rx_msg.id = id;
    rx_msg.dlc = dlc;
    xQueueSend(rx_can_message_queue, &rx_msg, 10);
}
