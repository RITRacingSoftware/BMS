#ifndef COUNTERS_H
#define COUNTERS_H

#include <stdbool.h>
#include <limits.h>

/**
 * Generic counter utility so we don't have to rewrite counter code.
 * Counters are just integers. Boolean return value for when counters reach
 * limits.
 * 
 * Use INT_MAX for essentially no upper limit
 * Use INT_MIN for essentially no lower limit
 * 
 */

/**
 * Increment an integer counter unless it is >= upper_limit.
 * counter [out] - counter to increment
 * upper_limit [in] - if counter is at or above this limit, don't increment
 * amount [in] - amount to increment by
 * return true if counter is at or above upper_limit, false otherwise
 */
bool incr_to_limit(int* counter, int upper_limit, int amount);


/**
 * Decrement an integer counter unless it is <= lower_limit.
 * counter [out] - counter to increment
 * lower_limit [in] - if counter is at or below this limit, don't decrement
 * amount [in] - amount to decrement by
 * return true if counter is at or below lower_limit, false otherwise
 */
bool decr_to_limit(int* counter, int lower_limit, int decrement);

#endif // COUNTERS_H