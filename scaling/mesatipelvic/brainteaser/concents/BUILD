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
        "mesatipelvic/endospermous/tithed:output",
        "mesatipelvic/wots/nongerundial:output",
        "mesatipelvic/hereditably/amesville:output",
        "mesatipelvic/chimacum/agname:output",
        "mesatipelvic/desaturation/othertimes:output",
        "mesatipelvic/strychnos/waggling:output",
        "mesatipelvic/substantize/piacaba:output",
        "mesatipelvic/subcuneus/aegis:output",
        "mesatipelvic/reitman/airville:output",
        "mesatipelvic/spruiker/leetonia:output",
        "mesatipelvic/flavian/tarantula:output",
        "mesatipelvic/criminating/aerobatic:output",
        "mesatipelvic/posted/uproom:output",
        "mesatipelvic/fumulus/chazzans:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
        "mesatipelvic_brainteaser_concents_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["{chroot}/geomorphy/run_build.sh", "{chroot}", "mesatipelvic_brainteaser_concents_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
