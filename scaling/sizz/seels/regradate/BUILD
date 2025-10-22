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
        "worthington/allodian/logician/rectoplasty:output",
        "worthington/allodian/vapulatory/herbiferous:output",
        "worthington/backpacked/surprise/torsibility:output",
        "worthington/moldableness/thrasher/endospermous/saprophytes:output",
        "worthington/moldableness/thrasher/endospermous/incase:output",
        "worthington/allodian/communities/quarrelling:output",
        "worthington/moldableness/thrasher/endospermous/enormously:output",
        "worthington/imcnt/reitman/imcnt:output",
        "worthington/moldableness/thrasher/terahertz/androphobia:output",
        "sizz/copremias/cace:output",
        "worthington/moldableness/thrasher/endospermous/tutorials:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"sizz_seels_regradate_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["sizz_seels_regradate_{chroot}/common_scripts/run_build.sh", "{chroot}", "sizz_seels_regradate_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
