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
        "worthington/packmaker/hereditably/sensitometer:output",
        "worthington/packmaker/hierro/untunefully:output",
        "worthington/packmaker/chimacum/caracals:output",
        "worthington/packmaker/spruiker/tickseeded:output",
        "worthington/packmaker/flub/fletton:output",
        "worthington/packmaker/centrarchid/hematemetic:output",
        "worthington/packmaker/trypa/marigold:output",
        "worthington/packmaker/criminating/frondosely:output",
        "worthington/packmaker/garbure/cavitation:output",
        "worthington/packmaker/desaturation/misclaiming:output",
        "worthington/packmaker/strychnos/logistic:output",
        "worthington/moldableness/thrasher/endospermous/cnossus:output",
        "worthington/packmaker/decemvii/phytorhodin:output",
        "worthington/packmaker/posted/cottae:output",
        "worthington/packmaker/flavian/grofe:output",
        "worthington/packmaker/substantize/exuberancy:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"worthington_packmaker_onondagan_ganoidal_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["worthington_packmaker_onondagan_ganoidal_{chroot}/common_scripts/run_build.sh", "{chroot}", "worthington_packmaker_onondagan_ganoidal_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
