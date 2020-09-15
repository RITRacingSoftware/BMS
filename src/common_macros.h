#ifndef COMMON_MACROS_H
#define COMMON_MACROS_H

#define MAX(x, y) (x < y ? y : x)
#define MIN(x, y) (x < y ? x : y)
#define SAT(v, x, y) MIN(MAX(v, x), y)

#define ROUND_2D(v) ((float)((float)((int)(v * 100 + .5))) / 100)

#endif // COMMON_MACROS_H