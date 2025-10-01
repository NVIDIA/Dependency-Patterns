# SPDX-FileCopyrightText: Copyright (c) 2025 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
# SPDX-License-Identifier: MIT

CC = gcc
CPP = gcc -E
CFLAGS = -Wall -Wextra -fPIC -O2
CPPFLAGS = -I.
LDFLAGS = -shared

TARGET = libio.so
GENERATION_SCRIPT = generate_io.py
IO_IMPL_DIR = io_impl

# Generate sources first, then get the list
SEED = $(shell cat SEED)
GENERATED_SOURCES = $(shell python3 $(GENERATION_SCRIPT) $(SEED) >/dev/null 2>&1; echo $(IO_IMPL_DIR)/io_impl_*.c)
PREPROCESSED = $(GENERATED_SOURCES:.c=.i)
OBJECTS = $(GENERATED_SOURCES:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(LDFLAGS) -o $@ $^

$(IO_IMPL_DIR)/%.o: $(IO_IMPL_DIR)/%.i
	$(CC) $(CFLAGS) -c $< -o $@

$(IO_IMPL_DIR)/%.i: $(IO_IMPL_DIR)/%.c io.h
	$(CPP) $(CPPFLAGS) $< -o $@

$(IO_IMPL_DIR)/io_impl_%.c: $(GENERATION_SCRIPT) SEED
	python3 $(GENERATION_SCRIPT) $(SEED)

clean:
	rm -rf $(IO_IMPL_DIR) $(PREPROCESSED) $(OBJECTS) $(TARGET)

.PHONY: all clean
