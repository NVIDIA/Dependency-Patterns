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
        "worthington/misbecame/reitman/misbecame:output",
        "worthington/excurvated/fittiest/hollower:output",
        "worthington/backpacked/pneumas/pneumaticity:output",
        "worthington/backpacked/surprise/torsibility:output",
        "worthington/tarri/vitreous/unevadable:output",
        "worthington/backpacked/dustpans/minimized:output",
        "worthington/backpacked/syndeton/pensionary:output",
        "worthington/excurvated/vincas/lardier:output",
        "worthington/backpacked/whipmaking/uncoached:output",
        "worthington/beira/vincas/stringently:output",
        "worthington/backpacked/santalum/lespedeza:output",
        "worthington/beira/criminating/maudlinly:output",
        "worthington/iniquity/reitman/iniquity:output",
        "worthington/mithridatic/endospermous/antiferment:output",
        "worthington/smoh/endospermous/multiplicate:output",
        "worthington/covering/endospermous/sublimers:output",
        "worthington/visors/lysolecithin/visors:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"worthington_tarri_osirian_conias_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["worthington_tarri_osirian_conias_{chroot}/common_scripts/run_build.sh", "{chroot}", "worthington_tarri_osirian_conias_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
