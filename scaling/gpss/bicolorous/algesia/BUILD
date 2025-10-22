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
        "worthington/sleided/calceus/cherri/latescent:output",
        "gpss/bicolorous/algesia:output",
        "worthington/backpacked/pneumas/pneumaticity:output",
        "worthington/backpacked/surprise/torsibility:output",
        "worthington/jujutsu/gelidities/giglot:output",
        "worthington/backpacked/syndeton/pensionary:output",
        "worthington/jujutsu/knotholes/tramroads:output",
        "worthington/backpacked/whipmaking/uncoached:output",
        "worthington/backpacked/santalum/lespedeza:output",
        "worthington/jujutsu/trapa/coldfinch:output",
        "worthington/jujutsu/chugalugged/nemeses:output",
        "worthington/jujutsu/interportal/pyorrhea:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"gpss_bicolorous_algesia_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["gpss_bicolorous_algesia_{chroot}/common_scripts/run_build.sh", "{chroot}", "gpss_bicolorous_algesia_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
