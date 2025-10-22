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
        "mesatipelvic/curiosa/fisherpeople:output",
        "mesatipelvic/endospermous/candlesticks:output",
        "mesatipelvic/romipetal/achinesses:output",
        "mesatipelvic/endospermous/neossoptile:output",
        "mesatipelvic/reitman/airville:output",
        "mesatipelvic/criminating/aerobatic:output",
        "mesatipelvic/endospermous/smalcaldic:output",
        "mesatipelvic/reitman/airville:output",
        "mesatipelvic/endospermous/nonsexually:output",
        "mesatipelvic/reitman/airville:output",
        "mesatipelvic/heliconist/epitheloid:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
        "mesatipelvic_diller_fluorescer_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["mesatipelvic_diller_fluorescer_{chroot}/common_scripts/run_build.sh", "{chroot}", "mesatipelvic_diller_fluorescer_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
