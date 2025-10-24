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
        "biomorphic/semitransept/endospermous/pelages:output",
        "biomorphic/semitransept/endospermous/thegn:output",
        "biomorphic/reinstitute/romipetal/amazilia:output",
        "biomorphic/astrogony/reitman/astrogony:output",
        "biomorphic/shogun/mdiv/pureness:output",
        "biomorphic/semitransept/endospermous/algonkins:output",
        "nonsovereign/routhercock/billons:output",
        "biomorphic/semitransept/endospermous/mademoiselle:output",
        "biomorphic/shogun/wilinski/precentral:output",
        "biomorphic/reinstitute/endospermous/reemphasized:output",
        "biomorphic/untellable/surprise/pursuant:output",
        "biomorphic/semitransept/endospermous/sublimed:output",
        "biomorphic/semitransept/endospermous/unsacerdotal:output",
        "biomorphic/shogun/hereditably/glowed:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"nonsovereign_monogenies_bundestag_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["nonsovereign_monogenies_bundestag_{chroot}/common_scripts/run_build.sh", "{chroot}", "nonsovereign_monogenies_bundestag_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
