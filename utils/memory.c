/*
 * SPDX-FileCopyrightText: Copyright (c) 2025 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
 * SPDX-License-Identifier: MIT
 */

#include "utils.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#include <ctype.h>

// Memory utilities
void* safe_malloc(size_t size) {
    void* ptr = malloc(size);
    if (!ptr) {
        fprintf(stderr, "Error: Memory allocation failed\n");
        exit(1);
    }
    return ptr;
}

void* safe_calloc(size_t num, size_t size) {
    void* ptr = calloc(num, size);
    if (!ptr) {
        fprintf(stderr, "Error: Memory allocation failed\n");
        exit(1);
    }
    return ptr;
}

void* safe_realloc(void* ptr, size_t size) {
    void* new_ptr = realloc(ptr, size);
    if (!new_ptr && size > 0) {
        fprintf(stderr, "Error: Memory reallocation failed\n");
        exit(1);
    }
    return new_ptr;
}

void safe_free(void* ptr) {
    if (ptr) {
        free(ptr);
    }
}

// Array utilities
void array_fill(int* arr, size_t size, int value) {
    if (!arr) return;
    for (size_t i = 0; i < size; i++) {
        arr[i] = value;
    }
}

void array_reverse(int* arr, size_t size) {
    if (!arr || size <= 1) return;
    
    for (size_t i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

int array_find(int* arr, size_t size, int value) {
    if (!arr) return -1;
    
    for (size_t i = 0; i < size; i++) {
        if (arr[i] == value) return (int)i;
    }
    return -1;
}

void array_sort(int* arr, size_t size) {
    if (!arr || size <= 1) return;
    
    // Simple bubble sort
    for (size_t i = 0; i < size - 1; i++) {
        for (size_t j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void array_print(int* arr, size_t size) {
    if (!arr) return;
    
    printf("[");
    for (size_t i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) printf(", ");
    }
    printf("]\n");
}

// Time utilities
void get_current_time(char* buffer, size_t buffer_size) {
    if (!buffer || buffer_size == 0) return;
    
    time_t now = time(NULL);
    struct tm* tm_info = localtime(&now);
    strftime(buffer, buffer_size, "%Y-%m-%d %H:%M:%S", tm_info);
}

void sleep_seconds(int seconds) {
    if (seconds > 0) {
        sleep(seconds);
    }
}

long get_timestamp(void) {
    return time(NULL);
}

// Random utilities
void random_seed(unsigned int seed) {
    srand(seed);
}

int random_int(int min, int max) {
    if (min > max) {
        int temp = min;
        min = max;
        max = temp;
    }
    return min + rand() % (max - min + 1);
}

double random_double(double min, double max) {
    if (min > max) {
        double temp = min;
        min = max;
        max = temp;
    }
    return min + (double)rand() / RAND_MAX * (max - min);
}

void random_string(char* buffer, size_t length) {
    if (!buffer || length == 0) return;
    
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    size_t charset_size = sizeof(charset) - 1;
    
    for (size_t i = 0; i < length - 1; i++) {
        buffer[i] = charset[rand() % charset_size];
    }
    buffer[length - 1] = '\0';
}
