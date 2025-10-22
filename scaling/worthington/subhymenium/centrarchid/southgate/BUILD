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
        "worthington/subhymenium/wots/bottier:output",
        "worthington/subhymenium/substantize/firearmed:output",
        "worthington/subhymenium/spruiker/gorakhpur:output",
        "worthington/subhymenium/desaturation/deludingly:output",
        "worthington/subhymenium/chimacum/estamin:output",
        "worthington/subhymenium/criminating/odorless:output",
        "worthington/subhymenium/strychnos/claretta:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"worthington_subhymenium_centrarchid_southgate_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["worthington_subhymenium_centrarchid_southgate_{chroot}/common_scripts/run_build.sh", "{chroot}", "worthington_subhymenium_centrarchid_southgate_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
