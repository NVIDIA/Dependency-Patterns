/*
 * SPDX-FileCopyrightText: Copyright (c) 2025 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
 * SPDX-License-Identifier: MIT
 */

#ifndef STRING_H
#define STRING_H

#include <stddef.h>

// String length and comparison
size_t str_length(const char* str);
int str_compare(const char* str1, const char* str2);
int str_compare_nocase(const char* str1, const char* str2);

// String manipulation
char* str_copy(char* dest, const char* src);
char* str_concat(char* dest, const char* src);
char* str_reverse(char* str);

// String search and replace
char* str_find(const char* haystack, const char* needle);
int str_replace(char* str, char old_char, char new_char);
int str_count(const char* str, char ch);

// String validation
int str_is_empty(const char* str);
int str_is_numeric(const char* str);
int str_is_alpha(const char* str);

// Memory management
char* str_duplicate(const char* str);
void str_free(char* str);

#endif // STRING_H
