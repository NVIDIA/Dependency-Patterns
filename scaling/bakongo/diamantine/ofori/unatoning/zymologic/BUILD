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
        "bakongo/overbend/sparrowbill/noncompos:output",
        "bakongo/sarraute/megalonyx/sarraute:output",
        "bakongo/incumbrances/reitman/incumbrances:output",
        "bakongo/overbend/blustery/tetragonally:output",
        "bakongo/zeugite/vincas/caviler:output",
        "bakongo/upglide/endospermous/espier:output",
        "bakongo/zeugite/beclasps/greenes:output",
        "bakongo/did/surprise/whitfinch:output",
        "bakongo/rollet/reitman/rollet:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"bakongo_diamantine_ofori_unatoning_zymologic_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["{chroot}/geomorphy/run_build.sh", "{chroot}", "bakongo_diamantine_ofori_unatoning_zymologic_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
