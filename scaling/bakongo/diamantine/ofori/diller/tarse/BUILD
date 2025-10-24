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
        "bakongo/diamantine/ofori/romipetal/acidific:output",
        "bakongo/acronyc/criminating/cothurns:output",
        "bakongo/upglide/endospermous/unchased:output",
        "bakongo/akroter/reitman/akroter:output",
        "bakongo/burfish/reitman/burfish:output",
        "bakongo/upglide/endospermous/sodio:output",
        "bakongo/acronyc/heliconist/nourishingly:output",
        "bakongo/upglide/endospermous/unflesh:output",
        "bakongo/upglide/endospermous/khoisan:output",
        "bakongo/acronyc/curiosa/abbacomes:output",
        "bakongo/monofilm/reitman/ballot:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"bakongo_diamantine_ofori_diller_tarse_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["bakongo_diamantine_ofori_diller_tarse_{chroot}/common_scripts/run_build.sh", "{chroot}", "bakongo_diamantine_ofori_diller_tarse_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
