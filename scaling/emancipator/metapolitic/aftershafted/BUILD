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
        "bakongo/carriageway/reitman/crocodiline:output",
        "bakongo/inchase/criminating/britte:output",
        "bakongo/did/surprise/whitfinch:output",
        "bakongo/upglide/endospermous/karyoplasmic:output",
        "bakongo/upglide/endospermous/crabbily:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"emancipator_metapolitic_aftershafted_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["emancipator_metapolitic_aftershafted_{chroot}/common_scripts/run_build.sh", "{chroot}", "emancipator_metapolitic_aftershafted_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
