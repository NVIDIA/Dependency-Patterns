
#ifndef PROTOCOL_0D23CD47_H
#define PROTOCOL_0D23CD47_H

#include <stddef.h>

/* LoginRequest message structure */
typedef struct {
    const char* username;
    const char* password;
} LoginRequest;

/* StatusUpdate message structure */
typedef struct {
    int code;
    const char* message;
} StatusUpdate;

/* DataPacket message structure */
typedef struct {
    int id;
    const char* payload;
    int size;
} DataPacket;

/* Encode/decode function declarations */
char* encode_LoginRequest(const LoginRequest* msg, size_t* out_len);
LoginRequest* decode_LoginRequest(const char* data, size_t len);
void free_LoginRequest(LoginRequest* msg);
char* encode_StatusUpdate(const StatusUpdate* msg, size_t* out_len);
StatusUpdate* decode_StatusUpdate(const char* data, size_t len);
void free_StatusUpdate(StatusUpdate* msg);
char* encode_DataPacket(const DataPacket* msg, size_t* out_len);
DataPacket* decode_DataPacket(const char* data, size_t len);
void free_DataPacket(DataPacket* msg);

#endif /* PROTOCOL_0D23CD47_H */
