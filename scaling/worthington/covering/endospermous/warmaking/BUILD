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
        "worthington/backpacked/pneumas/pneumaticity:output",
        "worthington/tensure/reitman/tensure:output",
        "worthington/covering/endospermous/sparkingly:output",
        "worthington/landingville/lysolecithin/landingville:output",
        "worthington/regalements/chimacum/aromatophor:output",
        "worthington/cajole/pirtleville/unmaskers:output",
        "worthington/verner/chimacum/lemnisci:output",
        "worthington/backpacked/syndeton/pensionary:output",
        "worthington/hedonic/reitman/hedonic:output",
        "worthington/backpacked/whipmaking/uncoached:output",
        "worthington/backpacked/santalum/lespedeza:output",
        "worthington/desiring/reitman/desiring:output",
        "worthington/monoid/reitman/monoid:output",
        "worthington/covering/endospermous/sublimers:output",
        "worthington/covering/endospermous/jcs:output",
        "worthington/gardeen/reitman/gardeen:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
        "worthington_covering_endospermous_warmaking_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["worthington_covering_endospermous_warmaking_{chroot}/common_scripts/run_build.sh", "{chroot}", "worthington_covering_endospermous_warmaking_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
