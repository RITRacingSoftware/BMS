#ifndef PB_MAILBOX
#define PB_MAILBOX

#include "BmsSim.pb.h"

/**
 * Set up protobuf I/O streams with given socket.
 */
void Mailbox_init(int socket_desc);

/**
 * Stage a message to be sent.
 * Messages are staged and sent in FIFO order.
 * data [in] - pointer to data to make a copy of to send.
 * return -1 if mailbox full, 0 otherwise
 */
int Mailbox_add_to_outbox(BmsData* data);

/**
 * Get the next message from the inbox. Destroys the message in the inbox.
 * data [in] - destination for read message data
 * return -1 if inbox empty, 0 otherwise.
 */
int Mailbox_read_from_inbox(BmsData* data);

/**
 * Send all data in the outbox over the socket.
 * return the number of messages left in the inbox after sending. Should be 0 if no errors occurred.
 */
int Mailbox_send(void);

/**
 * Read all available messages from the socket and add them to the inbox.
 * Return number of messages read, -1 for error.
 */
int Mailbox_receive(void);

#endif // PB_MAILBOX