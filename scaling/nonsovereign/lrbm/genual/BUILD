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
        "biomorphic/semitransept/endospermous/anomie:output",
        "biomorphic/underbreath/reitman/underbreath:output",
        "biomorphic/untellable/whipmaking/prig:output",
        "nonsovereign/darkskin/reboundant:output",
        "biomorphic/emptio/reitman/emptio:output",
        "nonsovereign/endospermous/glimes:output",
        "biomorphic/untellable/surprise/pursuant:output",
        "nonsovereign/scalpellic/nonreversing:output",
        "biomorphic/untellable/pneumas/inimaginable:output",
        "biomorphic/swaziland/vincas/capitation:output",
        "biomorphic/untellable/santalum/rejuvenator:output",
        "biomorphic/untellable/syndeton/alfur:output",
        "biomorphic/metakinesis/vincas/quink:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"nonsovereign_lrbm_genual_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["nonsovereign_lrbm_genual_{chroot}/common_scripts/run_build.sh", "{chroot}", "nonsovereign_lrbm_genual_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
