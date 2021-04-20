#ifndef COMMON_MACROS_H
#define COMMON_MACROS_H

#include <float.h>
#include <math.h>

#define SQ(x) ((x)*(x))
#define CUBE(x) ((x)*(x)*(x))

// units
#define MS_TO_HR (1.0 / ((float)(1000 * 60 * 60)))

// math
#define MAX(x, y) ((x) < (y) ? (y) : (x))
#define MIN(x, y) ((x) < (y) ? (x) : (y))
#define SAT(v, x, y) MIN(MAX((v), (x)), (y))
#define ROUND_2D(v) ((float)((float)((int)((v) * 100.0 + .5))) / 100.0)
#define ROUND_INT(v) (int)((float)(v) + 0.5)
// idk why this doesnt work: #define FLOAT_EQ(f1, f2) (fabs(f1 - f2) < FLT_EPSILON)
#define FLOAT_EQ(f1, f2, tol) (fabs((f1) - (f2)) <= (tol))
#define FLOAT_GT(f1, f2, tol) (!FLOAT_EQ(f1, f2, tol) && ((f1) > (f2)))
#define FLOAT_GT_EQ(f1, f2, tol) (FLOAT_EQ(f1, f2, tol) || ((f1) > (f2)))
#define FLOAT_LT(f1, f2, tol) (!FLOAT_EQ(f1, f2, tol) && ((f1) < (f2)))
#define FLOAT_LT_EQ(f1, f2, tol) (FLOAT_EQ(f1, f2, tol) || ((f1) < (f2)))

// bitwise stuff
#define BIT(x) (1 << (x))
#define ISOLATE_BYTE(value, byte) (((value) & (0xFF << ((byte) * 8))) >> ((byte) * 8))
#define STORE_BIG_ENDIAN(arr, value, len) for (int i = 0; i < (len); i++) arr[i] = ISOLATE_BYTE((value), (len)-1-i);
#define STORE_LITTLE_ENDIAN(arr, value, len) for (int i = 0; i < (len); i++) arr[i] = ISOLATE_BYTE((value), i);

#endif // COMMON_MACROS_H