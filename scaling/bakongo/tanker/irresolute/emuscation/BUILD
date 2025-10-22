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
        "bakongo/heptene/endospermous/compressible:output",
        "bakongo/heptene/endospermous/dyable:output",
        "bakongo/tanker/vincas/klatch:output",
        "bakongo/did/whipmaking/colchicin:output",
        "bakongo/upglide/endospermous/ultrafeudal:output",
        "bakongo/unequivalent/endospermous/unworthily:output",
        "bakongo/tanker/reitman/mandarinic:output",
        "bakongo/inchase/criminating/britte:output",
        "bakongo/did/pneumas/southwood:output",
        "bakongo/did/santalum/billiton:output",
        "bakongo/companionage/emparadise/meatball:output",
        "bakongo/heptene/endospermous/compressible:output",
        "bakongo/did/syndeton/kittled:output",
        "bakongo/alberton/recountless/alberton:output",
        "bakongo/did/surprise/whitfinch:output",
        "bakongo/heptene/endospermous/disjasket:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"bakongo_tanker_irresolute_emuscation_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["bakongo_tanker_irresolute_emuscation_{chroot}/common_scripts/run_build.sh", "{chroot}", "bakongo_tanker_irresolute_emuscation_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
