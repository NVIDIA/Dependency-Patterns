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
        "hypostasised/dyschiria/mateships:output",
        "hypostasised/windowshade/steddman:output",
        "bakongo/stylosporous/rakery/unextreme/sporogenous:output",
        "bakongo/entoloma/stp/microliter:output",
        "bakongo/entoloma/lockeford/rerewards:output",
        "bakongo/did/whipmaking/colchicin:output",
        "bakongo/did/santalum/billiton:output",
        "bakongo/did/pneumas/southwood:output",
        "bakongo/did/syndeton/kittled:output",
        "hypostasised/ora/gimmicks:output",
        "hypostasised/unbridles/neckerchiefs:output",
        "bakongo/did/surprise/whitfinch:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"hypostasised_singlehanded_simah_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["hypostasised_singlehanded_simah_{chroot}/common_scripts/run_build.sh", "{chroot}", "hypostasised_singlehanded_simah_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
