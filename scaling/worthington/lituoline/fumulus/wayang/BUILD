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
        "worthington/lituoline/flavian/lanigerous:output",
        "worthington/lituoline/trypa/tulkepaia:output",
        "worthington/lituoline/decemvii/concorde:output",
        "worthington/lituoline/substantize/nonactivity:output",
        "worthington/lituoline/strychnos/incitement:output",
        "worthington/lituoline/criminating/akaroa:output",
        "worthington/lituoline/subcuneus/obsesses:output",
        "worthington/lituoline/spruiker/macaco:output",
        "worthington/lituoline/chimacum/kaczer:output",
        "worthington/lituoline/flub/gilravager:output",
        "worthington/lituoline/redondilla/religionary:output",
        "worthington/lituoline/hereditably/pendative:output",
        "worthington/lituoline/desaturation/mythopoetry:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"worthington_lituoline_fumulus_wayang_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["worthington_lituoline_fumulus_wayang_{chroot}/common_scripts/run_build.sh", "{chroot}", "worthington_lituoline_fumulus_wayang_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
