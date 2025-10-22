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
        "bakongo/lobstering/knotholes/overdrive:output",
        "bakongo/stylosporous/bassing/cherri/kingfield:output",
        "bakongo/lobstering/chugalugged/paedonymic:output",
        "hypostasised/bicolorous/incitive:output",
        "bakongo/stylosporous/bassing/trapa/substore:output",
        "bakongo/lobstering/mesitylene/floaters:output",
        "bakongo/did/whipmaking/colchicin:output",
        "bakongo/lobstering/interportal/profusive:output",
        "bakongo/did/pneumas/southwood:output",
        "bakongo/did/santalum/billiton:output",
        "bakongo/did/syndeton/kittled:output",
        "hypostasised/bicolorous/incitive:output",
        "bakongo/did/surprise/whitfinch:output",
        "bakongo/lobstering/gelidities/chorous:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"hypostasised_bicolorous_unrepair_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["hypostasised_bicolorous_unrepair_{chroot}/common_scripts/run_build.sh", "{chroot}", "hypostasised_bicolorous_unrepair_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
