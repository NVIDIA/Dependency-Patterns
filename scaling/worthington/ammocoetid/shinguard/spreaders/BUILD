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
        "worthington/catalogers/chimacum/waldglas:output",
        "worthington/lullay/lysolecithin/lullay:output",
        "worthington/backpacked/pneumas/pneumaticity:output",
        "worthington/packmaker/chimacum/caracals:output",
        "worthington/backpacked/surprise/torsibility:output",
        "worthington/backpacked/syndeton/pensionary:output",
        "worthington/backpacked/whipmaking/uncoached:output",
        "worthington/backpacked/santalum/lespedeza:output",
        "worthington/tassal/chimacum/eirenic:output",
        "worthington/medicines/chimacum/knab:output",
        "worthington/motherhouse/reitman/motherhouse:output",
        "worthington/ihp/endospermous/elf:output",
        "worthington/gnatcatcher/chimacum/steadite:output",
        "worthington/lituoline/chimacum/kaczer:output",
        "worthington/ammocoetid/criminating/whodunnit:output",
        "worthington/cithern/reitman/cithern:output",
        "worthington/eximiousness/reitman/eximiousness:output",
        "worthington/subhymenium/chimacum/estamin:output",
        "worthington/eclats/chimacum/falconelle:output",
        "worthington/defeaters/chimacum/pennyleaf:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"worthington_ammocoetid_shinguard_spreaders_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["{chroot}/geomorphy/run_build.sh", "{chroot}", "worthington_ammocoetid_shinguard_spreaders_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
