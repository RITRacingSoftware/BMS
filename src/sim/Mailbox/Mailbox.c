#include "BmsSimConfig.h"
#include "Mailbox.h"
#include "PbSockets.h"
#include "pb.h"

#include <stdio.h>

static pb_ostream_t out;
static pb_istream_t in;

static int num_in_outbox;
static BmsData outbox[OUTBOX_MAX_MESSAGES];

static int num_in_inbox;
static BmsData inbox[INBOX_MAX_MESSAGES];

void Mailbox_init(int socket_desc)
{
    out = PbSockets_get_ostream(socket_desc);
    in = PbSockets_get_istream(socket_desc);
}

int Mailbox_add_to_outbox(BmsData* data)
{
    int retval = -1;
    if (num_in_outbox <= OUTBOX_MAX_MESSAGES)
    {
        outbox[num_in_outbox] = *data;
        num_in_outbox++;
        retval = 0;
    }
    return retval;
}

int Mailbox_read_from_inbox(BmsData* data)
{
    int retval = -1;
    if (num_in_inbox > 0)
    {
        *data = inbox[num_in_inbox-1];
        num_in_inbox--;
        retval = 0;
    }
    return retval;
}

int Mailbox_send(void)
{
    BmsMetaData meta = BmsMetaData_init_zero;
    meta.messages_incoming = num_in_outbox;

    // tell the client how many messages are incoming
    if (!pb_encode_delimited(&out, BmsMetaData_fields, &meta))
    {
        printf("PB MetaData Send Error: %s\n", PB_GET_ERROR(&out));
        return 0;
    }

    while(num_in_outbox > 0)
    {
        // MUST use delimited or the receive handler wont know when to stop reading and will loop forever
        if (!pb_encode_delimited(&out, BmsData_fields, &outbox[num_in_outbox-1]))
        {
            printf("PB Error: %s\n", PB_GET_ERROR(&out));
            break;
        }
        num_in_outbox--;
    }
    
    return num_in_outbox;
}

int Mailbox_receive(void)
{
    BmsMetaData meta = BmsMetaData_init_zero;
    // retrieve the number of messages incoming
    if (!pb_decode_delimited(&in, BmsMetaData_fields, &meta))
    {
        printf("PB MetaData Read error: %s\n", PB_GET_ERROR(&in));
        return -1;
    }
    int num_left_to_read = meta.messages_incoming; 
    // MUST use delimited here, so the receive handler knows where the message ends
    while ((num_in_inbox < INBOX_MAX_MESSAGES) && (num_left_to_read > 0))
    {
        if (!pb_decode_delimited(&in, BmsData_fields, &inbox[num_in_inbox]))
        {
            printf("PB Read error: %s\n", PB_GET_ERROR(&in));
            return -1;
        }
        num_left_to_read--;
        num_in_inbox++;
    }
    
    return num_in_inbox;
}