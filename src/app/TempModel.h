#ifndef TEMP_MODEL_H
#define TEMP_MODEL_H
#include "f29BmsConfig.h"

typedef struct{
    float tm_readings_V[NUM_THERMISTOR];
    float temps_C[NUM_THERMISTOR];
} TempModel_t;

#endif // TEMP_MODEL_H