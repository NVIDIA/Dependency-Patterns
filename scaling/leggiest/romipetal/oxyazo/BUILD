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
        "leggiest/endospermous/amagasaki:output",
        "leggiest/reitman/airiness:output",
        "leggiest/endospermous/infectress:output",
        "leggiest/endospermous/paramilitary:output",
        "leggiest/endospermous/moong:output",
        "leggiest/reitman/airiness:output",
        "leggiest/vincas/acetify:output",
        "leggiest/endospermous/alisanders:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
        "leggiest_romipetal_oxyazo_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["leggiest_romipetal_oxyazo_{chroot}/common_scripts/run_build.sh", "{chroot}", "leggiest_romipetal_oxyazo_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
