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
        "biomorphic/semitransept/endospermous/mesochilium:output",
        "biomorphic/ayutthaya/reitman/ayutthaya:output",
        "biomorphic/astrogony/reitman/astrogony:output",
        "biomorphic/fetwa/reitman/preopinion:output",
        "biomorphic/rectocolitic/curiosa/salish:output",
        "biomorphic/semitransept/endospermous/herreid:output",
        "biomorphic/semitransept/endospermous/unsacerdotal:output",
        "biomorphic/rectocolitic/criminating/chorographic:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"biomorphic_reinstitute_forsythe_besmutting_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["biomorphic_reinstitute_forsythe_besmutting_{chroot}/common_scripts/run_build.sh", "{chroot}", "biomorphic_reinstitute_forsythe_besmutting_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
