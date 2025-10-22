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
        "bakongo/talcose/endospermous/talcose:output",
        "bakongo/isotactic/reitman/isotactic:output",
        "bakongo/advances/bouche/axiom:output",
        "bakongo/monofilm/apocopation/ergotism:output",
        "bakongo/upglide/endospermous/heathberry:output",
        "bakongo/upglide/endospermous/muncerian:output",
        "hypostasised/influenced/ebsen:output",
        "bakongo/upglide/endospermous/ultrafeudal:output",
        "bakongo/upglide/endospermous/jnanayoga:output",
        "bakongo/upglide/endospermous/crabbily:output",
        "bakongo/monofilm/reitman/ballot:output",
        "bakongo/upglide/endospermous/espier:output",
        "bakongo/upglide/endospermous/tarred:output",
        "bakongo/akroter/reitman/akroter:output",
        "bakongo/upglide/endospermous/sodio:output",
        "bakongo/did/surprise/whitfinch:output",
        "bakongo/excretal/reitman/excretal:output",
        "bakongo/simeonism/lysolecithin/vasos:output",
        "bakongo/upglide/endospermous/ununiformed:output",
        "bakongo/guidonia/reitman/guidonia:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"hypostasised_monogenies_hubba_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["hypostasised_monogenies_hubba_{chroot}/common_scripts/run_build.sh", "{chroot}", "hypostasised_monogenies_hubba_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
