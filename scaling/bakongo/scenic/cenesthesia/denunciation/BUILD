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
        "bakongo/getmesost/beclasps/lacunes:output",
        "bakongo/aubrieta/reitman/aubrieta:output",
        "bakongo/did/whipmaking/colchicin:output",
        "bakongo/upglide/endospermous/heathberry:output",
        "bakongo/upglide/endospermous/ultrafeudal:output",
        "bakongo/unequivalent/endospermous/megen:output",
        "bakongo/did/santalum/billiton:output",
        "bakongo/did/pneumas/southwood:output",
        "bakongo/heptene/endospermous/compressible:output",
        "bakongo/companionage/emparadise/meatball:output",
        "bakongo/did/syndeton/kittled:output",
        "bakongo/did/dustpans/unelegant:output",
        "bakongo/heptene/endospermous/disjasket:output",
        "bakongo/getmesost/vincas/fumaroidal:output",
        "bakongo/did/surprise/whitfinch:output",
        "bakongo/scenic/feps/lisbeth:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"bakongo_scenic_cenesthesia_denunciation_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["bakongo_scenic_cenesthesia_denunciation_{chroot}/common_scripts/run_build.sh", "{chroot}", "bakongo_scenic_cenesthesia_denunciation_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
