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
        "bakongo/rhetorician/vincas/cockneyland:output",
        "bakongo/rhetorician/crowl/purin:output",
        "hypostasised/endospermous/bikinis:output",
        "bakongo/diamantine/ofori/endospermous/lapeyrouse:output",
        "bakongo/upglide/endospermous/ultrafeudal:output",
        "bakongo/monofilm/reitman/ballot:output",
        "bakongo/labials/reitman/labials:output",
        "bakongo/diamantine/ofori/endospermous/presumer:output",
        "bakongo/stylosporous/surnaming/synanthetic/dutchify:output",
        "bakongo/did/surprise/whitfinch:output",
        "bakongo/maar/claribella/uncombining:output",
        "bakongo/diamantine/ofori/endospermous/deutschland:output",
        "bakongo/diamantine/ofori/endospermous/jocuma:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"hypostasised_seels_salicornia_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["{chroot}/geomorphy/run_build.sh", "{chroot}", "hypostasised_seels_salicornia_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
