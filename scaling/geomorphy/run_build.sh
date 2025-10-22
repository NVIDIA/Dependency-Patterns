#!/bin/bash
# SPDX-FileCopyrightText: Copyright (c) 2025 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
# SPDX-License-Identifier: MIT

# Common build script for pants_scaling BUILD files
# Concatenates all input files, computes md5sum, and outputs the hash

# Get the chroot directory (first argument)
chroot="$1"

# Get the output file (last argument)
output_file="${!#}"

# Find the files in the chroot directory
files=$(find "$chroot" -type f)

# Concatenate all input files, compute md5sum, extract hash, and write to output
cat * $files | md5sum | cut -d' ' -f1 > "$output_file"

