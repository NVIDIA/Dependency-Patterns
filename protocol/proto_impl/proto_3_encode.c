
#include "protocol_0d23cd47.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* encode_DataPacket(const DataPacket* msg, size_t* out_len) {
    if (!msg || !out_len) return NULL;
    
    /* Simple encoding: just print fields separated by | */
    char buffer[4096];
    int written = snprintf(buffer, sizeof(buffer), "DataPacket|");
    
    written += snprintf(buffer + written, sizeof(buffer) - written, "%d|", msg->id);
    written += snprintf(buffer + written, sizeof(buffer) - written, "%s|", msg->payload ? msg->payload : "");
    written += snprintf(buffer + written, sizeof(buffer) - written, "%d|", msg->size);

    *out_len = written;
    char* result = (char*)malloc(written + 1);
    if (result) {
        memcpy(result, buffer, written);
        result[written] = '\0';
    }
    return result;
}
