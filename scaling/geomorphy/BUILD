# SPDX-FileCopyrightText: Copyright (c) 2025 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
# SPDX-License-Identifier: MIT

shell_sources(
    name="run_build_script",
    sources=[
        "run_build.sh",
    ],
)

system_binary(
    name="bash",
    binary_name="bash",
)
system_binary(
    name="cat",
    binary_name="cat",
)
system_binary(
    name="md5sum",
    binary_name="md5sum",
)
system_binary(
    name="cut",
    binary_name="cut",
    fingerprint_args=["-f", "1", "/dev/null",],
    fingerprint="",
)

