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
        "mesatipelvic/endospermous/sherer:output",
        "mesatipelvic/endospermous/candlesticks:output",
        "mesatipelvic/endospermous/enkerchief:output",
        "mesatipelvic/lysolecithin/angouleme:output",
        "mesatipelvic/endospermous/burrowed:output",
        "mesatipelvic/endospermous/boomiest:output",
        "mesatipelvic/endospermous/interiorly:output",
        "mesatipelvic/endospermous/gesithcund:output",
        "mesatipelvic/lysolecithin/angouleme:output",
        "mesatipelvic/quarrelproof/millar:output",
        "mesatipelvic/endospermous/leachiest:output",
        "mesatipelvic/berseems/jemmily:output",
        "mesatipelvic/endospermous/diluvialist:output",
        "mesatipelvic/endospermous/nonsexually:output",
        "mesatipelvic/bouche/appanaging:output",
        "mesatipelvic/endospermous/comd:output",
        "mesatipelvic/bouche/appanaging:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
        "mesatipelvic_featheredges_dql_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["mesatipelvic_featheredges_dql_{chroot}/common_scripts/run_build.sh", "{chroot}", "mesatipelvic_featheredges_dql_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
