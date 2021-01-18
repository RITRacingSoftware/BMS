#include <iostream>

#include <Vector/BLF.h>

#include "BlfWriter.h"


Vector::BLF::File file;

int BlfWriter_create_log_file(char* file_name)
{
    file.open(file_name, std::ios_base::out);
    if (!file.is_open())
    {
        std::cout << "Couldn't create BLF logging file." << std::endl;
        return -1;
    }

    return 0;
}

void BlfWriter_log_message(int id, int64_t data, int dlc, int time_ms)
{
    auto * msg = new Vector::BLF::CanMessage;
    msg->channel = 1;
    msg->flags = 1;
    msg->dlc = dlc;
    msg->id = id;
    msg->objectTimeStamp = 1000 * time_ms;
    for (int i = 0; i < dlc; i++)
    {
        msg->data[i] = ((data & ((int64_t)0xFF << (i*8))) >> (i*8));
    }

    file.write(msg);
}

void BlfWriter_close_log_file(void)
{
    file.close();
}

