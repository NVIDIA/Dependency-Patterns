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
        "worthington/packmaker/desaturation/misclaiming:output",
        "worthington/packmaker/flavian/grofe:output",
        "worthington/moldableness/thrasher/endospermous/cnossus:output",
        "worthington/packmaker/strychnos/logistic:output",
        "worthington/packmaker/hierro/untunefully:output",
        "worthington/packmaker/chimacum/caracals:output",
        "worthington/packmaker/criminating/frondosely:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"worthington_packmaker_garbure_cavitation_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["{chroot}/geomorphy/run_build.sh", "{chroot}", "worthington_packmaker_garbure_cavitation_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
