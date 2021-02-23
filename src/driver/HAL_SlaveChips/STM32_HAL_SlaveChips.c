#include "HAL_SlaveChips.h"

Error_t HAL_SlaveChips_get_all_cell_data(float* voltages, bool* is_draining, unsigned int num){
    Error_t err;
    err.active =false;
    return err;
}

Error_t HAL_SlaveChips_get_all_tm_readings(float* temperatures, unsigned int num){
    Error_t err;
    err.active =false;
    return err;
}

Error_t HAL_SlaveChips_request_cell_drain_state(bool* cells, unsigned int num){
    Error_t err;
    err.active =false;
    return err;
}