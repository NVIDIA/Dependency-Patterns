# SPDX-FileCopyrightText: Copyright (c) 2025 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
# SPDX-License-Identifier: MIT

CC = gcc
CPP = gcc -E
CFLAGS = -Wall -Wextra -fPIC -O2
CPPFLAGS = -I.
LDFLAGS = -shared

TARGET = libstrutils.so
SOURCES = strutils.c
PREPROCESSED = $(SOURCES:.c=.i)
OBJECTS = $(SOURCES:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(LDFLAGS) -o $@ $^

strutils.o: strutils.i
	$(CC) $(CFLAGS) -c $< -o $@

strutils.i: strutils.c strutils.h
	$(CPP) $(CPPFLAGS) $< -o $@

clean:
	rm -f $(PREPROCESSED) $(OBJECTS) $(TARGET)

.PHONY: all clean
