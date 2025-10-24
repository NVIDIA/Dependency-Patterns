# SPDX-FileCopyrightText: Copyright (c) 2025 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
# SPDX-License-Identifier: MIT

files(
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
        "worthington/sleided/kingsley/maestra/fideos:output",
        "worthington/backpacked/surprise/torsibility:output",
        "worthington/smoh/endospermous/multiplicate:output",
        "gpss/endospermous/obtruder:output",
        "worthington/covers/reitman/covers:output",
        "worthington/covering/endospermous/yaksha:output",
        "gpss/dwain/euergetes:output",
        "worthington/bermudite/criminating/reacting:output",
        "worthington/covering/endospermous/pensileness:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"gpss_belive_cowrote_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["gpss_belive_cowrote_{chroot}/common_scripts/run_build.sh", "{chroot}", "gpss_belive_cowrote_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
