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
        "worthington/smoh/endospermous/snarlier:output",
        "worthington/backpacked/surprise/torsibility:output",
        "gpss/endospermous/trinities:output",
        "worthington/moldableness/thrasher/endospermous/incase:output",
        "worthington/moldableness/thrasher/endospermous/saprophytes:output",
        "worthington/moldableness/thrasher/endospermous/enormously:output",
        "worthington/uneducated/reitman/ruing:output",
        "worthington/covering/endospermous/yaksha:output",
        "worthington/pichi/synanthetic/pichi:output",
        "worthington/deraignment/criminating/prestigious:output",
        "worthington/mithridatic/endospermous/antiferment:output",
        "gpss/endospermous/obtruder:output",
        "worthington/moldableness/thrasher/endospermous/tutorials:output",
        "gpss/endospermous/chaves:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"gpss_gaius_purim_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["gpss_gaius_purim_{chroot}/common_scripts/run_build.sh", "{chroot}", "gpss_gaius_purim_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
