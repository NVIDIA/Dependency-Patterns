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
        "hypostasised/dogmatising/aerospace:output",
        "bakongo/diamantine/ofori/endospermous/amah:output",
        "hypostasised/endospermous/bikinis:output",
        "hypostasised/haplessly/fundi:output",
        "bakongo/diamantine/ofori/endospermous/lapeyrouse:output",
        "bakongo/upglide/endospermous/ochreish:output",
        "hypostasised/ismael/okeghem:output",
        "bakongo/diamantine/ofori/endospermous/presumer:output",
        "bakongo/stylosporous/vw/gummose/apul:output",
        "bakongo/prolia/pirtleville/ingmar:output",
        "bakongo/did/surprise/whitfinch:output",
        "bakongo/puparia/hodful/acrodont:output",
        "hypostasised/routhercock/alloted:output",
        "hypostasised/emelda/xview:output",
        "bakongo/diamantine/ofori/endospermous/deutschland:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"hypostasised_filtering_sheathe_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["hypostasised_filtering_sheathe_{chroot}/common_scripts/run_build.sh", "{chroot}", "hypostasised_filtering_sheathe_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
