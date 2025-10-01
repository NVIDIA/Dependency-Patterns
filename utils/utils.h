/*
 * SPDX-FileCopyrightText: Copyright (c) 2025 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
 * SPDX-License-Identifier: MIT
 */

#ifndef UTILS_H
#define UTILS_H

#include <stddef.h>

// Memory utilities
void* safe_malloc(size_t size);
void* safe_calloc(size_t num, size_t size);
void* safe_realloc(void* ptr, size_t size);
void safe_free(void* ptr);

// Array utilities
void array_fill(int* arr, size_t size, int value);
void array_reverse(int* arr, size_t size);
int array_find(int* arr, size_t size, int value);
void array_sort(int* arr, size_t size);
void array_print(int* arr, size_t size);

// Time utilities
void get_current_time(char* buffer, size_t buffer_size);
void sleep_seconds(int seconds);
long get_timestamp(void);

// Random utilities
void random_seed(unsigned int seed);
int random_int(int min, int max);
double random_double(double min, double max);
void random_string(char* buffer, size_t length);

// Validation utilities
int is_valid_email(const char* email);
int is_valid_phone(const char* phone);
int is_valid_ip(const char* ip);
int is_valid_url(const char* url);

// Conversion utilities
int string_to_int(const char* str);
double string_to_double(const char* str);
char* int_to_string(int value);
char* double_to_string(double value);

#endif // UTILS_H
