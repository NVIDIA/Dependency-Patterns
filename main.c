/*
 * SPDX-FileCopyrightText: Copyright (c) 2025 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
 * SPDX-License-Identifier: MIT
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Include headers from all modules
#include "mathutils/mathutils.h"
#include "strutils/strutils.h"
#include "io/io.h"
#include "utils/utils.h"

int main(void) {
    printf("=== C Demo Project ===\n\n");
    
    // Math module demonstration
    printf("--- Math Module ---\n");
    int a = 15, b = 25;
    printf("add(%d, %d) = %d\n", a, b, add(a, b));
    printf("multiply(%d, %d) = %d\n", a, b, multiply(a, b));
    printf("power(%d, 3) = %d\n", a, power(a, 3));
    printf("factorial(5) = %d\n", factorial(5));
    printf("gcd(%d, %d) = %d\n", a, b, gcd(a, b));
    printf("is_prime(17) = %d\n", is_prime(17));
    printf("fibonacci(10) = %d\n", fibonacci(10));
    printf("divide(%.1f, %.1f) = %.2f\n", 15.0, 3.0, divide(15.0, 3.0));
    printf("\n");
    
    // String module demonstration
    printf("--- String Module ---\n");
    char str1[] = "Hello";
    char str2[] = "World";
    char str3[50];
    
    str_copy(str3, str1);
    str_concat(str3, " ");
    str_concat(str3, str2);
    printf("Concatenated: %s\n", str3);
    printf("Length: %zu\n", str_length(str3));
    printf("Compare 'Hello' and 'World': %d\n", str_compare("Hello", "World"));
    
    char rev_str[] = "Hello";
    str_reverse(rev_str);
    printf("Reversed 'Hello': %s\n", rev_str);
    
    printf("Count 'l' in 'Hello': %d\n", str_count("Hello", 'l'));
    printf("Is '12345' numeric: %d\n", str_is_numeric("12345"));
    printf("Is 'Hello' alpha: %d\n", str_is_alpha("Hello"));
    printf("\n");
    
    // IO module demonstration
    printf("--- IO Module ---\n");
    const char* test_file = "test.txt";
    const char* test_content = "This is a test file content.\n";
    
    printf("Writing to file: %s\n", test_file);
    if (file_write_text(test_file, test_content)) {
        printf("File written successfully\n");
        
        char buffer[100];
        if (file_read_text(test_file, buffer, sizeof(buffer))) {
            printf("File content: %s", buffer);
        }
        
        printf("File size: %ld bytes\n", file_size(test_file));
        printf("File exists: %d\n", file_exists(test_file));
        
        // Clean up
        file_delete(test_file);
    }
    
    print_line("This is a test line");
    print_number(42);
    print_float(3.14159);
    printf("\n");
    
    // Utils module demonstration
    printf("--- Utils Module ---\n");
    
    // Array operations
    int arr[5] = {5, 2, 8, 1, 9};
    printf("Original array: ");
    array_print(arr, 5);
    
    array_sort(arr, 5);
    printf("Sorted array: ");
    array_print(arr, 5);
    
    printf("Find 8 in array: %d\n", array_find(arr, 5, 8));
    
    // Time operations
    char time_buffer[64];
    get_current_time(time_buffer, sizeof(time_buffer));
    printf("Current time: %s\n", time_buffer);
    printf("Timestamp: %ld\n", get_timestamp());
    
    // Random operations
    random_seed(42);
    printf("Random int (1-100): %d\n", random_int(1, 100));
    printf("Random double (0-1): %.2f\n", random_double(0.0, 1.0));
    
    char random_str[11];
    random_string(random_str, sizeof(random_str));
    printf("Random string: %s\n", random_str);
    
    // Validation
    printf("Is 'test@example.com' valid email: %d\n", is_valid_email("test@example.com"));
    printf("Is '123-456-7890' valid phone: %d\n", is_valid_phone("123-456-7890"));
    printf("Is '192.168.1.1' valid IP: %d\n", is_valid_ip("192.168.1.1"));
    printf("Is 'https://example.com' valid URL: %d\n", is_valid_url("https://example.com"));
    
    // Conversion
    printf("String '123' to int: %d\n", string_to_int("123"));
    printf("String '3.14' to double: %.2f\n", string_to_double("3.14"));
    
    char* int_str = int_to_string(456);
    printf("Int 456 to string: %s\n", int_str);
    safe_free(int_str);
    
    char* double_str = double_to_string(2.718);
    printf("Double 2.718 to string: %s\n", double_str);
    safe_free(double_str);
    
    printf("\n=== Demo Complete ===\n");
    return 0;
}
