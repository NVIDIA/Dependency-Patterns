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
        "biomorphic/reinstitute/endospermous/articular:output",
        "biomorphic/reinstitute/endospermous/cocinera:output",
        "biomorphic/reinstitute/endospermous/sustentator:output",
        "biomorphic/reinstitute/endospermous/sirdar:output",
        "biomorphic/semitransept/endospermous/bleuler:output",
        "biomorphic/reinstitute/endospermous/wallflower:output",
        "biomorphic/reinstitute/endospermous/store:output",
        "biomorphic/reinstitute/endospermous/fonder:output",
        "biomorphic/reinstitute/endospermous/jermoonal:output",
        "biomorphic/reinstitute/endospermous/gryphite:output",
        "biomorphic/reinstitute/endospermous/magdaleon:output",
        "biomorphic/reinstitute/endospermous/junctly:output",
        "biomorphic/reinstitute/endospermous/motorise:output",
        "biomorphic/reinstitute/endospermous/answerably:output",
        "biomorphic/reinstitute/endospermous/grove:output",
        "biomorphic/reinstitute/endospermous/entailment:output",
        "biomorphic/reinstitute/endospermous/cockily:output",
        "biomorphic/coarsest/reitman/arraying:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
        "biomorphic_reinstitute_endospermous_andrarchy_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["biomorphic_reinstitute_endospermous_andrarchy_{chroot}/common_scripts/run_build.sh", "{chroot}", "biomorphic_reinstitute_endospermous_andrarchy_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
