/*
 * SPDX-FileCopyrightText: Copyright (c) 2025 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
 * SPDX-License-Identifier: MIT
 */

#include "string.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

size_t str_length(const char* str) {
    if (!str) return 0;
    size_t len = 0;
    while (str[len] != '\0') len++;
    return len;
}

int str_compare(const char* str1, const char* str2) {
    if (!str1 || !str2) return -1;
    return strcmp(str1, str2);
}

int str_compare_nocase(const char* str1, const char* str2) {
    if (!str1 || !str2) return -1;
    return strcasecmp(str1, str2);
}

char* str_copy(char* dest, const char* src) {
    if (!dest || !src) return NULL;
    return strcpy(dest, src);
}

char* str_concat(char* dest, const char* src) {
    if (!dest || !src) return NULL;
    return strcat(dest, src);
}

char* str_reverse(char* str) {
    if (!str) return NULL;
    
    size_t len = str_length(str);
    for (size_t i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
    return str;
}

char* str_find(const char* haystack, const char* needle) {
    if (!haystack || !needle) return NULL;
    return strstr(haystack, needle);
}

int str_replace(char* str, char old_char, char new_char) {
    if (!str) return 0;
    
    int count = 0;
    for (char* p = str; *p; p++) {
        if (*p == old_char) {
            *p = new_char;
            count++;
        }
    }
    return count;
}

int str_count(const char* str, char ch) {
    if (!str) return 0;
    
    int count = 0;
    for (const char* p = str; *p; p++) {
        if (*p == ch) count++;
    }
    return count;
}

int str_is_empty(const char* str) {
    return !str || str[0] == '\0';
}

int str_is_numeric(const char* str) {
    if (!str || str[0] == '\0') return 0;
    
    for (const char* p = str; *p; p++) {
        if (!isdigit(*p)) return 0;
    }
    return 1;
}

int str_is_alpha(const char* str) {
    if (!str || str[0] == '\0') return 0;
    
    for (const char* p = str; *p; p++) {
        if (!isalpha(*p)) return 0;
    }
    return 1;
}

char* str_duplicate(const char* str) {
    if (!str) return NULL;
    
    size_t len = str_length(str) + 1;
    char* copy = malloc(len);
    if (copy) {
        strcpy(copy, str);
    }
    return copy;
}

void str_free(char* str) {
    if (str) {
        free(str);
    }
}
