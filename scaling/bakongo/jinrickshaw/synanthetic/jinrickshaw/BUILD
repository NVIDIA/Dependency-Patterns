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
        "bakongo/javel/triturature/zoophily:output",
        "bakongo/oiw/burgers/abyssinian:output",
        "bakongo/did/whipmaking/colchicin:output",
        "bakongo/unequivalent/endospermous/unworthily:output",
        "bakongo/monofilm/reitman/ballot:output",
        "bakongo/did/santalum/billiton:output",
        "bakongo/did/pneumas/southwood:output",
        "bakongo/libidinist/criminating/brownstones:output",
        "bakongo/did/syndeton/kittled:output",
        "bakongo/did/dustpans/unelegant:output",
        "bakongo/heptene/endospermous/disjasket:output",
        "bakongo/did/surprise/whitfinch:output",
        "bakongo/poetito/reitman/poetito:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"bakongo_jinrickshaw_synanthetic_jinrickshaw_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["bakongo_jinrickshaw_synanthetic_jinrickshaw_{chroot}/common_scripts/run_build.sh", "{chroot}", "bakongo_jinrickshaw_synanthetic_jinrickshaw_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
