#include "HAL_CurrentSensor.h"
#include "BmsSimClient.h"

Error_t HAL_CurrentSensor_read_current(float* current)
{
    BmsIn* in = BmsSimClient_get_inputs();

    *current = in->current;
}
