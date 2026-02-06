
#include "protocol_0d23cd47.h"
#include <stdlib.h>

void free_StatusUpdate(StatusUpdate* msg) {
    if (!msg) return;
    
    if (msg->message) free((void*)msg->message);
    free(msg);
}
