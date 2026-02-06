# SPDX-FileCopyrightText: Copyright (c) 2025 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
# SPDX-License-Identifier: MIT

CC = gcc
CPP = gcc -E
CFLAGS = -Wall -Wextra -fPIC -O2
CPPFLAGS = -I.
LDFLAGS = -shared

TARGET = libprotocol.so
GENERATION_SCRIPT = generate_protocol.py
PROTO_IMPL_DIR = proto_impl
SPEC_FILE = protocol.spec

# Generate sources first, then get the list
SEED = $(shell cat SEED)
GENERATED_HEADER = $(shell python3 $(GENERATION_SCRIPT) $(SEED) 2>&1 | grep 'HEADER_FILE=' | cut -d'=' -f2)
GENERATED_SOURCES = $(shell python3 $(GENERATION_SCRIPT) $(SEED) >/dev/null 2>&1; echo $(PROTO_IMPL_DIR)/proto_*.c)
PREPROCESSED = $(GENERATED_SOURCES:.c=.i)
OBJECTS = $(GENERATED_SOURCES:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(LDFLAGS) -o $@ $^

$(PROTO_IMPL_DIR)/%.o: $(PROTO_IMPL_DIR)/%.i
	$(CC) $(CFLAGS) -c $< -o $@

$(PROTO_IMPL_DIR)/%.i: $(PROTO_IMPL_DIR)/%.c $(GENERATED_HEADER)
	$(CPP) $(CPPFLAGS) $< -o $@

$(PROTO_IMPL_DIR)/proto_%.c: $(GENERATION_SCRIPT) $(SPEC_FILE) SEED
	python3 $(GENERATION_SCRIPT) $(SEED)

$(GENERATED_HEADER): $(GENERATION_SCRIPT) $(SPEC_FILE) SEED
	python3 $(GENERATION_SCRIPT) $(SEED)

clean:
	rm -rf $(PROTO_IMPL_DIR) $(PREPROCESSED) $(OBJECTS) $(TARGET) protocol_*.h

.PHONY: all clean

