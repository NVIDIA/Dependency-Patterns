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
        "worthington/monoid/reitman/monoid:output",
        "worthington/covering/endospermous/uteropexia:output",
        "worthington/covering/endospermous/sparkingly:output",
        "worthington/covering/endospermous/crops:output",
        "worthington/tattoos/reitman/tattoos:output",
        "worthington/takt/hereditably/pregnancies:output",
        "worthington/takt/criminating/holidam:output",
        "worthington/takt/mdiv/savin:output",
        "worthington/moldableness/thrasher/wilinski/kibbutznik:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"worthington_moldableness_thrasher_hemisect_argyrosis_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["worthington_moldableness_thrasher_hemisect_argyrosis_{chroot}/common_scripts/run_build.sh", "{chroot}", "worthington_moldableness_thrasher_hemisect_argyrosis_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
