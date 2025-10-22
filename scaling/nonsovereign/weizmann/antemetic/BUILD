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
        "biomorphic/semitransept/endospermous/pelages:output",
        "biomorphic/semitransept/endospermous/thegn:output",
        "biomorphic/reinstitute/romipetal/amazilia:output",
        "biomorphic/issie/reitman/issie:output",
        "nonsovereign/earner/teaboy:output",
        "biomorphic/semitransept/endospermous/biles:output",
        "biomorphic/semitransept/endospermous/algonkins:output",
        "biomorphic/picry/heliconist/tumorous:output",
        "nonsovereign/endospermous/glimes:output",
        "biomorphic/semitransept/endospermous/mesochilium:output",
        "biomorphic/untellable/surprise/pursuant:output",
        "biomorphic/picry/curiosa/verbesina:output",
        "biomorphic/semitransept/endospermous/sublimed:output",
        "biomorphic/vondsira/reitman/vondsira:output",
        "biomorphic/picry/criminating/pyrophilia:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"nonsovereign_weizmann_antemetic_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["nonsovereign_weizmann_antemetic_{chroot}/common_scripts/run_build.sh", "{chroot}", "nonsovereign_weizmann_antemetic_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
