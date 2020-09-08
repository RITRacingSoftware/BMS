#ifndef SHUTDOWN_LINE_H
#define SHUTDOWN_LINE_H

/**
 * Start off the shutdown line in a safe state (active).
 */
void ShutdownLine_init(void);

/**
 * Drive the shutdown line active to indicate a BMS fault.
 */
void ShutdownLine_indicate_fault(void);

/**
 * Drive the shutdown line inactive to indicate no BMS fault.
 */
void ShutdownLine_nominal(void);

#endif // SHUTDOWN_LINE_H
