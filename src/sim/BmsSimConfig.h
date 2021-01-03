#ifndef BMS_SIM_CONFIG
#define BMS_SIM_CONFIG

// name of the program the server runs
// must be relative to root of repo or jenkins runs wont work
#define BMS_SIM_PROGRAM "f29bms"

// socket stuff for sim-harness I/O
#define BMS_PORT 50505
#define BMS_IP "127.0.0.1"

// size of send and retrieve message buffers for simulation I/O server and client modules
#define OUTBOX_MAX_MESSAGES 20
#define INBOX_MAX_MESSAGES 20

// How much time the f29bms process waits in between reading input messages.
// The smaller this is, the longer a simulated millisecond is.
#define INPUT_PERIOD_MS 1000

// Directory where simulation traces (blf files) are stored
#define TRACES_DIR "sim_traces"

#endif // BMS_SIM_CONFIG