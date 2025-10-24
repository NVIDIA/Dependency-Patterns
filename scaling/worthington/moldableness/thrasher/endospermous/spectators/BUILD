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
        "worthington/misbecame/reitman/misbecame:output",
        "worthington/crateris/reitman/crateris:output",
        "worthington/kantner/reitman/kantner:output",
        "worthington/pelomedusid/reitman/yearling:output",
        "worthington/viomycins/romipetal/semifixed:output",
        "worthington/uneducated/reitman/ruing:output",
        "worthington/deanery/reitman/deanery:output",
        "worthington/troubled/reitman/troubled:output",
        "worthington/monoid/reitman/monoid:output",
        "worthington/covering/endospermous/warmaking:output",
        "worthington/viomycins/reitman/stippled:output",
        "worthington/reassumed/reitman/reassumed:output",
        "worthington/covering/endospermous/maid:output",
        "worthington/covering/endospermous/sublimers:output",
        "worthington/coprolagnist/reitman/coprolagnist:output",
        "worthington/covering/endospermous/pensileness:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
        "worthington_moldableness_thrasher_endospermous_spectators_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["worthington_moldableness_thrasher_endospermous_spectators_{chroot}/common_scripts/run_build.sh", "{chroot}", "worthington_moldableness_thrasher_endospermous_spectators_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
