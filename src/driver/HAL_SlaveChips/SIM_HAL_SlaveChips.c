#include "HAL_SlaveChips.h"
#include "BmsSimClient.h"
#include "TempModel.h"

void HAL_SlaveChips_init()
{
 // lol
}

Error_t HAL_SlaveChips_get_all_cell_data(float* voltages, bool* is_draining, unsigned int num)
{
    Cell* cells = BmsSimClient_get_cells_in();
    for (int i = 0; i < num; i++)
    {
        voltages[i] = cells[i].voltage;
        is_draining[i] = cells[i].is_draining;
    }

    Error_t err;
    err.active = false;
    return err;
}

Error_t HAL_SlaveChips_get_all_tm_readings(float* temperatures,float* vref2s, unsigned int num)
{
    Therm* therms = BmsSimClient_get_therms_in();

    for (int i = 0; i < num; i++)
    {
        temperatures[i] = therms[i].voltage;
    }

    Error_t err;
    err.active = false;
    return err;
}

Error_t HAL_SlaveChips_request_cell_drain_state(bool* cells, unsigned int num)
{
    for (int i = 0; i < num; i++)
    {
        BmsSimClient_set_cell_data(i, cells[i]);
    }

    Error_t err;
    err.active = false;
    return err;
}