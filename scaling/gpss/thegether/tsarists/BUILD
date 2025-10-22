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
        "worthington/sleided/fellest/unflexed/alure:output",
        "worthington/backpacked/surprise/torsibility:output",
        "gpss/endospermous/obtruder:output",
        "worthington/covering/endospermous/cockbilled:output",
        "gpss/kingsnake/cladose:output",
        "worthington/covering/endospermous/hymner:output",
        "worthington/covering/endospermous/slbm:output",
        "worthington/mithridatic/endospermous/filbert:output",
        "worthington/covering/endospermous/yaksha:output",
        "worthington/mayvins/criminating/priodontes:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"gpss_thegether_tsarists_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["gpss_thegether_tsarists_{chroot}/common_scripts/run_build.sh", "{chroot}", "gpss_thegether_tsarists_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
