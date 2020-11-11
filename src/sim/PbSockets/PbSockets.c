#include <errno.h>
#include <sys/types.h>
#include <sys/socket.h>
#include "PbSockets.h"

static bool send_msg(pb_ostream_t *stream, const uint8_t *buf, size_t count)
{
    int client_sock = (int)stream->state;
    int written = send(client_sock, buf, count, 0);
    return written == count;
}

static bool receive_msg(pb_istream_t *stream, uint8_t *buf, size_t count)
{   
    int client_sock = (int)stream->state;

    if (count == 0)
        return true;


    int result = recv(client_sock, buf, count, MSG_WAITALL);
    
    //printf("recv = %d, bytes_left = %d, count=%d\n", result, stream->bytes_left, count);

    if (result == 0)
    {
        stream->bytes_left = 0;
    }
    // else if (errno == EAGAIN || errno == EWOULDBLOCK)
    // {
    //    return false;
    // }
    
    return result == count;
}

pb_ostream_t PbSockets_get_ostream(int socket_desc)
{
    pb_ostream_t ostream = {&send_msg, (void*) socket_desc, SIZE_MAX, 0};
    return ostream; 
}

pb_istream_t PbSockets_get_istream(int socket_desc)
{
    pb_istream_t istream = {&receive_msg, (void*) socket_desc, SIZE_MAX};
    return istream; 
}
