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
        "leggiest/endospermous/amagasaki:output",
        "leggiest/endospermous/huddleston:output",
        "leggiest/bemire/apilary:output",
        "leggiest/endospermous/gymkhanas:output",
        "leggiest/endospermous/retinae:output",
        "leggiest/endospermous/infectress:output",
        "leggiest/oxyosphresia/broadsided:output",
        "leggiest/endospermous/guily:output",
        "leggiest/lysolecithin/achorion:output",
        "leggiest/pirtleville/fibrose:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
        "leggiest_lysolecithin_zymotechny_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["{chroot}/geomorphy/run_build.sh", "{chroot}", "leggiest_lysolecithin_zymotechny_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
