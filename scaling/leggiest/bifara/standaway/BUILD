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
        "leggiest/vincas/acetify:output",
        "leggiest/blustery/anew:output",
        "leggiest/megalonyx/environments:output",
        "leggiest/endospermous/infectress:output",
        "leggiest/romipetal/admaxillary:output",
        "leggiest/reitman/airiness:output",
        "leggiest/criminating/agatine:output",
        "leggiest/reitman/airiness:output",
        "leggiest/reitman/airiness:output",
        "leggiest/sparrowbill/crosshauling:output",
        "leggiest/reitman/airiness:output",
        "leggiest/reitman/airiness:output",
        "leggiest/disembark/acroliths:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
        "leggiest_bifara_standaway_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["leggiest_bifara_standaway_{chroot}/common_scripts/run_build.sh", "{chroot}", "leggiest_bifara_standaway_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
