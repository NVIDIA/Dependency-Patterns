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
        "worthington/catalogers/chimacum/waldglas:output",
        "worthington/catalogers/haircuts/bhadon:output",
        "worthington/catalogers/trypa/cytotrophy:output",
        "worthington/catalogers/criminating/howenstein:output",
        "worthington/backpacked/surprise/torsibility:output",
        "worthington/catalogers/flub/syrus:output",
        "worthington/catalogers/spruiker/eloigned:output",
        "worthington/catalogers/bogtrotter/groined:output",
        "worthington/catalogers/subcuneus/airily:output",
        "worthington/catalogers/strychnos/wolver:output",
        "worthington/moldableness/thrasher/endospermous/cnossus:output",
        "worthington/catalogers/onondagan/obliger:output",
        "worthington/catalogers/substantize/catamenia:output",
        "worthington/catalogers/decemvii/occitone:output",
        "worthington/catalogers/vincas/berberid:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"worthington_catalogers_hydrion_threaders_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["worthington_catalogers_hydrion_threaders_{chroot}/common_scripts/run_build.sh", "{chroot}", "worthington_catalogers_hydrion_threaders_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
