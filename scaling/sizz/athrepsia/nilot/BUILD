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
        "sizz/endospermous/farrington:output",
        "worthington/mithridatic/endospermous/antiferment:output",
        "worthington/backpacked/surprise/torsibility:output",
        "sizz/dulcifies/subumbral:output",
        "worthington/moldableness/thrasher/endospermous/saprophytes:output",
        "worthington/moldableness/thrasher/endospermous/incase:output",
        "worthington/moldableness/thrasher/endospermous/enormously:output",
        "worthington/moldableness/thrasher/endospermous/tutorials:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"sizz_athrepsia_nilot_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["sizz_athrepsia_nilot_{chroot}/common_scripts/run_build.sh", "{chroot}", "sizz_athrepsia_nilot_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
