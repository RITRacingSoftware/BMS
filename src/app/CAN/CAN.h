#ifndef CAN_H
#define CAN_H
#include <stdbool.h>

#include "can_ids.h"
#include "f29bms_dbc.h"
#include "BatteryModel.h"
#include "TempModel.h"

/**
 * Holds the current state of the CAN bus.
 * Every signal in the DBC has a field in this.
 * Passed by reference into each CAN signal encoding function.
 * 
 * A packed CAN message can be extracted from this structure by using the pack functions.
 * 
 * So to send a CAN message, update the signals using the encode functions and 
 * then use CAN_send_message with data populated by a pack function.
*/
extern can_obj_f29bms_dbc_h_t CAN_BUS;

/**
 * Initialize error status to none.
 */
void CAN_init(void);

/**
 * Attempt to send a CAN message with a given id.
 * Data is automatically retrieved from CAN_BUS.
 * id [in] - 11 bit CAN id- use the generated definitions in can_ids.h
 */
void CAN_send_message(int id);

/**
 * Return true if last CAN message could not send, false otherwise.
 */
bool CAN_get_error(void);

/**
 * Periodic CAN functions. Send periodic CAN messages.
 */
void CAN_1kHz(void);
void CAN_10Hz(BatteryModel_t* bm, TempModel_t* tm);
void CAN_1Hz(void);

#endif // CAN_H