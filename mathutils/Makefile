# SPDX-FileCopyrightText: Copyright (c) 2025 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
# SPDX-License-Identifier: MIT

CC = gcc
CPP = gcc -E
CFLAGS = -Wall -Wextra -fPIC -O2
CPPFLAGS = -I.
LDFLAGS = -shared

TARGET = libmathutils.so
SOURCES = mathutils.c
HEADERS = mathutils.h
PREPROCESSED = $(SOURCES:.c=.i)
OBJECTS = $(SOURCES:.c=.o)

all: $(TARGET)

$(SOURCES): gen_mathutils_c.pl
	./gen_mathutils_c.pl

$(HEADERS): gen_mathutils_h.pl
	./gen_mathutils_h.pl

$(TARGET): $(OBJECTS)
	$(CC) $(LDFLAGS) -o $@ $(OBJECTS)

mathutils.o: mathutils.i
	$(CC) $(CFLAGS) -c $< -o $@

mathutils.i: mathutils.c $(HEADERS)
	$(CPP) $(CPPFLAGS) $< -o $@

clean:
	rm -f $(PREPROCESSED) $(OBJECTS) $(TARGET) $(SOURCES) $(HEADERS)

.PHONY: all clean
