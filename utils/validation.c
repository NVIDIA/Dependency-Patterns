/*
 * SPDX-FileCopyrightText: Copyright (c) 2025 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
 * SPDX-License-Identifier: MIT
 */

#include "utils.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Validation utilities
int is_valid_email(const char* email) {
    if (!email) return 0;
    
    // Simple email validation
    const char* at = strchr(email, '@');
    if (!at || at == email) return 0;
    
    const char* dot = strrchr(at, '.');
    if (!dot || dot == at + 1 || dot == email + strlen(email) - 1) return 0;
    
    return 1;
}

int is_valid_phone(const char* phone) {
    if (!phone) return 0;
    
    // Simple phone validation (digits, spaces, dashes, parentheses)
    for (const char* p = phone; *p; p++) {
        if (!isdigit(*p) && *p != ' ' && *p != '-' && *p != '(' && *p != ')') {
            return 0;
        }
    }
    return 1;
}

int is_valid_ip(const char* ip) {
    if (!ip) return 0;
    
    // Simple IP validation
    int dots = 0;
    int digits = 0;
    
    for (const char* p = ip; *p; p++) {
        if (*p == '.') {
            if (digits == 0) return 0;
            dots++;
            digits = 0;
        } else if (isdigit(*p)) {
            digits++;
            if (digits > 3) return 0;
        } else {
            return 0;
        }
    }
    
    return dots == 3 && digits > 0;
}

int is_valid_url(const char* url) {
    if (!url) return 0;
    
    // Simple URL validation
    return strncmp(url, "http://", 7) == 0 || strncmp(url, "https://", 8) == 0;
}

// Conversion utilities
int string_to_int(const char* str) {
    if (!str) return 0;
    return atoi(str);
}

double string_to_double(const char* str) {
    if (!str) return 0.0;
    return atof(str);
}

char* int_to_string(int value) {
    char* str = safe_malloc(32);
    snprintf(str, 32, "%d", value);
    return str;
}

char* double_to_string(double value) {
    char* str = safe_malloc(64);
    snprintf(str, 64, "%.2f", value);
    return str;
}
