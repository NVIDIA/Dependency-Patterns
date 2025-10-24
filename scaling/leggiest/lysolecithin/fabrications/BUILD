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
        "leggiest/bemire/apilary:output",
        "leggiest/lysolecithin/achorion:output",
        "leggiest/urinalist/caryatic:output",
        "leggiest/unqueened/dolous:output",
        "leggiest/bemire/apilary:output",
        "leggiest/unqueened/dolous:output",
        "leggiest/lysolecithin/achorion:output",
        "leggiest/endospermous/guily:output",
        "leggiest/kufiyeh/bathsheeb:output",
        "leggiest/gnathostomi/lobularly:output",
        "leggiest/unqueened/dolous:output",
        "leggiest/overrigid/precourse:output",
        "leggiest/endospermous/amagasaki:output",
        "leggiest/lealness/bluism:output",
        "leggiest/endospermous/gymkhanas:output",
        "leggiest/oxyosphresia/broadsided:output",
        "leggiest/manifestive/anglimaniac:output",
        "leggiest/pirtleville/fibrose:output",
        "leggiest/drek/broaching:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
        "leggiest_lysolecithin_fabrications_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["leggiest_lysolecithin_fabrications_{chroot}/common_scripts/run_build.sh", "{chroot}", "leggiest_lysolecithin_fabrications_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
