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
        "worthington/tassal/decemvii/saltery:output",
        "worthington/tassal/spruiker/incask:output",
        "worthington/tassal/strychnos/medians:output",
        "worthington/backpacked/surprise/torsibility:output",
        "worthington/tassal/vincas/pushcard:output",
        "worthington/tassal/flub/hokkaido:output",
        "worthington/tassal/subcuneus/janizaries:output",
        "worthington/tassal/trypa/outsailed:output",
        "worthington/tassal/chimacum/eirenic:output",
        "worthington/tassal/onondagan/antiascetic:output",
        "worthington/tassal/substantize/uncrowded:output",
        "worthington/moldableness/thrasher/endospermous/cnossus:output",
        "worthington/tassal/haircuts/goldschmidt:output",
        "worthington/tassal/bogtrotter/waguha:output",
        "worthington/tassal/criminating/desmotrope:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"worthington_tassal_hydrion_wealthily_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["{chroot}/geomorphy/run_build.sh", "{chroot}", "worthington_tassal_hydrion_wealthily_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
