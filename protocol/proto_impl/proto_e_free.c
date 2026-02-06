
#include "protocol_0d23cd47.h"
#include <stdlib.h>

void free_LoginRequest(LoginRequest* msg) {
    if (!msg) return;
    
    if (msg->username) free((void*)msg->username);
    if (msg->password) free((void*)msg->password);
    free(msg);
}
