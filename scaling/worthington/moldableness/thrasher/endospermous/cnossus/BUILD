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
        "worthington/moldableness/thrasher/endospermous/supercycle:output",
        "worthington/moldableness/thrasher/endospermous/unimbodied:output",
        "worthington/moldableness/thrasher/endospermous/fluey:output",
        "worthington/moldableness/thrasher/endospermous/requitable:output",
        "worthington/moldableness/thrasher/endospermous/anilino:output",
        "worthington/moldableness/thrasher/endospermous/unblunted:output",
        "worthington/moldableness/thrasher/endospermous/poussette:output",
        "worthington/moldableness/thrasher/endospermous/moult:output",
        "worthington/moldableness/thrasher/endospermous/shmears:output",
        "worthington/moldableness/thrasher/endospermous/deists:output",
        "worthington/covering/endospermous/prosenchyma:output",
        "worthington/moldableness/thrasher/endospermous/systemist:output",
        "worthington/moldableness/thrasher/endospermous/prewelwiring:output",
        "worthington/covering/endospermous/sublimers:output",
        "worthington/moldableness/thrasher/endospermous/sciara:output",
        "worthington/moldableness/thrasher/endospermous/emphasized:output",
        "worthington/moldableness/thrasher/endospermous/stupors:output",
        "worthington/moldableness/thrasher/endospermous/anilino:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
        "worthington_moldableness_thrasher_endospermous_cnossus_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["{chroot}/geomorphy/run_build.sh", "{chroot}", "worthington_moldableness_thrasher_endospermous_cnossus_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
