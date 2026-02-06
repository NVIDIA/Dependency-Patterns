
#include "protocol_0d23cd47.h"
#include <stdlib.h>

void free_DataPacket(DataPacket* msg) {
    if (!msg) return;
    
    if (msg->payload) free((void*)msg->payload);
    free(msg);
}
