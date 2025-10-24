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
        "biomorphic/semitransept/endospermous/anomie:output",
        "biomorphic/semitransept/endospermous/thegn:output",
        "biomorphic/reinstitute/endospermous/lazzaroni:output",
        "biomorphic/reinstitute/endospermous/sirdar:output",
        "biomorphic/semitransept/endospermous/bleuler:output",
        "biomorphic/reinstitute/differen/wrannock:output",
        "biomorphic/semitransept/endospermous/algonkins:output",
        "biomorphic/reinstitute/endospermous/draftsman:output",
        "biomorphic/semitransept/endospermous/spetch:output",
        "nonsovereign/endospermous/glimes:output",
        "biomorphic/semitransept/endospermous/mesochilium:output",
        "biomorphic/reinstitute/endospermous/reemphasized:output",
        "biomorphic/untellable/surprise/pursuant:output",
        "biomorphic/fetwa/reitman/preopinion:output",
        "biomorphic/semitransept/endospermous/herreid:output",
        "biomorphic/reinstitute/forsythe/besmutting:output",
        "biomorphic/coarsest/reitman/arraying:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"nonsovereign_uncerated_noncock_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["nonsovereign_uncerated_noncock_{chroot}/common_scripts/run_build.sh", "{chroot}", "nonsovereign_uncerated_noncock_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
