#include <signal.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <stdlib.h>
#include <time.h>
#include <errno.h>

#include "common_macros.h"
#include "BatteryModel.h"
#include "BmsSimHandle.h"
#include "portmacro.h"
#include "BmsSim.pb.h"
#include "PbSockets.h"
#include "Mailbox.h"
#include "TempModel.h"

static int sim_pid = -1;

static int server_sock;
static int client_sock;

// holds updated cell data in between ticks. The changes in here are sent 
// out on each tick and the array is cleared.
static CellList out_CellList;
static ThermList out_ThermList;

static BmsIn out_BmsIn;

// keeps track of if out_BmsIn changed, so we can skip sending it and save time if not
static bool diff_out_BmsIn = false;

// data output from f29bms process to be read by the sim harness
static BmsOut last_BmsOut;

// most recent cell data from the f29bms process (ignore voltages, drain states used only)
static Cell in_CellList[NUM_SERIES_CELLS];
// static CellList last_CellList;
// #define CAN_BUFFER_LEN 10
// static CanMessage can_buffer[CAN_BUFFER_LEN]; 

struct sockaddr_in server_addr, client_addr;

int BmsSim_init(void)
{
    // set up server socket
    
    char server_message[2000], client_message[2000];
    
    // Clean buffers:
    memset(server_message, '\0', sizeof(server_message));
    memset(client_message, '\0', sizeof(client_message));
    
    // Create socket:
    server_sock = socket(AF_INET, SOCK_STREAM, 0);
    
    if(server_sock < 0){
        printf("Error while creating socket\n");
        return -1;
    }

    // this prevents connection issues when running tests one after the other
    int reuse_addr = 1;
    setsockopt(server_sock, SOL_SOCKET, SO_REUSEADDR, &reuse_addr, sizeof(int));

    // Set port and IP:
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(BMS_PORT);
    server_addr.sin_addr.s_addr = inet_addr(BMS_IP);
    
    // Bind to the set port and IP:
    if(bind(server_sock, (struct sockaddr*)&server_addr, sizeof(server_addr))<0){
        printf("Couldn't bind to the port\n");
        return -1;
    }

    // no cell data has been input yet
    out_CellList.cells_count = 0;
    out_ThermList.therms_count = 0;
}

int BmsSim_start(void)
{
    int pid = fork();

    if (pid < 0)
    {
        return -1;
    }
    else if (pid == 0)
    {
        // this is the child process
        char * const argv[] = {BMS_SIM_PROGRAM, NULL};

        // replace runtime with f29bms
        if(execv(BMS_SIM_PROGRAM, argv) < 0)
        {
            printf("BmsSimHandle: Problem starting f29bms process, execv error code: %d\n", errno);
            return -2;
        }
    }
    else
    {
        // parent program
        sim_pid = pid;

        if(listen(server_sock, 1) < 0)
        {
            printf("Error while listening\n");
            return -1;
        }

        printf("Created and bound to socket!\nWaiting for f29bms to connect...\n");

        int client_size = sizeof(client_addr);
        client_sock = accept(server_sock, (struct sockaddr*)&client_addr, &client_size);

        // struct timeval tv;
        // tv.tv_sec = 0;
        // tv.tv_usec = 1000;
        // setsockopt(client_sock, SOL_SOCKET, SO_RCVTIMEO, (const char*)&tv, sizeof tv);

        // set up I/O with protobuf callback
        Mailbox_init(client_sock);

        printf("f29bms connected! I/O available.\n");
        
        return 0;
    }
}

void BmsSim_stop(void)
{
    printf("BmsSimHandle: Closing Socket\n");
    int closecode;
    if ((closecode = shutdown(client_sock, SHUT_WR)) != 0)
    {
        printf("BmsSimHandle: Problem shutting down client socket: %d\n", closecode);
    }

    if ((closecode = close(client_sock)) != 0)
	{
		printf("BmsSimHandle: Problem closing client Socket: %d\n", closecode);
	}

    if ((closecode = close(server_sock)) != 0)
	{
		printf("BmsSimHandle: Problem closing BmsSimClient Socket: %d\n", closecode);
	}


    kill(sim_pid, SIGHUP);
}

void BmsSim_tick(void)
{
    // Bad News: sending input on each tick is hella slow
    // Good News: we dont need to send input on each tick
    static int iteration = 0;
	iteration = (iteration + 1) % INPUT_PERIOD_MS;

    if (iteration == 0)
    {
        // it's time to send input
        BmsData data = BmsData_init_zero;
        data.which_data = BmsData_bmsIn_tag;
        data.data.bmsIn = out_BmsIn;
        Mailbox_add_to_outbox(&data);

        if (out_CellList.cells_count > 0) 
        {
            BmsData cell_data;
            cell_data.which_data = BmsData_cell_list_tag;
            cell_data.data.cell_list = out_CellList;
            Mailbox_add_to_outbox(&cell_data);
        }

        if (out_ThermList.therms_count > 0)
        {
            BmsData therm_data;
            therm_data.which_data = BmsData_therm_list_tag;
            therm_data.data.therm_list = out_ThermList;
            Mailbox_add_to_outbox(&therm_data);
        }

        Mailbox_send();
    }

    diff_out_BmsIn = false;
    out_CellList.cells_count = 0;
    out_ThermList.therms_count = 0;

    // Tick the FreeRTOS clock causing a FreeRTOS tick and consumption of the sent input data.
    // i know, this is misleading...
    // What a program does with a signal is up to the program. 
    // We've written the f29bms sim to tick FreeRTOS when it receives this signal.
    // Most signals are used for killing processes, so this posix function is named kill.
    kill(sim_pid, SIG_TICK);

    // now, read all the new output data the simulation has produced for us
    if (-1 == Mailbox_receive())
    {
        printf("BmsSimHandle: problem receiving sim output\n");
        exit(-1);
    }

    BmsData incoming_msg;
    while (!Mailbox_read_from_inbox(&incoming_msg))  
    {
        switch(incoming_msg.which_data)
        {
            case BmsData_bmsOut_tag:
                last_BmsOut = incoming_msg.data.bmsOut;
                break;
            
            case BmsData_cell_list_tag:
                {
                    CellList cell_list = incoming_msg.data.cell_list;
                    for (int i = 0; i < cell_list.cells_count; i++)
                    {
                        in_CellList[i] = cell_list.cells[i];
                    }
                }
            default:
                printf("Unknown message tag\n");
                exit(-1);
                break;
        }   
    }
}

void BmsSim_set_temp_info(int therm_index, float voltage)
{
    if (out_ThermList.therms_count < NUM_THERMISTOR)
    {
        Therm* to_edit = &out_ThermList.therms[out_ThermList.therms_count];
        to_edit->index = therm_index;
        to_edit->voltage = voltage;
        out_ThermList.therms_count++;
    }
}

bool BmsSim_get_status_led(void)
{
    return last_BmsOut.status_led;
}

bool BmsSim_get_shutdown_line(void)
{
    return last_BmsOut.shutdown_line;
}

bool BmsSim_get_charge_enable(void)
{
    return last_BmsOut.charge_enable;
}

void BmsSim_set_cell_info(int cell_index, float voltage, bool is_draining)
{
    if (out_CellList.cells_count < NUM_SERIES_CELLS)
    {
        Cell* to_edit = &out_CellList.cells[out_CellList.cells_count];
        to_edit->index = cell_index;
        to_edit->voltage = voltage;
        to_edit->is_draining = is_draining;
        out_CellList.cells_count++;
    }
}

bool BmsSim_read_drain_state(int cell_index)
{
    return in_CellList[SAT(cell_index, 0, NUM_SERIES_CELLS)].is_draining;
}

void BmsSim_stage_input(BmsIn in)
{
    diff_out_BmsIn = true;

    out_BmsIn = in;
}