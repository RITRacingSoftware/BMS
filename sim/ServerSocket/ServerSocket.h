#ifndef SERVER_SOCKET_H
#define SERVER_SOCKET_H

// start the socket server 
void socket_server(void *fd); // blocking; should be run in thread

// kill the socket server
int stop_socket_server(void); 

#endif
