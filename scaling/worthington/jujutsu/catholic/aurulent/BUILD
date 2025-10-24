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
        "worthington/defeaters/overliterary/housum:output",
        "worthington/backpacked/pneumas/pneumaticity:output",
        "worthington/jujutsu/reitman/dtg:output",
        "worthington/backpacked/surprise/torsibility:output",
        "worthington/uneducated/reitman/ruing:output",
        "worthington/backpacked/dustpans/minimized:output",
        "worthington/backpacked/syndeton/pensionary:output",
        "worthington/backpacked/whipmaking/uncoached:output",
        "worthington/defeaters/lerc/sacrospinous:output",
        "worthington/backpacked/santalum/lespedeza:output",
        "worthington/defeaters/entrechat/regenerators:output",
        "worthington/mithridatic/endospermous/antiferment:output",
        "worthington/ihp/endospermous/elf:output",
        "worthington/jujutsu/shinguard/stomatolalia:output",
        "worthington/covering/endospermous/sublimers:output",
        "worthington/jujutsu/supersystems/larue:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"worthington_jujutsu_catholic_aurulent_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["worthington_jujutsu_catholic_aurulent_{chroot}/common_scripts/run_build.sh", "{chroot}", "worthington_jujutsu_catholic_aurulent_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
