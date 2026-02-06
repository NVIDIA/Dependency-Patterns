
#include "protocol_0d23cd47.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

StatusUpdate* decode_StatusUpdate(const char* data, size_t len) {
    if (!data || len == 0) return NULL;
    
    StatusUpdate* msg = (StatusUpdate*)malloc(sizeof(StatusUpdate));
    if (!msg) return NULL;
    
    /* Simple parsing - split by | */
    char* copy = strndup(data, len);
    if (!copy) {
        free(msg);
        return NULL;
    }
    
    char* token = strtok(copy, "|");
    if (!token || strcmp(token, "StatusUpdate") != 0) {
        free(copy);
        free(msg);
        return NULL;
    }
    
    token = strtok(NULL, "|");
    msg->code = token ? atoi(token) : 0;

    token = strtok(NULL, "|");
    msg->message = token ? strdup(token) : NULL;

    free(copy);
    return msg;
}
