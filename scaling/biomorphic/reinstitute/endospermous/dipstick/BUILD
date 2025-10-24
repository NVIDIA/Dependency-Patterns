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
        "biomorphic/maduro/reitman/agraphic:output",
        "biomorphic/gelsemia/reitman/gelsemia:output",
        "biomorphic/underbreath/reitman/underbreath:output",
        "biomorphic/semitransept/endospermous/bleuler:output",
        "biomorphic/polentas/bouche/wardress:output",
        "biomorphic/semitransept/endospermous/distention:output",
        "biomorphic/sewerlike/reitman/sewerlike:output",
        "biomorphic/rewey/reitman/sturionine:output",
        "biomorphic/romonda/reitman/romonda:output",
        "biomorphic/vondsira/reitman/vondsira:output",
        "biomorphic/semitransept/endospermous/unsacerdotal:output",
        "biomorphic/olivet/reitman/olivet:output",
        "biomorphic/semitransept/endospermous/wearyingly:output",
        "biomorphic/cottontails/reitman/cottontails:output",
        "biomorphic/oleron/reitman/medicomoral:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
        "biomorphic_reinstitute_endospermous_dipstick_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["biomorphic_reinstitute_endospermous_dipstick_{chroot}/common_scripts/run_build.sh", "{chroot}", "biomorphic_reinstitute_endospermous_dipstick_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
