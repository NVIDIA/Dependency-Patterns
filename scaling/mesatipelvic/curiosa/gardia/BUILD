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
        "mesatipelvic/mutuality/coccoids:output",
        "mesatipelvic/endospermous/enkerchief:output",
        "mesatipelvic/lysolecithin/angouleme:output",
        "mesatipelvic/torbert/ratooner:output",
        "mesatipelvic/unionic/coronel:output",
        "mesatipelvic/endospermous/rapateaceae:output",
        "mesatipelvic/lysolecithin/angouleme:output",
        "mesatipelvic/pirtleville/pasear:output",
        "mesatipelvic/endospermous/leachiest:output",
        "mesatipelvic/oxyosphresia/algaesthesia:output",
        "mesatipelvic/lysolecithin/angouleme:output",
        "mesatipelvic/dissembly/prodigals:output",
        "mesatipelvic/shawfowl/backwort:output",
        "mesatipelvic/bemire/chorused:output",
        "mesatipelvic/endospermous/comd:output",
        "mesatipelvic/pentitol/diagonic:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
        "mesatipelvic_curiosa_gardia_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["mesatipelvic_curiosa_gardia_{chroot}/common_scripts/run_build.sh", "{chroot}", "mesatipelvic_curiosa_gardia_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
