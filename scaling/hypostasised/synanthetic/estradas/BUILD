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
        "hypostasised/cipollino/crandallite:output",
        "hypostasised/gibbals/phenetidine:output",
        "hypostasised/endospermous/bikinis:output",
        "bakongo/keratomata/teaseller/keratomata:output",
        "bakongo/jower/vincas/ethnicist:output",
        "bakongo/did/whipmaking/colchicin:output",
        "bakongo/upglide/endospermous/ultrafeudal:output",
        "bakongo/decumanus/binnings/decumanus:output",
        "bakongo/did/pneumas/southwood:output",
        "bakongo/did/santalum/billiton:output",
        "bakongo/did/syndeton/kittled:output",
        "bakongo/did/dustpans/unelegant:output",
        "bakongo/edgings/sadella/edgings:output",
        "bakongo/heptene/endospermous/disjasket:output",
        "bakongo/did/surprise/whitfinch:output",
        "hypostasised/darkskin/tragopogon:output",
        "bakongo/semivital/germal/disported:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"hypostasised_synanthetic_estradas_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["hypostasised_synanthetic_estradas_{chroot}/common_scripts/run_build.sh", "{chroot}", "hypostasised_synanthetic_estradas_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
