#!/usr/bin/env python3
# SPDX-FileCopyrightText: Copyright (c) 2025 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
# SPDX-License-Identifier: MIT

import hashlib
import sys
import os
import re

def md5sum(text):
    return hashlib.md5(str(text).encode()).hexdigest()

def create_proto_impl_dir():
    if not os.path.exists('proto_impl'):
        os.makedirs('proto_impl')

def parse_protocol_spec(spec_file):
    """Parse protocol.spec and return list of messages with their fields"""
    messages = []
    current_message = None
    
    with open(spec_file, 'r') as f:
        for line in f:
            line = line.strip()
            if not line or line.startswith('#'):
                continue
            
            if line.startswith('MESSAGE'):
                if current_message:
                    messages.append(current_message)
                message_name = line.split()[1]
                current_message = {'name': message_name, 'fields': []}
            elif line.startswith('FIELD') and current_message:
                parts = line.split()
                field_name = parts[1]
                field_type = parts[2]
                current_message['fields'].append({'name': field_name, 'type': field_type})
        
        if current_message:
            messages.append(current_message)
    
    return messages

def c_type_for_field(field_type):
    """Convert protocol field type to C type"""
    if field_type == 'string':
        return 'const char*'
    elif field_type == 'int':
        return 'int'
    else:
        return 'void*'

def generate_header(messages, header_guard):
    """Generate protocol header with struct definitions based on spec"""
    header = '''
#ifndef ''' + header_guard + '''
#define ''' + header_guard + '''

#include <stddef.h>

'''
    
    # Generate struct for each message
    for msg in messages:
        header += f'/* {msg["name"]} message structure */\n'
        header += f'typedef struct {{\n'
        for field in msg['fields']:
            c_type = c_type_for_field(field['type'])
            header += f'    {c_type} {field["name"]};\n'
        header += f'}} {msg["name"]};\n\n'
    
    # Generate encode/decode function declarations
    header += '/* Encode/decode function declarations */\n'
    for msg in messages:
        header += f'char* encode_{msg["name"]}(const {msg["name"]}* msg, size_t* out_len);\n'
        header += f'{msg["name"]}* decode_{msg["name"]}(const char* data, size_t len);\n'
        header += f'void free_{msg["name"]}({msg["name"]}* msg);\n'
    
    header += '\n#endif /* ' + header_guard + ' */\n'
    return header

def generate_encoder(message, filename, header_name):
    """Generate encoder implementation for a specific message"""
    code = f'''
#include "{header_name}"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* encode_{message["name"]}(const {message["name"]}* msg, size_t* out_len) {{
    if (!msg || !out_len) return NULL;
    
    /* Simple encoding: just print fields separated by | */
    char buffer[4096];
    int written = snprintf(buffer, sizeof(buffer), "{message["name"]}|");
    
'''
    
    for field in message['fields']:
        if field['type'] == 'string':
            code += f'    written += snprintf(buffer + written, sizeof(buffer) - written, "%s|", msg->{field["name"]} ? msg->{field["name"]} : "");\n'
        elif field['type'] == 'int':
            code += f'    written += snprintf(buffer + written, sizeof(buffer) - written, "%d|", msg->{field["name"]});\n'
    
    code += '''
    *out_len = written;
    char* result = (char*)malloc(written + 1);
    if (result) {
        memcpy(result, buffer, written);
        result[written] = '\\0';
    }
    return result;
}
'''
    return code

def generate_decoder(message, filename, header_name):
    """Generate decoder implementation for a specific message"""
    code = f'''
#include "{header_name}"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

{message["name"]}* decode_{message["name"]}(const char* data, size_t len) {{
    if (!data || len == 0) return NULL;
    
    {message["name"]}* msg = ({message["name"]}*)malloc(sizeof({message["name"]}));
    if (!msg) return NULL;
    
    /* Simple parsing - split by | */
    char* copy = strndup(data, len);
    if (!copy) {{
        free(msg);
        return NULL;
    }}
    
    char* token = strtok(copy, "|");
    if (!token || strcmp(token, "{message["name"]}") != 0) {{
        free(copy);
        free(msg);
        return NULL;
    }}
    
'''
    
    for field in message['fields']:
        code += f'    token = strtok(NULL, "|");\n'
        if field['type'] == 'string':
            code += f'    msg->{field["name"]} = token ? strdup(token) : NULL;\n'
        elif field['type'] == 'int':
            code += f'    msg->{field["name"]} = token ? atoi(token) : 0;\n'
        code += '\n'
    
    code += '''    free(copy);
    return msg;
}
'''
    return code

def generate_free_function(message, filename, header_name):
    """Generate free function for a specific message"""
    code = f'''
#include "{header_name}"
#include <stdlib.h>

void free_{message["name"]}({message["name"]}* msg) {{
    if (!msg) return;
    
'''
    
    for field in message['fields']:
        if field['type'] == 'string':
            code += f'    if (msg->{field["name"]}) free((void*)msg->{field["name"]});\n'
    
    code += '''    free(msg);
}
'''
    return code

def main():
    if len(sys.argv) != 2:
        print("Usage: python3 generate_protocol.py <integer>")
        sys.exit(1)
    
    try:
        integer_arg = int(sys.argv[1])
    except ValueError:
        print("Error: Argument must be an integer")
        sys.exit(1)
    
    # Parse protocol specification
    messages = parse_protocol_spec('protocol.spec')
    print(f"Parsed {len(messages)} messages from protocol.spec")
    
    # Generate MD5 hash from seed
    md5_hash = md5sum(integer_arg)
    print(f"MD5 hash of {integer_arg}: {md5_hash}")
    
    # Generate dynamic header name based on spec content + seed
    # Hash the spec file content combined with seed
    with open('protocol.spec', 'r') as f:
        spec_content = f.read()
    spec_hash = md5sum(spec_content + str(integer_arg))
    header_hash = spec_hash[:8]  # Use first 8 chars
    header_name = f"protocol_{header_hash}.h"
    header_guard = f"PROTOCOL_{header_hash.upper()}_H"
    
    print(f"Header name: {header_name}")
    
    # Generate header file with dynamic name
    header_content = generate_header(messages, header_guard)
    with open(header_name, 'w') as f:
        f.write(header_content)
    print(f"Generated: {header_name}")
    
    # Create proto_impl directory
    create_proto_impl_dir()
    
    # Generate implementation files with unpredictable names based on MD5
    # Each message gets 3 files: encoder, decoder, free function
    file_count = 0
    for i, message in enumerate(messages):
        # Use different parts of MD5 hash for each file
        hash_idx = (i * 3) % len(md5_hash)
        
        # Encoder file
        encoder_hash = md5_hash[hash_idx]
        encoder_filename = f"proto_{encoder_hash}_encode.c"
        encoder_path = os.path.join('proto_impl', encoder_filename)
        with open(encoder_path, 'w') as f:
            f.write(generate_encoder(message, encoder_filename, header_name))
        print(f"Generated: {encoder_path}")
        file_count += 1
        
        # Decoder file
        decoder_hash = md5_hash[(hash_idx + 1) % len(md5_hash)]
        decoder_filename = f"proto_{decoder_hash}_decode.c"
        decoder_path = os.path.join('proto_impl', decoder_filename)
        with open(decoder_path, 'w') as f:
            f.write(generate_decoder(message, decoder_filename, header_name))
        print(f"Generated: {decoder_path}")
        file_count += 1
        
        # Free function file
        free_hash = md5_hash[(hash_idx + 2) % len(md5_hash)]
        free_filename = f"proto_{free_hash}_free.c"
        free_path = os.path.join('proto_impl', free_filename)
        with open(free_path, 'w') as f:
            f.write(generate_free_function(message, free_filename, header_name))
        print(f"Generated: {free_path}")
        file_count += 1
    
    print(f"Total files generated: {file_count + 1} ({file_count} .c files + 1 .h file)")
    print(f"HEADER_FILE={header_name}")

if __name__ == "__main__":
    main()
