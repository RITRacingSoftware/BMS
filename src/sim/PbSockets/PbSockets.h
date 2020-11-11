#ifndef PBSOCKETS_H
#define PBSOCKETS_H
#include "pb.h"
#include "pb_encode.h"
#include "pb_decode.h"

pb_ostream_t PbSockets_get_ostream(int socket_desc);
pb_istream_t PbSockets_get_istream(int socket_desc);

#endif // PBSOCKETS_H