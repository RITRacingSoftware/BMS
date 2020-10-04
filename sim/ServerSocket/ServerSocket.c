/*
 * ServerSocket.c
 *
 * Manages packaging and tranmission of data
 * to and from the BMS software
 * 
 * P. Kelly
 *
 */

// system includes
//    use unix domain sockets

// project includes
#include "Sim_IO.h"
#include "ServerSocket.h"

int send_message(SimOutputs outputs_pb, int fd);
SimInputs rcv_message(int fd);

int run_server;

// initialize socket server and start BMS IO
void socket_server(void *fd) {
   int sfd = *fd;
   /* this variable will need a mutex */
   run_server = 1;

   /* mutex run_server */
   while (run_server) {
       // check if data is ready to be sent 
       if (check_flag()) {
           // get data from main sim 
           SimOutputs send_data = get_sim_outputs();
           send_message(send_data, sfd);
           clear_flag();
       }

//     if incoming_message - nonblocking socket read
//       - blocking socket read to get data
//       - arrange SimInputs struct
//       - call put data from Sim_IO with struct as parameter
   }

}

// send data
//    - pass fd, output struct, returns success/failure code
//    - pack protobuf data into buffer
//    - send buffer over socket with fd
int send_message(SimOutputs outputs_pb, int fd) {
   return 0;
}

// receive data
//    - pass fd
//    - read message from socked with fd
//    - move protobuf data to struct data
//    - return data struct if success, failure code if not
SimInputs rcv_message(int fd) {
   return void;
}

// stop the socket IO loop and kill the socket
int stop_socket_server(void) {
    /* mutex */
    run_server = 0;

    // close socket
}
