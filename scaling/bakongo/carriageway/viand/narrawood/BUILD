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
        "bakongo/lobstering/knotholes/overdrive:output",
        "bakongo/carriageway/reitman/crocodiline:output",
        "bakongo/carriageway/hydros/horseleach:output",
        "bakongo/carriageway/ermanno/adamically:output",
        "bakongo/lobstering/mesitylene/floaters:output",
        "bakongo/did/whipmaking/colchicin:output",
        "bakongo/upglide/endospermous/ultrafeudal:output",
        "bakongo/lobstering/interportal/profusive:output",
        "bakongo/monofilm/reitman/ballot:output",
        "bakongo/carriageway/lysolecithin/lazyish:output",
        "bakongo/did/pneumas/southwood:output",
        "bakongo/did/santalum/billiton:output",
        "bakongo/heptene/endospermous/compressible:output",
        "bakongo/companionage/emparadise/meatball:output",
        "bakongo/did/syndeton/kittled:output",
        "bakongo/did/dustpans/unelegant:output",
        "bakongo/heptene/endospermous/disjasket:output",
        "bakongo/did/surprise/whitfinch:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"bakongo_carriageway_viand_narrawood_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["bakongo_carriageway_viand_narrawood_{chroot}/common_scripts/run_build.sh", "{chroot}", "bakongo_carriageway_viand_narrawood_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
