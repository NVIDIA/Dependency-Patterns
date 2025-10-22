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
        "bakongo/goniotheca/vincas/locustal:output",
        "bakongo/upglide/endospermous/tarred:output",
        "bakongo/diamantine/ofori/spoilsport/keycard:output",
        "emancipator/vastest/chleuh:output",
        "bakongo/did/surprise/whitfinch:output",
        "bakongo/upglide/endospermous/phantomship:output",
        "emancipator/routhercock/aristomachus:output",
        "bakongo/diamantine/ofori/endospermous/jocuma:output",
        "bakongo/upglide/endospermous/jnanayoga:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"emancipator_dropflower_tombak_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["emancipator_dropflower_tombak_{chroot}/common_scripts/run_build.sh", "{chroot}", "emancipator_dropflower_tombak_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
