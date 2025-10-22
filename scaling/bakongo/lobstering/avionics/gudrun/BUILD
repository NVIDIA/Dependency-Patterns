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
        "bakongo/lobstering/centiplume/exosmic:output",
        "bakongo/lobstering/toters/paganist:output",
        "bakongo/lobstering/hagride/scandium:output",
        "bakongo/lobstering/stucking/libitina:output",
        "bakongo/did/whipmaking/colchicin:output",
        "bakongo/upglide/endospermous/ultrafeudal:output",
        "bakongo/monofilm/reitman/ballot:output",
        "bakongo/lobstering/ferde/pulvillus:output",
        "bakongo/did/pneumas/southwood:output",
        "bakongo/did/santalum/billiton:output",
        "bakongo/did/syndeton/kittled:output",
        "bakongo/did/dustpans/unelegant:output",
        "bakongo/lobstering/unspiteful/psiloriti:output",
        "bakongo/heptene/endospermous/disjasket:output",
        "bakongo/lobstering/sphyraenidae/caract:output",
        "bakongo/did/surprise/whitfinch:output",
        "bakongo/lobstering/faradise/fumarine:output",
        "bakongo/lobstering/sdis/knapp:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"bakongo_lobstering_avionics_gudrun_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["bakongo_lobstering_avionics_gudrun_{chroot}/common_scripts/run_build.sh", "{chroot}", "bakongo_lobstering_avionics_gudrun_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
