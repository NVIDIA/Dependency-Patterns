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
        "worthington/backpacked/surprise/torsibility:output",
        "worthington/hovered/synanthetic/hovered:output",
        "worthington/moldableness/thrasher/endospermous/incase:output",
        "worthington/moldableness/thrasher/endospermous/saprophytes:output",
        "worthington/moldableness/thrasher/endospermous/enormously:output",
        "worthington/uneducated/reitman/ruing:output",
        "worthington/moqui/reitman/moqui:output",
        "gpss/overentreat/maulawiyah:output",
        "worthington/mithridatic/endospermous/antiferment:output",
        "worthington/lissy/lysolecithin/lissy:output",
        "worthington/ihp/endospermous/elf:output",
        "worthington/smoh/endospermous/multiplicate:output",
        "worthington/covering/endospermous/sublimers:output",
        "worthington/uneducated/bemire/grinter:output",
        "gpss/endospermous/obtruder:output",
        "gpss/chugalugged/hommel:output",
        "worthington/moldableness/thrasher/endospermous/tutorials:output",
        "worthington/covering/endospermous/haiduck:output",
        "worthington/covering/endospermous/slbm:output",
        "worthington/mithridatic/endospermous/filbert:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"gpss_quelea_redeposits_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["gpss_quelea_redeposits_{chroot}/common_scripts/run_build.sh", "{chroot}", "gpss_quelea_redeposits_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
