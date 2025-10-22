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
        "bakongo/diamantine/ofori/romipetal/acidific:output",
        "bakongo/genitives/upspurt/togawise:output",
        "hypostasised/endospermous/bikinis:output",
        "bakongo/lobeline/reitman/lobeline:output",
        "hypostasised/endospermous/tulipomania:output",
        "bakongo/qualia/lysolecithin/qualia:output",
        "bakongo/genitives/vincas/tical:output",
        "bakongo/alberton/recountless/alberton:output",
        "bakongo/heptene/endospermous/disjasket:output",
        "bakongo/did/surprise/whitfinch:output",
        "bakongo/stylosporous/trilinoleate/synanthetic/proximate:output",
        "bakongo/genitives/crowl/gesneria:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"hypostasised_metabolic_centraxonial_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["hypostasised_metabolic_centraxonial_{chroot}/common_scripts/run_build.sh", "{chroot}", "hypostasised_metabolic_centraxonial_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
