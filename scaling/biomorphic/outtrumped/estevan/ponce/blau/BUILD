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
        "biomorphic/semitransept/endospermous/valerle:output",
        "biomorphic/underbreath/reitman/underbreath:output",
        "biomorphic/semitransept/endospermous/vitellus:output",
        "biomorphic/outtrumped/estevan/multicelled/saltweed:output",
        "biomorphic/puerpery/endospermous/bargestone:output",
        "biomorphic/puerpery/endospermous/zoning:output",
        "biomorphic/metakinesis/vincas/quink:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"biomorphic_outtrumped_estevan_ponce_blau_estevan_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["biomorphic_outtrumped_estevan_ponce_blau_{chroot}/common_scripts/run_build.sh", "{chroot}", "biomorphic_outtrumped_estevan_ponce_blau_estevan_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
