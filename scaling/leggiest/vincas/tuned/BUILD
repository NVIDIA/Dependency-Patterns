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
        "leggiest/lysolecithin/achorion:output",
        "leggiest/bemire/apilary:output",
        "leggiest/unqueened/dolous:output",
        "leggiest/endospermous/guily:output",
        "leggiest/kufiyeh/bathsheeb:output",
        "leggiest/gnathostomi/lobularly:output",
        "leggiest/unqueened/dolous:output",
        "leggiest/endospermous/amagasaki:output",
        "leggiest/bemire/apilary:output",
        "leggiest/lealness/bluism:output",
        "leggiest/endospermous/gymkhanas:output",
        "leggiest/oxyosphresia/broadsided:output",
        "leggiest/lysolecithin/achorion:output",
        "leggiest/pirtleville/fibrose:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
        "leggiest_vincas_tuned_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["{chroot}/geomorphy/run_build.sh", "{chroot}", "leggiest_vincas_tuned_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
