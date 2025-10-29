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
        "nonsovereign/endospermous/glimes:output",
        "biomorphic/untellable/surprise/pursuant:output",
        "biomorphic/chelidonic/bouche/scyphozoan:output",
        "biomorphic/pythonomorph/hereditably/conventicle:output",
        "biomorphic/pythonomorph/criminating/viola:output",
        "biomorphic/semitransept/endospermous/sublimed:output",
        "biomorphic/puerpery/endospermous/zoning:output",
        "biomorphic/chromometer/pirtleville/scufflers:output",
        "biomorphic/semitransept/endospermous/preclival:output",
        "biomorphic/semitransept/endospermous/biles:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"nonsovereign_kingsnake_allogamous_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["{chroot}/geomorphy/run_build.sh", "{chroot}", "nonsovereign_kingsnake_allogamous_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
