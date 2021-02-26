/*
 * Master header file
 */

#include "DataFormat.pb-c.h"

#define NUM_CELLS 5

// USE PROTOBUF
// populated with data received from the BMS
//typedef struct SimInputs {
//    uint8_t discharge_request[NUM_CELLS];
//} SimInputs;

// USE PROTOBUF
// populated with data to be sent to the BMS
//typedef struct SimOutputs {
//    float current_value;
//    uint16_t voltages[NUM_CELLS];
//} SimOutputs;

// check if the sim data is ready to send
int check_flag(void);

// clear the send data flag
void clear_flag(void);

// write unpacked data from BMS to sim 
void put_sim_inputs(SimInputs inputs_pb);

// get protobuf struct to send to BMS
SimOutputs get_sim_outputs(void);
