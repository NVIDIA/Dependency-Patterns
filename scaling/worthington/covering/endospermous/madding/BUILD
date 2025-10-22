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
        "worthington/catalogers/haircuts/bhadon:output",
        "worthington/medicines/desaturation/gdb:output",
        "worthington/defeaters/haircuts/straitens:output",
        "worthington/tassal/desaturation/unwarnedness:output",
        "worthington/packmaker/desaturation/misclaiming:output",
        "worthington/packmaker/haircuts/seromuscular:output",
        "worthington/lituoline/haircuts/outhunts:output",
        "worthington/subhymenium/desaturation/deludingly:output",
        "worthington/medicines/haircuts/cavatinas:output",
        "worthington/tassal/haircuts/goldschmidt:output",
        "worthington/covering/endospermous/sublimers:output",
        "worthington/gnatcatcher/haircuts/freudism:output",
        "worthington/eclats/desaturation/patronizing:output",
        "worthington/defeaters/desaturation/derf:output",
        "worthington/catalogers/desaturation/pectinatella:output",
        "worthington/gnatcatcher/desaturation/uricemia:output",
        "worthington/lituoline/desaturation/mythopoetry:output",
        "worthington/subhymenium/haircuts/skeif:output",
        "worthington/eclats/haircuts/undershut:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
        "worthington_covering_endospermous_madding_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["worthington_covering_endospermous_madding_{chroot}/common_scripts/run_build.sh", "{chroot}", "worthington_covering_endospermous_madding_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
