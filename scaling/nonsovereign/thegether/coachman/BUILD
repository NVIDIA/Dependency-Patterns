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
        "biomorphic/outtrumped/exoclinal/unflexed/deflorations:output",
        "nonsovereign/kingsnake/allogamous:output",
        "nonsovereign/endospermous/glimes:output",
        "biomorphic/untellable/surprise/pursuant:output",
        "biomorphic/pythonomorph/criminating/viola:output",
        "biomorphic/semitransept/endospermous/sublimed:output",
        "biomorphic/puerpery/endospermous/zoning:output",
        "biomorphic/semitransept/endospermous/selvas:output",
        "biomorphic/semitransept/endospermous/preclival:output",
        "biomorphic/semitransept/endospermous/biles:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"nonsovereign_thegether_coachman_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["{chroot}/geomorphy/run_build.sh", "{chroot}", "nonsovereign_thegether_coachman_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
