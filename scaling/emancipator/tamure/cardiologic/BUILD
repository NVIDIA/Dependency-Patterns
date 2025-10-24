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
        "bakongo/diamantine/ofori/endospermous/chandi:output",
        "bakongo/stylosporous/pleurostict/ddcu/juvenilely:output",
        "bakongo/diamantine/ofori/endospermous/amah:output",
        "bakongo/diamantine/ofori/romipetal/acidific:output",
        "emancipator/steamerless/kephalin:output",
        "emancipator/podical/dinophilus:output",
        "emancipator/endospermous/scyphiform:output",
        "bakongo/did/surprise/whitfinch:output",
        "bakongo/fengtien/criminating/electrifies:output",
        "emancipator/pinnotherian/filarian:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"emancipator_tamure_cardiologic_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["emancipator_tamure_cardiologic_{chroot}/common_scripts/run_build.sh", "{chroot}", "emancipator_tamure_cardiologic_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
