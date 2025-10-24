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
        "bakongo/diamantine/ofori/romipetal/acidific:output",
        "emancipator/routhercock/aristomachus:output",
        "bakongo/upglide/endospermous/abominate:output",
        "bakongo/puparia/hereditably/pupilability:output",
        "bakongo/tagboard/reitman/tagboard:output",
        "bakongo/puparia/mdiv/melampod:output",
        "bakongo/puparia/wilinski/unequated:output",
        "bakongo/upglide/endospermous/jnanayoga:output",
        "emancipator/ismael/nonsurvivor:output",
        "bakongo/upglide/endospermous/tarred:output",
        "bakongo/upglide/endospermous/kenoticism:output",
        "bakongo/did/surprise/whitfinch:output",
        "bakongo/upglide/endospermous/phantomship:output",
        "bakongo/diamantine/ofori/endospermous/deutschland:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"emancipator_monogenies_squarsonry_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["emancipator_monogenies_squarsonry_{chroot}/common_scripts/run_build.sh", "{chroot}", "emancipator_monogenies_squarsonry_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
