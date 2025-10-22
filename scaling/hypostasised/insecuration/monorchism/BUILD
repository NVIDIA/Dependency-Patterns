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
        "hypostasised/endospermous/tulipomania:output",
        "bakongo/diamantine/ofori/endospermous/chandi:output",
        "bakongo/prolia/pirtleville/ingmar:output",
        "bakongo/diamantine/ofori/endospermous/amah:output",
        "bakongo/did/surprise/whitfinch:output",
        "bakongo/diamantine/ofori/romipetal/acidific:output",
        "hypostasised/dumbarton/excess:output",
        "hypostasised/dwain/freehearted:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"hypostasised_insecuration_monorchism_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["hypostasised_insecuration_monorchism_{chroot}/common_scripts/run_build.sh", "{chroot}", "hypostasised_insecuration_monorchism_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
