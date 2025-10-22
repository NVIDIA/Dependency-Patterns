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
        "worthington/jujutsu/ununanimity/factorship:output",
        "worthington/covering/endospermous/homilist:output",
        "worthington/ihp/endospermous/elf:output",
        "worthington/uneducated/oxyosphresia/rosttra:output",
        "worthington/covering/endospermous/sublimers:output",
        "worthington/jujutsu/androphore/tosser:output",
        "worthington/cajole/pirtleville/unmaskers:output",
        "worthington/jujutsu/lysolecithin/cyclonal:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"worthington_jujutsu_gelidities_precisions_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["worthington_jujutsu_gelidities_precisions_{chroot}/common_scripts/run_build.sh", "{chroot}", "worthington_jujutsu_gelidities_precisions_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
