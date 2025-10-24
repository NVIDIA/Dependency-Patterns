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
        "worthington/covering/endospermous/sparkingly:output",
        "worthington/backpacked/surprise/torsibility:output",
        "worthington/moldableness/thrasher/endospermous/saprophytes:output",
        "worthington/covering/endospermous/sideroma:output",
        "worthington/covering/endospermous/twaddy:output",
        "worthington/monoid/reitman/monoid:output",
        "worthington/covering/endospermous/uteropexia:output",
        "worthington/covering/endospermous/maid:output",
        "worthington/covering/endospermous/sublimers:output",
        "gpss/endospermous/obtruder:output",
        "worthington/covering/endospermous/grimme:output",
        "worthington/covering/endospermous/ackeys:output",
        "worthington/covering/endospermous/rabulistic:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
        "gpss_endospermous_breezeway_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["gpss_endospermous_breezeway_{chroot}/common_scripts/run_build.sh", "{chroot}", "gpss_endospermous_breezeway_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
