#include <stdio.h>
#include "LogicalAccumulatorModel.h"

ExtU rtU; // Inputs
ExtY rtY;

void initInputs()
{
    for (int i = 0; i < 5; i++)
    {
        rtU.DischargeSig[i] = 0;
    }
    rtU.LoadIn = 0;
}

int main(int_T argc, const char *argv[])
{
    initInputs();
    LogicalAccumulatorModel_initialize();

    for (int i = 0; i < 100000; i++)
    {
        rtU.LoadIn = 10;
        LogicalAccumulatorModel_step();
    }
    return 0;
}
