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
        "bakongo/barbirolli/ermanno/greennesses:output",
        "bakongo/barbirolli/criminating/woll:output",
        "bakongo/diamantine/ofori/romipetal/acidific:output",
        "bakongo/forslake/reitman/forslake:output",
        "bakongo/ephedra/shover/nulliporous:output",
        "bakongo/upglide/endospermous/fixable:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"bakongo_diamantine_ofori_lukaszewicz_atalie_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["bakongo_diamantine_ofori_lukaszewicz_atalie_{chroot}/common_scripts/run_build.sh", "{chroot}", "bakongo_diamantine_ofori_lukaszewicz_atalie_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
