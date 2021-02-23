#include "HAL_CurrentSensor.h"
#include "BmsSimClient.h"

void HAL_CurrentSensor_init(void)
{
    // lol
}

Error_t HAL_CurrentSensor_read_current(float* current)
{
    BmsIn* in = BmsSimClient_get_inputs();
    *current = in->current;

    Error_t err;
    err.active = false;
    return err;
}
