#ifndef BLF_WRITER_WRAPPER
#define BLF_WRITER_WRAPPER

#include <stdint.h>

#ifdef __cplusplus
extern "C"
{
#endif

/**
 * C Wrapper for C++ vector_blf binary logging format library.
 * 
 * Allows us to create CAN log files from the simulation that can be analyzed in CANalyzer.
 * 
 * Very simple- only one file is open by this module at a time. 
 * Use create_log_file to open file, log_message to write to it, and close_log_file when finished.
 */


/**
 * Create logging file with a specified name.
 * file_name [in] - null terminated file name string
 */
int BlfWriter_create_log_file(char* file_name);

/**
 * Add a CAN message to the log file.
 * id [in] - 11 bit CAN id
 * data [in] - CAN message body
 * dlc [in] - length of CAN message body
 * time_ms [in] - elapsed time since start of trace in milliseconds
 */
void BlfWriter_log_message(int id, int64_t data, int dlc, int time_ms);

/**
 * Clean up logging file resource.
 * Please actually use this.
 */
void BlfWriter_close_log_file(void);

#ifdef __cplusplus
}
#endif

#endif // BLF_WRITER_WRAPPER