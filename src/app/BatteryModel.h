#ifndef BATTERY_MODEL_H
#define BATTERY_MODEL_H

#include <stdbool.h>
#include "f29BmsConfig.h"

typedef struct {
    float voltage;
    bool drain_request; // Set to true to request this cell to drain
    bool drain_feedback; // Drain states read back from LTC chips. NOTE: This is never set. Don't ask me why. -Akari
} SeriesCell_t;

typedef struct {
    SeriesCell_t cells[NUM_SERIES_CELLS];
    float largest_V;
    float smallest_V;
    float average_V;
    float total_V;
} BatteryModel_t;

#endif // BATTERY_MODEL_H
