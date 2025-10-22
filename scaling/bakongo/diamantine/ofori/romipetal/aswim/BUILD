# SPDX-FileCopyrightText: Copyright (c) 2025 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
# SPDX-License-Identifier: MIT

shell_sources(
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
        "bakongo/ribaldly/vincas/washability:output",
        "bakongo/upglide/endospermous/eosophobia:output",
        "bakongo/diamantine/ofori/splachnaceae/pelotherapy:output",
        "bakongo/upglide/endospermous/ultrafeudal:output",
        "bakongo/monofilm/reitman/ballot:output",
        "bakongo/upglide/endospermous/espier:output",
        "bakongo/ribaldly/reitman/loth:output",
        "bakongo/technicality/romipetal/kinloch:output",
        "bakongo/upglide/endospermous/phantomship:output",
        "bakongo/upglide/endospermous/khoisan:output",
        "bakongo/diamantine/ofori/endospermous/jocuma:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"bakongo_diamantine_ofori_romipetal_aswim_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["bakongo_diamantine_ofori_romipetal_aswim_{chroot}/common_scripts/run_build.sh", "{chroot}", "bakongo_diamantine_ofori_romipetal_aswim_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
