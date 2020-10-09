#ifndef CELL_BALANCER_H
#define CELL_BALANCER_H
#include <stdbool.h>

#include "BatteryCharacteristics.h"
#include "BatteryModel.h"

/**
 * Initialize internal battery model.
 */
void CellBalancer_init(void);

/**
 * For each cell, check if extra draining is required.
 * Mark the cells which draining are required for.
 * Keep track of which cells should be draining and fault if they aren't.
 */
void CellBalancer_stage_cell_draining(BatteryModel_t* bm);


#endif // CELL_BALANCER_H