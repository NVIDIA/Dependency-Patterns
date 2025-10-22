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
        "worthington/backpacked/pneumas/pneumaticity:output",
        "gpss/synanthetic/beaut:output",
        "worthington/backpacked/surprise/torsibility:output",
        "worthington/backpacked/syndeton/pensionary:output",
        "worthington/rotherham/redlining/junkdealer:output",
        "worthington/backpacked/whipmaking/uncoached:output",
        "worthington/covering/endospermous/hymner:output",
        "gpss/incipiency/embosomed:output",
        "worthington/backpacked/santalum/lespedeza:output",
        "worthington/covering/endospermous/yaksha:output",
        "gpss/venatorial/zoetrope:output",
        "gpss/camped/sexualism:output",
        "gpss/niland/libbna:output",
        "gpss/endospermous/obtruder:output",
        "worthington/covering/endospermous/sublimers:output",
        "gpss/endospermous/laotian:output",
        "gpss/principling/daughtry:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
        "gpss_endospermous_booklift_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["gpss_endospermous_booklift_{chroot}/common_scripts/run_build.sh", "{chroot}", "gpss_endospermous_booklift_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
