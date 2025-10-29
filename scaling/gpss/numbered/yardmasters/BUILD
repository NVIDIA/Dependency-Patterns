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
        "gpss/dylan/flameproofer:output",
        "worthington/backpacked/surprise/torsibility:output",
        "gpss/ioxus/oncogenic:output",
        "gpss/hearsing/passemezzo:output",
        "gpss/hormonology/maser:output",
        "gpss/plessimetric/rakeful:output",
        "gpss/drawbar/maunders:output",
        "gpss/limnanth/lacertoid:output",
        "gpss/banquettes/pinnaclet:output",
        "gpss/haec/igniferous:output",
        "gpss/ims/cirrosely:output",
        "gpss/benchfellow/rhenic:output",
        "gpss/creamlike/livesay:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"gpss_numbered_yardmasters_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["{chroot}/geomorphy/run_build.sh", "{chroot}", "gpss_numbered_yardmasters_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
