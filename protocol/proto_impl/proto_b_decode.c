
#include "protocol_0d23cd47.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

DataPacket* decode_DataPacket(const char* data, size_t len) {
    if (!data || len == 0) return NULL;
    
    DataPacket* msg = (DataPacket*)malloc(sizeof(DataPacket));
    if (!msg) return NULL;
    
    /* Simple parsing - split by | */
    char* copy = strndup(data, len);
    if (!copy) {
        free(msg);
        return NULL;
    }
    
    char* token = strtok(copy, "|");
    if (!token || strcmp(token, "DataPacket") != 0) {
        free(copy);
        free(msg);
        return NULL;
    }
    
    token = strtok(NULL, "|");
    msg->id = token ? atoi(token) : 0;

    token = strtok(NULL, "|");
    msg->payload = token ? strdup(token) : NULL;

    token = strtok(NULL, "|");
    msg->size = token ? atoi(token) : 0;

    free(copy);
    return msg;
}
