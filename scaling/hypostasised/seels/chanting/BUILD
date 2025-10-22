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
        "bakongo/waywode/unqueened/verbifies:output",
        "bakongo/heptene/endospermous/dyable:output",
        "hypostasised/endospermous/bikinis:output",
        "hypostasised/bicolorous/incitive:output",
        "bakongo/stylosporous/remeeting/chickories/emporiums:output",
        "bakongo/stylosporous/remeeting/audrey/gunarchy:output",
        "bakongo/diamantine/ofori/endospermous/lapeyrouse:output",
        "bakongo/did/whipmaking/colchicin:output",
        "bakongo/did/pneumas/southwood:output",
        "bakongo/did/santalum/billiton:output",
        "bakongo/did/syndeton/kittled:output",
        "bakongo/diamantine/ofori/endospermous/presumer:output",
        "bakongo/did/surprise/whitfinch:output",
        "bakongo/preconsuming/vincas/chalky:output",
        "bakongo/diamantine/ofori/endospermous/deutschland:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"hypostasised_seels_chanting_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["hypostasised_seels_chanting_{chroot}/common_scripts/run_build.sh", "{chroot}", "hypostasised_seels_chanting_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
