
#include "protocol_0d23cd47.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

LoginRequest* decode_LoginRequest(const char* data, size_t len) {
    if (!data || len == 0) return NULL;
    
    LoginRequest* msg = (LoginRequest*)malloc(sizeof(LoginRequest));
    if (!msg) return NULL;
    
    /* Simple parsing - split by | */
    char* copy = strndup(data, len);
    if (!copy) {
        free(msg);
        return NULL;
    }
    
    char* token = strtok(copy, "|");
    if (!token || strcmp(token, "LoginRequest") != 0) {
        free(copy);
        free(msg);
        return NULL;
    }
    
    token = strtok(NULL, "|");
    msg->username = token ? strdup(token) : NULL;

    token = strtok(NULL, "|");
    msg->password = token ? strdup(token) : NULL;

    free(copy);
    return msg;
}
