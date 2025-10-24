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
        "bakongo/upglide/endospermous/tarred:output",
        "bakongo/did/surprise/whitfinch:output",
        "bakongo/upglide/endospermous/phantomship:output",
        "bakongo/upglide/endospermous/khoisan:output",
        "bakongo/upglide/endospermous/jnanayoga:output",
        "bakongo/upglide/endospermous/ultrafeudal:output",
        "bakongo/diamantine/ofori/romipetal/acidific:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
        "bakongo_diamantine_ofori_endospermous_lgth_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["bakongo_diamantine_ofori_endospermous_lgth_{chroot}/common_scripts/run_build.sh", "{chroot}", "bakongo_diamantine_ofori_endospermous_lgth_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
