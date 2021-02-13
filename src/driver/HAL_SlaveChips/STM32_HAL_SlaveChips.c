//Command Codes (CC)
#define READ_VOLTAGE_GROUP_A 0x4
#define READ_VOLTAGE_GROUP_B 0x6
#define READ_VOLTAGE_GROUP_C 0x8
#define READ_VOLTAGE_GROUP_D 0xA

//Masks for broadcast command format
//CMD0 = CC & 0x700
//CMD1 = CC & 0xFF

//DCC[x]: Discharge cell X, x = 1 - 12, 1->turn on short switching for cell x, 0->turn off short switching for cell x
Error_t HAL_SlaveChips_get_all_cell_data(float* voltages, bool* is_draining, unsigned int num)
{
    //DCP: Discharge Permited. 1 = Discharge permitted, 0 = Discharge not permitted
    
}

Error_t HAL_SlaveChips_get_all_tm_readings(float* temperatures, unsigned int num){

}

Error_t HAL_SlaveChips_request_cell_drain_state(bool* cells, unsigned int num){

}