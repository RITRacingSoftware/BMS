#include <stdio.h>
#include "rtwtypes.h"
#include "AccumulatorModel.h"

ExtU_AccumulatorModel_T AccumulatorModel_U; // Inputs
ExtY_AccumulatorModel_T AccumulatorModel_Y;

void initInputs()
{
    for (int i = 0; i < 5; i++)
    {
        AccumulatorModel_U.DischargeIn[i] = 0;
    }
    AccumulatorModel_U.LoadCont = 0;
}

int main(int_T argc, const char *argv[])
{
    initInputs();
    AccumulatorModel_initialize();

    for (int i = 0; i < 50; i++)
    {
        AccumulatorModel_U.LoadCont = 10;
        AccumulatorModel_step();
       // printf("Step %d: Load current(from sim): %f; Cell voltages %0.3f %0.3f %0.3f %0.3f %0.3f\n", i, AccumulatorModel_Y.CurrentOut, 
       // AccumulatorModel_Y.VoltageOut[0], AccumulatorModel_Y.VoltageOut[1], AccumulatorModel_Y.VoltageOut[2], AccumulatorModel_Y.VoltageOut[3],
       //  AccumulatorModel_Y.VoltageOut[4]);
    }
    return 0;
}
