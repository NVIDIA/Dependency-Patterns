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
        "worthington/eclats/strychnos/somnambulate:output",
        "worthington/eclats/criminating/oligophrenic:output",
        "worthington/eclats/hereditably/philogarlic:output",
        "worthington/eclats/redondilla/suppliancy:output",
        "worthington/eclats/flavian/outecho:output",
        "worthington/eclats/decemvii/unhydrolyzed:output",
        "worthington/eclats/spruiker/plateaus:output",
        "worthington/eclats/desaturation/patronizing:output",
        "worthington/eclats/subcuneus/tocobaga:output",
        "worthington/eclats/flub/cotenancy:output",
        "worthington/eclats/chimacum/falconelle:output",
        "worthington/eclats/trypa/vixen:output",
        "worthington/eclats/substantize/flittermmice:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"worthington_eclats_fumulus_drawglove_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["worthington_eclats_fumulus_drawglove_{chroot}/common_scripts/run_build.sh", "{chroot}", "worthington_eclats_fumulus_drawglove_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
