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
        "bakongo/heptene/endospermous/dyable:output",
        "bakongo/enyalius/gowrie/restacked:output",
        "hypostasised/endospermous/bikinis:output",
        "bakongo/did/whipmaking/colchicin:output",
        "hypostasised/niland/merv:output",
        "bakongo/upglide/endospermous/ultrafeudal:output",
        "bakongo/enyalius/redlining/descendible:output",
        "bakongo/did/santalum/billiton:output",
        "bakongo/did/pneumas/southwood:output",
        "bakongo/heptene/endospermous/compressible:output",
        "bakongo/companionage/emparadise/meatball:output",
        "bakongo/did/syndeton/kittled:output",
        "bakongo/enyalius/stereognosis/campbelltown:output",
        "bakongo/alberton/recountless/alberton:output",
        "bakongo/enyalius/mashgihim/rindless:output",
        "bakongo/did/surprise/whitfinch:output",
        "bakongo/heptene/endospermous/disjasket:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"hypostasised_atheists_trautman_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["hypostasised_atheists_trautman_{chroot}/common_scripts/run_build.sh", "{chroot}", "hypostasised_atheists_trautman_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
