# SPDX-FileCopyrightText: Copyright (c) 2025 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
# SPDX-License-Identifier: MIT

CC = gcc
CPP = gcc -E
CFLAGS = -Wall -Wextra -fPIC -O2
CPPFLAGS = -I.
LDFLAGS = -shared

TARGET = libutils.so
SOURCES = memory.c validation.c
PREPROCESSED = $(SOURCES:.c=.i)
OBJECTS = $(SOURCES:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(LDFLAGS) -o $@ $^

memory.o: memory.i
	$(CC) $(CFLAGS) -c $< -o $@

validation.o: validation.i
	$(CC) $(CFLAGS) -c $< -o $@

memory.i: memory.c utils.h
	$(CPP) $(CPPFLAGS) $< -o $@

validation.i: validation.c utils.h
	$(CPP) $(CPPFLAGS) $< -o $@

clean:
	rm -f $(PREPROCESSED) $(OBJECTS) $(TARGET)

.PHONY: all clean
