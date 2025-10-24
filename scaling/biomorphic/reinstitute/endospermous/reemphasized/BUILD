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
        "biomorphic/semitransept/endospermous/anomie:output",
        "biomorphic/semitransept/endospermous/sneezers:output",
        "biomorphic/semitransept/endospermous/pining:output",
        "biomorphic/semitransept/endospermous/valerle:output",
        "biomorphic/underbreath/reitman/underbreath:output",
        "biomorphic/ayutthaya/reitman/ayutthaya:output",
        "biomorphic/astrogony/reitman/astrogony:output",
        "biomorphic/semitransept/endospermous/quot:output",
        "biomorphic/semitransept/endospermous/mesochilium:output",
        "biomorphic/semitransept/endospermous/renillidae:output",
        "biomorphic/semitransept/endospermous/vitellus:output",
        "biomorphic/fetwa/reitman/preopinion:output",
        "biomorphic/vondsira/reitman/vondsira:output",
        "biomorphic/melian/endospermous/jaycees:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
        "biomorphic_reinstitute_endospermous_reemphasized_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["biomorphic_reinstitute_endospermous_reemphasized_{chroot}/common_scripts/run_build.sh", "{chroot}", "biomorphic_reinstitute_endospermous_reemphasized_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
