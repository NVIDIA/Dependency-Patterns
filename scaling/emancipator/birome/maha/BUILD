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
        "bakongo/incumbrances/reitman/incumbrances:output",
        "bakongo/heptene/endospermous/dyable:output",
        "bakongo/inchase/criminating/britte:output",
        "bakongo/labials/reitman/labials:output",
        "bakongo/prolia/pirtleville/ingmar:output",
        "bakongo/did/surprise/whitfinch:output",
        "bakongo/sapphera/lysolecithin/smiler:output",
        "bakongo/archizoic/burgers/imu:output",
        "bakongo/sensuosity/lysolecithin/terminal:output",
        "bakongo/excretolic/burgers/faison:output",
        "bakongo/gutow/lysolecithin/thegndom:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"emancipator_birome_maha_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["emancipator_birome_maha_{chroot}/common_scripts/run_build.sh", "{chroot}", "emancipator_birome_maha_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
