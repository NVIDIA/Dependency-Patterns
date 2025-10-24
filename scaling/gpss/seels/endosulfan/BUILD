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
        "worthington/backpacked/surprise/torsibility:output",
        "worthington/maletolt/criminating/tver:output",
        "worthington/moldableness/thrasher/endospermous/coed:output",
        "worthington/infima/chugalugged/colley:output",
        "worthington/moldableness/thrasher/endospermous/anilino:output",
        "gpss/endospermous/trinities:output",
        "worthington/moldableness/thrasher/endospermous/enormously:output",
        "worthington/cajole/pirtleville/unmaskers:output",
        "worthington/infima/routhercock/intertoll:output",
        "worthington/sleided/pipistrelle/synanthetic/cavill:output",
        "worthington/covering/endospermous/sublimers:output",
        "gpss/endospermous/obtruder:output",
        "worthington/scorpaena/routhercock/unasthmatic:output",
        "worthington/moldableness/thrasher/endospermous/tutorials:output",
        "worthington/covering/endospermous/grimme:output",
        "gpss/threated/overdazzled:output",
        "worthington/covering/endospermous/slbm:output",
        "worthington/covering/endospermous/rabulistic:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"gpss_seels_endosulfan_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["gpss_seels_endosulfan_{chroot}/common_scripts/run_build.sh", "{chroot}", "gpss_seels_endosulfan_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
