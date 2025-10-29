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
        "sizz/drawbar/coagulate:output",
        "worthington/backpacked/surprise/torsibility:output",
        "sizz/haec/haworth:output",
        "sizz/hearsing/hatbrush:output",
        "sizz/ims/scrouged:output",
        "sizz/dylan/speechment:output",
        "sizz/banquettes/stalworth:output",
        "sizz/ioxus/nonpliably:output",
        "sizz/hormonology/skel:output",
        "sizz/limnanth/mailbox:output",
        "sizz/benchfellow/danagla:output",
        "sizz/plessimetric/dockization:output",
        "sizz/creamlike/gudgeon:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"sizz_numbered_sassafrack_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["{chroot}/geomorphy/run_build.sh", "{chroot}", "sizz_numbered_sassafrack_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
