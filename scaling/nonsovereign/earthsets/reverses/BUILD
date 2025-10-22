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
        "biomorphic/semitransept/endospermous/pelages:output",
        "biomorphic/undertakers/lysolecithin/undertakers:output",
        "biomorphic/semitransept/endospermous/thegn:output",
        "biomorphic/semitransept/endospermous/pining:output",
        "biomorphic/reinstitute/endospermous/lazzaroni:output",
        "nonsovereign/endospermous/squareman:output",
        "biomorphic/semitransept/endospermous/microbiosis:output",
        "nonsovereign/earner/teaboy:output",
        "biomorphic/semitransept/endospermous/biles:output",
        "biomorphic/semitransept/endospermous/algonkins:output",
        "biomorphic/picry/heliconist/tumorous:output",
        "nonsovereign/endospermous/glimes:output",
        "biomorphic/untellable/surprise/pursuant:output",
        "biomorphic/picry/curiosa/verbesina:output",
        "biomorphic/picry/agronomial/nonequivocal:output",
        "biomorphic/vondsira/reitman/vondsira:output",
        "biomorphic/reinstitute/endospermous/aetiologue:output",
        "biomorphic/undertakers/nontheologic/clouters:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"nonsovereign_earthsets_reverses_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["nonsovereign_earthsets_reverses_{chroot}/common_scripts/run_build.sh", "{chroot}", "nonsovereign_earthsets_reverses_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
