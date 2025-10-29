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
        "leggiest/endospermous/huddleston:output",
        "leggiest/unqueened/dolous:output",
        "leggiest/endospermous/guily:output",
        "leggiest/gnathostomi/lobularly:output",
        "leggiest/kufiyeh/bathsheeb:output",
        "leggiest/unqueened/dolous:output",
        "leggiest/endospermous/amagasaki:output",
        "leggiest/lealness/bluism:output",
        "leggiest/endospermous/gymkhanas:output",
        "leggiest/reitman/airiness:output",
        "leggiest/pirtleville/fibrose:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
        "leggiest_lysolecithin_prehominid_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["{chroot}/geomorphy/run_build.sh", "{chroot}", "leggiest_lysolecithin_prehominid_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
