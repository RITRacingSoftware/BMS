#ifndef BMS_SIM_CLIENT_H
#define BMS_SIM_CLIENT_H

/**
 * Module for handling communication between the simulation handler and the f29bms driver modules.
 * 
 * // TODO- implement CAN
 * 
 * A model of all driver inputs and outputs is kept in this module. When a driver outputs, it updates the output model.
 * When a driver inputs, it reads from the input model. The input model is updated by the simulation handler.
 * All I/O is interprocess communication over a socket with google protobuf encoding.
 */

#include <stdbool.h>

#include "BmsSim.pb.h"

/**
 * Set up client socket for communicating with simulink or the open-loop python.
 * Return 0 for success, -1 for error.
 */
int BmsSimClient_init(void);

/**
 * Read and apply input stimulus from simulation harness.
 * 
 * Send output data to the simulation harness.
 */
void BmsSimClient_io(void);

/**
 * Open-ended access for drivers to change generic outputs.
 * return pointer to next BmsOut protobuf message to send to sim handle.
 */
BmsOut* BmsSimClient_get_outputs(void);

/**
 * Change a drain state output for a cell.
 * index [in] - cell index
 * drain_state [in] - new drain state for cell
 */
void BmsSimClient_set_cell_data(int index, bool drain_state);

/**
 * Open-ended access for drivers to read generic inputs.
 * return pointer to protobuf input structure.
 */
const BmsIn* BmsSimClient_get_inputs(void);

/**
 * Open-ended access for drivers to read input cell data.
 * Return pointer to protobuf CellList structure
 */
Cell* BmsSimClient_get_cells_in(void); 

/**
 * Open-ended access for drivers to read input thermistor data.
 * Return pointer to protobuf ThermList structure.
 */
Therm* BmsSimClient_get_therms_in(void);

/**
 * Stage a CAN protobuf message for transmission to the simulation handle.
 * id [in] - CAN id for the message
 * data [in] - 64 bit data for the CAN message
 */
int BmsSimClient_send_CAN(int id, uint64_t data);

/**
 * Close the socket connection.
 */
void BmsSimClient_close(void);

#endif // BMS_SIM_CLIENT_H