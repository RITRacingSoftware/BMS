#ifndef COMMON_MACROS_H
#define COMMON_MACROS_H

// math
#define MAX(x, y) (x < y ? y : x)
#define MIN(x, y) (x < y ? x : y)
#define SAT(v, x, y) MIN(MAX(v, x), y)
#define ROUND_2D(v) ((float)((float)((int)(v * 100 + .5))) / 100)

// bitwise stuff
#define BIT(x) (1 << (x))
#define ISOLATE_BYTE(value, byte) (((value) & (0xFF << ((byte) * 8))) >> ((byte) * 8))
#define STORE_BIG_ENDIAN(arr, value, len) for (int i = 0; i < (len); i++) arr[i] = ISOLATE_BYTE((value), (len)-1-i);
#define STORE_LITTLE_ENDIAN(arr, value, len) for (int i = 0; i < (len); i++) arr[i] = ISOLATE_BYTE((value), i);

#endif // COMMON_MACROS_H