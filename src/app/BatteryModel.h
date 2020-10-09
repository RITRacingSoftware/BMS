#ifndef BATTERY_MODEL_H
#define BATTERY_MODEL_H

#include <stdbool.h>

typedef struct {
    float voltage;
    bool is_draining;
} SeriesCell_t;

#define NUM_SERIES_CELLS 90
#define NUM_PARALLEL_CELLS 3

typedef struct {
    SeriesCell_t cells[NUM_SERIES_CELLS];
    float largest_V;
    float smallest_V;
} BatteryModel_t;

#endif // BATTERY_MODEL_H
