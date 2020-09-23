#include "counters.h"

bool counter_incr(int* counter, int upper_limit)
{
    bool retval = false;
    (*counter)++;

    if (*counter >= upper_limit)
    {
        *counter = upper_limit;
        retval = true;
    }

    return retval;
}

bool counter_decr(int* counter, int lower_limit)
{
    bool retval = false;
    (*counter)--;

    if (*counter <= lower_limit)
    {
        *counter = lower_limit;
        retval = true;
    }

    return retval;
}