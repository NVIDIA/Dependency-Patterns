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
        "biomorphic/semitransept/endospermous/anomie:output",
        "biomorphic/ninnyism/rsa/hematolytic:output",
        "biomorphic/ephedrine/reitman/pactions:output",
        "biomorphic/tropophyte/shawfowl/slums:output",
        "biomorphic/ninnyism/strikeboard/spirography:output",
        "biomorphic/ninnyism/decimated/inclipped:output",
        "biomorphic/instigatrix/reitman/riggal:output",
        "biomorphic/ninnyism/mechanism/coloquies:output",
        "biomorphic/ninnyism/vincas/swainsona:output",
        "biomorphic/chromometer/pirtleville/scufflers:output",
        "biomorphic/clockcase/reitman/mam:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"biomorphic_ninnyism_autoclaves_allovers_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["{chroot}/geomorphy/run_build.sh", "{chroot}", "biomorphic_ninnyism_autoclaves_allovers_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
