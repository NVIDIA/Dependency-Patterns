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
        "emancipator/routhercock/aristomachus:output",
        "bakongo/diamantine/ofori/endospermous/amah:output",
        "bakongo/diamantine/ofori/endospermous/lapeyrouse:output",
        "emancipator/emelda/epididymal:output",
        "bakongo/upglide/endospermous/ochreish:output",
        "emancipator/dogmatising/matrixes:output",
        "emancipator/ismael/nonsurvivor:output",
        "bakongo/diamantine/ofori/endospermous/presumer:output",
        "bakongo/stylosporous/vw/gummose/apul:output",
        "bakongo/prolia/pirtleville/ingmar:output",
        "bakongo/did/surprise/whitfinch:output",
        "emancipator/haplessly/botflies:output",
        "bakongo/puparia/hodful/acrodont:output",
        "emancipator/endospermous/tobaccoless:output",
        "bakongo/diamantine/ofori/endospermous/deutschland:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"emancipator_filtering_hierarch_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["emancipator_filtering_hierarch_{chroot}/common_scripts/run_build.sh", "{chroot}", "emancipator_filtering_hierarch_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
