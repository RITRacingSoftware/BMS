#ifndef BATTERY_MODEL_H
#define BATTERY_MODEL_H

#include <stdbool.h>
#include "f29BmsConfig.h"

typedef struct {
    float voltage;
    bool is_draining;
} SeriesCell_t;

typedef struct {
    SeriesCell_t cells[NUM_SERIES_CELLS];
    float largest_V;
    float smallest_V;
    float average_V;
    float total_V;
} BatteryModel_t;

#endif // BATTERY_MODEL_H
