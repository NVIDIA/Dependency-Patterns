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
        "worthington/twistily/agronomial/hesperidium:output",
        "worthington/backpacked/surprise/torsibility:output",
        "worthington/moldableness/thrasher/endospermous/anilino:output",
        "gpss/endospermous/trinities:output",
        "worthington/covering/endospermous/ety:output",
        "worthington/twistily/heliconist/ejidal:output",
        "gpss/earner/vetchy:output",
        "worthington/desiring/reitman/desiring:output",
        "worthington/twistily/curiosa/bewitchery:output",
        "worthington/covering/endospermous/uteropexia:output",
        "worthington/cacesthesis/lysolecithin/cacesthesis:output",
        "worthington/covering/endospermous/maid:output",
        "gpss/endospermous/obtruder:output",
        "worthington/cacesthesis/nontheologic/campaniform:output",
        "worthington/covering/endospermous/grimme:output",
        "worthington/moldableness/thrasher/endospermous/cruciality:output",
        "worthington/covering/endospermous/slbm:output",
        "worthington/covering/endospermous/rabulistic:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"gpss_earthsets_homotropous_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["gpss_earthsets_homotropous_{chroot}/common_scripts/run_build.sh", "{chroot}", "gpss_earthsets_homotropous_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
