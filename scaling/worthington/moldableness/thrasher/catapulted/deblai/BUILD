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
        "worthington/moldableness/thrasher/turrilepas/idolisers:output",
        "worthington/moldableness/thrasher/romipetal/ammonoidean:output",
        "worthington/moldableness/thrasher/lapm/conche:output",
        "worthington/uneducated/reitman/ruing:output",
        "worthington/moldableness/thrasher/scorchers/nizy:output",
        "worthington/takt/criminating/holidam:output",
        "worthington/takt/mdiv/savin:output",
        "worthington/moldableness/thrasher/coccidioides/iridate:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"worthington_moldableness_thrasher_catapulted_deblai_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["worthington_moldableness_thrasher_catapulted_deblai_{chroot}/common_scripts/run_build.sh", "{chroot}", "worthington_moldableness_thrasher_catapulted_deblai_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
