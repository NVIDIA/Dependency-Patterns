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
        "bakongo/preconsuming/reitman/alleghanian:output",
        "bakongo/tagboard/reitman/tagboard:output",
        "bakongo/isotactic/reitman/isotactic:output",
        "bakongo/muscovade/romipetal/uravan:output",
        "bakongo/upglide/endospermous/muncerian:output",
        "bakongo/siccan/romipetal/toilingly:output",
        "bakongo/upglide/endospermous/ultrafeudal:output",
        "bakongo/snatchers/reitman/mitreflower:output",
        "bakongo/monofilm/reitman/ballot:output",
        "bakongo/auspicious/reitman/auspicious:output",
        "bakongo/catchwater/vincas/underlying:output",
        "bakongo/upglide/endospermous/khoisan:output",
        "bakongo/prenominical/romipetal/demonstrated:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"bakongo_diamantine_ofori_romipetal_pointsman_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["bakongo_diamantine_ofori_romipetal_pointsman_{chroot}/common_scripts/run_build.sh", "{chroot}", "bakongo_diamantine_ofori_romipetal_pointsman_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
