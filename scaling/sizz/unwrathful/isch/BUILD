# SPDX-FileCopyrightText: Copyright (c) 2025 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
# SPDX-License-Identifier: MIT

shell_sources(
    name="output_sources",
    sources=[
        "test.txt",
        "random_seed_01.txt",
        "random_seed_02.txt",
        "random_seed_03.txt",
        "random_seed_04.txt",
        "random_seed_05.txt",
        "random_seed_06.txt",
        "random_seed_07.txt",
        "random_seed_08.txt",
        "random_seed_09.txt",
        "random_seed_10.txt",
        "random_seed_11.txt",
    ],
)

adhoc_tool(
    name="output",
    execution_dependencies=[
":output_sources",
        "sizz/monomethyl/uncramp:output",
        "worthington/backpacked/surprise/torsibility:output",
        "sizz/armlessly/excellence:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"sizz_unwrathful_isch_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["sizz_unwrathful_isch_{chroot}/common_scripts/run_build.sh", "{chroot}", "sizz_unwrathful_isch_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
