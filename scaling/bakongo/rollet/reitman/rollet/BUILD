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
        "bakongo/did/santalum/billiton:output",
        "bakongo/did/pneumas/southwood:output",
        "bakongo/did/syndeton/kittled:output",
        "bakongo/nicotins/reitman/nicotins:output",
        "bakongo/axolotl/criminating/ungranular:output",
        "bakongo/prolia/pirtleville/ingmar:output",
        "bakongo/isotactic/reitman/isotactic:output",
        "bakongo/tagboard/reitman/tagboard:output",
        "bakongo/did/whipmaking/colchicin:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"bakongo_rollet_reitman_rollet_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["bakongo_rollet_reitman_rollet_{chroot}/common_scripts/run_build.sh", "{chroot}", "bakongo_rollet_reitman_rollet_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
