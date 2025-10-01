#!/usr/bin/env python3
# SPDX-FileCopyrightText: Copyright (c) 2025 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
# SPDX-License-Identifier: MIT

import hashlib
import sys
import os

def md5sum(text):
    return hashlib.md5(str(text).encode()).hexdigest()

def create_io_impl_dir():
    if not os.path.exists('io_impl'):
        os.makedirs('io_impl')

def generate_file_ops(filename):
    return '''#include "io.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

int file_exists(const char* filename) {
    if (!filename) return 0;
    struct stat st;
    return stat(filename, &st) == 0;
}

long file_size(const char* filename) {
    if (!filename) return -1;
    struct stat st;
    if (stat(filename, &st) == 0) {
        return st.st_size;
    }
    return -1;
}

int file_copy(const char* src, const char* dest) {
    if (!src || !dest) return 0;
    
    FILE* src_file = fopen(src, "rb");
    if (!src_file) return 0;
    
    FILE* dest_file = fopen(dest, "wb");
    if (!dest_file) {
        fclose(src_file);
        return 0;
    }
    
    int c;
    while ((c = fgetc(src_file)) != EOF) {
        fputc(c, dest_file);
    }
    
    fclose(src_file);
    fclose(dest_file);
    return 1;
}

int file_delete(const char* filename) {
    if (!filename) return 0;
    return remove(filename) == 0;
}
'''

def generate_text_ops(filename):
    return '''#include "io.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int file_read_text(const char* filename, char* buffer, size_t buffer_size) {
    if (!filename || !buffer || buffer_size == 0) return 0;
    
    FILE* file = fopen(filename, "r");
    if (!file) return 0;
    
    size_t bytes_read = fread(buffer, 1, buffer_size - 1, file);
    buffer[bytes_read] = '\\0';
    
    fclose(file);
    return bytes_read > 0;
}

int file_write_text(const char* filename, const char* content) {
    if (!filename || !content) return 0;
    
    FILE* file = fopen(filename, "w");
    if (!file) return 0;
    
    int result = fputs(content, file) != EOF;
    fclose(file);
    return result;
}

int file_append_text(const char* filename, const char* content) {
    if (!filename || !content) return 0;
    
    FILE* file = fopen(filename, "a");
    if (!file) return 0;
    
    int result = fputs(content, file) != EOF;
    fclose(file);
    return result;
}
'''

def generate_binary_ops(filename):
    return '''#include "io.h"
#include <stdio.h>
#include <stdlib.h>

int file_read_binary(const char* filename, void* buffer, size_t size) {
    if (!filename || !buffer || size == 0) return 0;
    
    FILE* file = fopen(filename, "rb");
    if (!file) return 0;
    
    size_t bytes_read = fread(buffer, 1, size, file);
    fclose(file);
    return bytes_read == size;
}

int file_write_binary(const char* filename, const void* data, size_t size) {
    if (!filename || !data || size == 0) return 0;
    
    FILE* file = fopen(filename, "wb");
    if (!file) return 0;
    
    size_t bytes_written = fwrite(data, 1, size, file);
    fclose(file);
    return bytes_written == size;
}
'''

def generate_dir_ops(filename):
    return '''#include "io.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>
#include <dirent.h>

int create_directory(const char* dirname) {
    if (!dirname) return 0;
    return mkdir(dirname, 0755) == 0;
}

int remove_directory(const char* dirname) {
    if (!dirname) return 0;
    return rmdir(dirname) == 0;
}

int list_directory(const char* dirname) {
    if (!dirname) return 0;
    
    DIR* dir = opendir(dirname);
    if (!dir) return 0;
    
    struct dirent* entry;
    int count = 0;
    while ((entry = readdir(dir)) != NULL) {
        if (strcmp(entry->d_name, ".") != 0 && strcmp(entry->d_name, "..") != 0) {
            printf("%s\\n", entry->d_name);
            count++;
        }
    }
    
    closedir(dir);
    return count;
}
'''

def generate_console_ops(filename):
    return '''#include "io.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_line(const char* text) {
    if (text) {
        printf("%s\\n", text);
    }
}

void print_number(int number) {
    printf("%d\\n", number);
}

void print_float(double number) {
    printf("%.2f\\n", number);
}

int read_line(char* buffer, size_t buffer_size) {
    if (!buffer || buffer_size == 0) return 0;
    
    if (fgets(buffer, buffer_size, stdin)) {
        // Remove newline if present
        size_t len = strlen(buffer);
        if (len > 0 && buffer[len - 1] == '\\n') {
            buffer[len - 1] = '\\0';
        }
        return 1;
    }
    return 0;
}

int read_number(void) {
    int number;
    if (scanf("%d", &number) == 1) {
        return number;
    }
    return 0;
}
'''

def main():
    if len(sys.argv) != 2:
        print("Usage: python3 generate_io.py <integer>")
        sys.exit(1)
    
    try:
        integer_arg = int(sys.argv[1])
    except ValueError:
        print("Error: Argument must be an integer")
        sys.exit(1)
    
    # Generate MD5 hash
    md5_hash = md5sum(integer_arg)
    print(f"MD5 hash of {integer_arg}: {md5_hash}")
    
    # Create io_impl directory
    create_io_impl_dir()
    
    # Generate files based on first 5 characters of MD5
    generators = [
        (f"io_impl_{md5_hash[0]}.c", generate_file_ops),
        (f"io_impl_{md5_hash[1]}.c", generate_text_ops),
        (f"io_impl_{md5_hash[2]}.c", generate_binary_ops),
        (f"io_impl_{md5_hash[3]}.c", generate_dir_ops),
        (f"io_impl_{md5_hash[4]}.c", generate_console_ops)
    ]
    
    # Ensure unique filenames by adding index if needed
    used_names = set()
    unique_generators = []
    for i, (filename, generator) in enumerate(generators):
        original_name = filename
        counter = 0
        while filename in used_names:
            counter += 1
            base_name = original_name.replace('.c', '')
            filename = f"{base_name}_{counter}.c"
        used_names.add(filename)
        unique_generators.append((filename, generator))
    
    for filename, generator in unique_generators:
        filepath = os.path.join('io_impl', filename)
        with open(filepath, 'w') as f:
            f.write(generator(filename))
        print(f"Generated: {filepath}")

if __name__ == "__main__":
    main()
