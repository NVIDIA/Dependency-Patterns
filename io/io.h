/*
 * SPDX-FileCopyrightText: Copyright (c) 2025 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
 * SPDX-License-Identifier: MIT
 */

#ifndef IO_H
#define IO_H

#include <stdio.h>

// File operations
int file_exists(const char* filename);
long file_size(const char* filename);
int file_copy(const char* src, const char* dest);
int file_delete(const char* filename);

// Text file operations
int file_read_text(const char* filename, char* buffer, size_t buffer_size);
int file_write_text(const char* filename, const char* content);
int file_append_text(const char* filename, const char* content);

// Binary file operations
int file_read_binary(const char* filename, void* buffer, size_t size);
int file_write_binary(const char* filename, const void* data, size_t size);

// Directory operations
int create_directory(const char* dirname);
int remove_directory(const char* dirname);
int list_directory(const char* dirname);

// Console I/O
void print_line(const char* text);
void print_number(int number);
void print_float(double number);
int read_line(char* buffer, size_t buffer_size);
int read_number(void);

#endif // IO_H
