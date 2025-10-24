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
        "leggiest/desaturation/aeolodion:output",
        "leggiest/subcuneus/milldale:output",
        "leggiest/spruiker/fhlmc:output",
        "leggiest/criminating/agatine:output",
        "leggiest/wots/melampyrum:output",
        "leggiest/posted/gras:output",
        "leggiest/substantize/bioscopic:output",
        "leggiest/fumulus/downheaded:output",
        "leggiest/strychnos/withdrawn:output",
        "leggiest/flavian/coaguline:output",
        "leggiest/chimacum/bioacoustics:output",
        "leggiest/hereditably/dayless:output",
        "leggiest/endospermous/shred:output",
        "leggiest/reitman/airiness:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
        "leggiest_brainteaser_inert_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["leggiest_brainteaser_inert_{chroot}/common_scripts/run_build.sh", "{chroot}", "leggiest_brainteaser_inert_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
