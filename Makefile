# SPDX-FileCopyrightText: Copyright (c) 2025 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
# SPDX-License-Identifier: MIT

CC = gcc
CPP = gcc -E
CFLAGS = -Wall -Wextra -O2 -I.
CPPFLAGS = -I.

# Module directories
MODULES = mathutils strutils io utils

# Shared libraries
LIBS = $(MODULES:%=lib%.so)

# Main executable
TARGET = demo
MAIN_SOURCE = main.c
MAIN_PREPROCESSED = $(MAIN_SOURCE:.c=.i)
MAIN_OBJECT = $(MAIN_SOURCE:.c=.o)

# Default target
all: $(MODULES) $(TARGET)

# Build shared libraries
$(MODULES):
	@echo "Building $@..."
	@$(MAKE) -C $@
	@cp $@/lib$@.so .

# Build main executable
$(TARGET): $(MAIN_OBJECT)
	@echo "Building main executable..."
	$(CC) $(CFLAGS) -o $@ $< $(MODULES:%=-l%) -L.

# Compile main.i to object file
$(MAIN_OBJECT): $(MAIN_PREPROCESSED)
	$(CC) $(CFLAGS) -c $< -o $@

# Preprocess main.c
$(MAIN_PREPROCESSED): $(MAIN_SOURCE) $(MODULES)
	$(CPP) $(CPPFLAGS) $< -o $@

# Clean all modules and main executable
clean:
	@echo "Cleaning all modules..."
	@for module in $(MODULES); do \
		$(MAKE) -C $$module clean; \
	done
	@echo "Cleaning main executable..."
	@rm -f $(TARGET) $(LIBS) $(MAIN_PREPROCESSED) $(MAIN_OBJECT)

# Clean and rebuild everything
rebuild: clean all

# Run the demo
run: $(TARGET)
	@echo "Running demo..."
	@./$(TARGET)

# Show help
help:
	@echo "Available targets:"
	@echo "  all      - Build all modules and main executable (default)"
	@echo "  clean    - Clean all build artifacts"
	@echo "  rebuild  - Clean and rebuild everything"
	@echo "  run      - Build and run the demo"
	@echo "  help     - Show this help message"

.PHONY: all clean rebuild run help $(MODULES)
# DO NOT DELETE
