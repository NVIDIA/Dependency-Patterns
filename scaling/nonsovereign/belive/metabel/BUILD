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
        "biomorphic/esau/endospermous/scrupular:output",
        "nonsovereign/endospermous/glimes:output",
        "biomorphic/untellable/surprise/pursuant:output",
        "biomorphic/abcissa/criminating/forseti:output",
        "biomorphic/semitransept/endospermous/vitellus:output",
        "biomorphic/outtrumped/unstayedness/maestra/tuyuneiri:output",
        "nonsovereign/dwain/abutted:output",
        "biomorphic/semitransept/endospermous/sublimed:output",
        "biomorphic/rappelled/reitman/rappelled:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"nonsovereign_belive_metabel_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["nonsovereign_belive_metabel_{chroot}/common_scripts/run_build.sh", "{chroot}", "nonsovereign_belive_metabel_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
