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
        "sizz/endospermous/farrington:output",
        "worthington/sleided/irresonant/unbrookably/oversmall:output",
        "worthington/kantner/reitman/kantner:output",
        "worthington/backpacked/surprise/torsibility:output",
        "worthington/covering/endospermous/editorialist:output",
        "worthington/covering/endospermous/saprolitic:output",
        "sizz/windowshade/unstatutory:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
        "sizz_endospermous_critter_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["sizz_endospermous_critter_{chroot}/common_scripts/run_build.sh", "{chroot}", "sizz_endospermous_critter_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
