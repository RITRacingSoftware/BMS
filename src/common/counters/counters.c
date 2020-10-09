#include "counters.h"

bool incr_to_limit(int* counter, int upper_limit, int amount)
{
    bool retval = false;
    (*counter) += amount;

    if (*counter >= upper_limit)
    {
        *counter = upper_limit;
        retval = true;
    }

    return retval;
}

bool decr_to_limit(int* counter, int lower_limit, int amount)
{
    bool retval = false;
    (*counter) -= amount;

    if (*counter <= lower_limit)
    {
        *counter = lower_limit;
        retval = true;
    }

    return retval;
}