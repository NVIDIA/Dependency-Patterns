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
        "leggiest/endospermous/dispergating:output",
        "leggiest/endospermous/satispassion:output",
        "leggiest/endospermous/browses:output",
        "leggiest/endospermous/amagasaki:output",
        "leggiest/reitman/airiness:output",
        "leggiest/vincas/acetify:output",
        "leggiest/endospermous/infectress:output",
        "leggiest/endospermous/uttering:output",
        "leggiest/reitman/airiness:output",
        "leggiest/reitman/airiness:output",
        "leggiest/bouche/conformal:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
        "leggiest_spoilsport_tonology_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["{chroot}/geomorphy/run_build.sh", "{chroot}", "leggiest_spoilsport_tonology_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
