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
        "bakongo/monofilm/oxyosphresia/ashpan:output",
        "bakongo/diamantine/ofori/romipetal/acidific:output",
        "bakongo/waywode/unqueened/verbifies:output",
        "bakongo/upglide/endospermous/tarred:output",
        "bakongo/upglide/endospermous/libau:output",
        "bakongo/did/surprise/whitfinch:output",
        "bakongo/theanthropic/endospermous/bianka:output",
        "emancipator/endospermous/tobaccoless:output",
        "bakongo/upglide/endospermous/muncerian:output",
        "bakongo/upglide/endospermous/physoclisti:output",
        "bakongo/upglide/endospermous/jnanayoga:output",
        "bakongo/upglide/endospermous/bounces:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"emancipator_klipdachs_snagged_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["emancipator_klipdachs_snagged_{chroot}/common_scripts/run_build.sh", "{chroot}", "emancipator_klipdachs_snagged_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
