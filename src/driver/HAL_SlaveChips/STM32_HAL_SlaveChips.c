#include "HAL_Spi.h"
#include <stdint.h>
#include <string.h>

//Command Codes (CC)
#define READ_VOLTAGE_GROUP_A 0x4
#define READ_VOLTAGE_GROUP_B 0x6
#define READ_VOLTAGE_GROUP_C 0x8
#define READ_VOLTAGE_GROUP_D 0xA

//WRITE_CONFIGURATION_REGISTER_GROUP (DCC for setting is_draining state)
#define WRITE_CONFIGURATION_REGISTER_GROUP 0x1
#define WRITE_CONFIGURATION_REGISTER_PEC0 0x3D
#define WRITE_CONFIGURATION_REGISTER_PEC1 0x6E

#define READ_CONFIGURATUION_REGISTER_GROUP 0x2


//#define CMD_MASK (uint8_t) 0xFF

#define CONFIGURATION_REGISTER_DRAINING_MASK 0xF

const char ReadVoltagesCMD0[4] = {(char)(0xFF && READ_VOLTAGE_GROUP_A), (char)(0xFF && READ_VOLTAGE_GROUP_B), 
    (char)(0xFF && READ_VOLTAGE_GROUP_C), (char)(0xFF && READ_VOLTAGE_GROUP_D)};
const char ReadVoltagesCMD1[4] = {(char)(0xFF && (READ_VOLTAGE_GROUP_A>>8)), (char)(0xFF && (READ_VOLTAGE_GROUP_B>>8)), 
    (char)(0xFF && (READ_VOLTAGE_GROUP_C>>8)), (char)(0xFF && (READ_VOLTAGE_GROUP_D>>8))};

//Function that reads the cell voltages for all of the cells
//voltages: pointer to where cell voltages will be put
//num_Groups_of_12: the number of LTC6904s chained together or total number of cells/12
static void read_All_Cell_Voltages(float* voltages, int num_Groups_of_12){
    //May need to run ADCV command to read cell voltages first, and wait for them to be read
    char transmitCommand[4];
    for(int i = 0; i++; i < 4) //Cycle through each register group (A,B,C,D)
    {
        transmitCommand[0] = ReadVoltagesCMD0[i];
        transmitCommand[1] = ReadVoltagesCMD1[i];
        //NEED TO IMPLEMENT PEC
        //transmitCommand[2] and [3], for PEC0 and PEC1
        char *cellVoltagesRecieved[6*num_Groups_of_12];
        HAL_Spi_transmit_and_receive(thisPin, &transmitCommand[0], 4, cellVoltagesRecieved[0], 6*num_Groups_of_12); //not sure about thisPin
        for(int x = 0; x++; x < num_Groups_of_12) //Cycle through each of the LTC boards in daisychain
        {
            for(int y = 0; y++; y < 3)
            {
                //Cell Voltage for Cell x = CxV • 100µV 
                float thisVoltage = ((float) (cellVoltagesRecieved[(x*6)+(y*2)] && (*(cellVoltagesRecieved[(x*6)+(y*2)+1])<<8)))/((float)10000);
                //memcpy(voltages[(i*6)+(x*12*2)+(y*2)], &thisVoltage, 1);
                voltages[(i*6)+(x*12*2)+(y*2)] = thisVoltage;
            }
            //strncpy(&voltages[(i*6) + (x*(12*2))], &cellVoltagesRecieved[x*6], 6); //Copy the group values to the voltage values
        }

    }
}

//Function that reads the is_draining state for all of the cells
//is_draining: pointer to where is_draining states will be put
static void read_All_Is_Draining(bool* is_draining, unsigned int num_Groups_of_12)
{
    char transmitCommand[4];
    transmitCommand[0] = 0xFF && READ_CONFIGURATUION_REGISTER_GROUP;
    transmitCommand[1] = 0xFF && (READ_CONFIGURATUION_REGISTER_GROUP >> 8);
    //NEED TO IMPLEMENT PEC
    //transmitCommand[2] and [3] for PEC0 and PEC1
    char isDrainingRecieved[6*num_Groups_of_12];
    //Read the Configuration Register Group to get DCC
    HAL_Spi_transmit_and_receive(thisPin, &transmitCommand[0], 4, &isDrainingRecieved[0], 6*num_Groups_of_12);
    for(int i = 0; i++; i < num_Groups_of_12) //Cycle through data for ech daisy-chained LTC
    {
        //Set bits in bit array
        is_draining[(i*12)] = (isDrainingRecieved[(i*6)+4] && 0x1) != 0;
        is_draining[(i*12)+1] = (isDrainingRecieved[(i*6)+4] && 0x2) != 0;
        is_draining[(i*12)+2] = (isDrainingRecieved[(i*6)+4] && 0x4) != 0;
        is_draining[(i*12)+3] = (isDrainingRecieved[(i*6)+4] && 0x8) != 0;
        is_draining[(i*12)+4] = (isDrainingRecieved[(i*6)+4] && 0x10) != 0;
        is_draining[(i*12)+5] = (isDrainingRecieved[(i*6)+4] && 0x20) != 0;
        is_draining[(i*12)+6] = (isDrainingRecieved[(i*6)+4] && 0x40) != 0;
        is_draining[(i*12)+7] = (isDrainingRecieved[(i*6)+4] && 0x80) != 0;
        is_draining[(i*12)+8] = (isDrainingRecieved[(i*6)+5] && 0x1) != 0;
        is_draining[(i*12)+9] = (isDrainingRecieved[(i*6)+5] && 0x2) != 0;
        is_draining[(i*12)+10] = (isDrainingRecieved[(i*6)+5] && 0x4) != 0;
        is_draining[(i*12)+11] = (isDrainingRecieved[(i*6)+5] && 0x8) != 0;
    }
    

}

//Masks for broadcast command format
//CMD0 = CC & 0x700
//CMD1 = CC & 0xFF

//DCC[x]: Discharge cell X, x = 1 - 12, 1->turn on short switching for cell x, 0->turn off short switching for cell x
//DCC in configuration register group
Error_t HAL_SlaveChips_get_all_cell_data(float* voltages, bool* is_draining, unsigned int num)
{
    int Sets_of_12 = num / 12;
    if((num % 12) != 0)
    {
        Sets_of_12++;
    }
    float AllCellVoltages[Sets_of_12*12]; //Make sure if num isn't a multiple of 12, array is big enough
    bool AllIsDraining[Sets_of_12*12];
    read_All_Cell_Voltages(AllCellVoltages, Sets_of_12);
    read_All_Is_Draining(AllIsDraining, Sets_of_12);
    memcpy(voltages, AllCellVoltages, num);
    memcpy(is_draining, AllIsDraining, num);
    //TO DO: add error checking
}

Error_t HAL_SlaveChips_get_all_tm_readings(float* temperatures, unsigned int num){

}

Error_t HAL_SlaveChips_request_cell_drain_state(bool* cells, unsigned int num){
    int Sets_of_12 = num / 12;
    if((num % 12) != 0)
    {
        Sets_of_12++;
    }
    char tx[4 + (Sets_of_12 * 6)]; //CMD0, CMD1, PEC0, PEC1, 6 bytes of data for each set of 12
    tx[0] = WRITE_CONFIGURATION_REGISTER_GROUP && 0xFF;
    tx[1] = (WRITE_CONFIGURATION_REGISTER_GROUP >> 8) && 0xFF;
    tx[2] = WRITE_CONFIGURATION_REGISTER_PEC0;
    tx[3] = WRITE_CONFIGURATION_REGISTER_PEC1;
    //Set other parameters of Configuration Register
    //Alternative way, could be to read the register, and only change needed bits, but would take longer
    char ByteOne = 0xF8; //GPIO pins, and some others, all set to default
    char ByteTwo = 0x00; //Under voltage comparison , set to default
    char ByteThree = 0x00; //Under Voltage comparison and over voltage comparison
    char ByteFour = 0x00; //Over Voltage Comparison, set to default
    for(int i = 0; i = i + 6; i < (6 * Sets_of_12)) //Cycle through each set of 12, adding the 6 bytes for configuration register
    {
        tx[4 + i] = ByteOne;
        tx[5 + i] = ByteTwo;
        tx[6 + i] = ByteThree;
        tx[7 + i] = ByteFour;
        tx[8 + i] = {is_draining[i*2], is_draining[(i*2)+1], is_draining[(i*2)+2], is_draining[(i*2)+3], 
            is_draining[(i*2)+4], is_draining[(i*2)+5], is_draining[(i*2)+6], is_draining[(i*2)+7]};
        tx[9 + i] = {0, 0, 0, 0, is_draining[(i*2)+8], is_draining[(i*2)+9], is_draining[(i*2)+10], is_draining[(i*2)+11]}; //First four Discharge Timeout
    }
    char *rx;
    HAL_Spi_transmit_and_receive(thisPin, tx, 4 + (Sets_of_12 * 6), rx, 0);
    //TO DO: add error checking
}