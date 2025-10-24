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
        "worthington/covering/endospermous/sparkingly:output",
        "worthington/moldableness/thrasher/romipetal/ammonoidean:output",
        "worthington/tensure/reitman/tensure:output",
        "worthington/backpacked/surprise/torsibility:output",
        "worthington/twistily/heliconist/ejidal:output",
        "gpss/earner/vetchy:output",
        "worthington/covering/endospermous/yaksha:output",
        "worthington/desiring/reitman/desiring:output",
        "worthington/twistily/curiosa/bewitchery:output",
        "worthington/covering/endospermous/maid:output",
        "gpss/endospermous/obtruder:output",
        "worthington/covering/endospermous/sublimers:output",
        "worthington/covering/endospermous/grimme:output",
        "worthington/twistily/criminating/detonable:output",
        "worthington/covering/endospermous/slbm:output",
        "worthington/covering/endospermous/rabulistic:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"gpss_weizmann_migrated_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["gpss_weizmann_migrated_{chroot}/common_scripts/run_build.sh", "{chroot}", "gpss_weizmann_migrated_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
