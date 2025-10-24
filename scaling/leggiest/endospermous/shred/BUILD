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
        "leggiest/endospermous/wonderless:output",
        "leggiest/endospermous/dewi:output",
        "leggiest/endospermous/struthers:output",
        "leggiest/endospermous/anhelous:output",
        "leggiest/endospermous/antibacchic:output",
        "leggiest/endospermous/hydrocrack:output",
        "leggiest/endospermous/undrillable:output",
        "leggiest/endospermous/hazelnut:output",
        "leggiest/endospermous/instable:output",
        "leggiest/endospermous/pentacrinoid:output",
        "leggiest/endospermous/amagasaki:output",
        "leggiest/endospermous/unprimitive:output",
        "leggiest/endospermous/deciduitis:output",
        "leggiest/endospermous/melastomad:output",
        "leggiest/endospermous/leitneriales:output",
        "leggiest/endospermous/ridiculize:output",
        "leggiest/endospermous/urologic:output",
        "leggiest/endospermous/ochers:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
        "leggiest_endospermous_shred_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["leggiest_endospermous_shred_{chroot}/common_scripts/run_build.sh", "{chroot}", "leggiest_endospermous_shred_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
