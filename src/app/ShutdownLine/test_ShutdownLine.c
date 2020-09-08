// includes for mocking
#include "unity.h"

// module under test
#include "ShutdownLine.h"

// mocked includes
#include "MockHAL_ShutdownLine.h"

/*
 * Enforce the shutdown line starts active.
 */
void test_ShutdownLine_init_active(void)
{
    HAL_ShutdownLine_drive_low_Expect();
    ShutdownLine_init();
}
