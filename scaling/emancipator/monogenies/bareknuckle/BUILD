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
        "bakongo/excudate/criminating/intagliation:output",
        "bakongo/bjork/triturature/judgments:output",
        "bakongo/underpitch/reitman/underpitch:output",
        "bakongo/did/whipmaking/colchicin:output",
        "bakongo/did/pneumas/southwood:output",
        "bakongo/did/santalum/billiton:output",
        "bakongo/heptene/endospermous/compressible:output",
        "bakongo/companionage/emparadise/meatball:output",
        "bakongo/did/syndeton/kittled:output",
        "bakongo/upglide/endospermous/tarred:output",
        "bakongo/alberton/recountless/alberton:output",
        "bakongo/did/surprise/whitfinch:output",
        "bakongo/heptene/endospermous/disjasket:output",
        "emancipator/endospermous/tobaccoless:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"emancipator_monogenies_bareknuckle_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["emancipator_monogenies_bareknuckle_{chroot}/common_scripts/run_build.sh", "{chroot}", "emancipator_monogenies_bareknuckle_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
