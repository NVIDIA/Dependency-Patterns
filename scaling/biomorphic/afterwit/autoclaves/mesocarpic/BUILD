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
        "biomorphic/afterwit/rsa/kirsches:output",
        "biomorphic/tropophyte/shawfowl/slums:output",
        "biomorphic/ephedrine/reitman/pactions:output",
        "biomorphic/instigatrix/reitman/riggal:output",
        "biomorphic/afterwit/strikeboard/scientistic:output",
        "biomorphic/afterwit/vincas/bradylexia:output",
        "biomorphic/afterwit/decimated/goombahs:output",
        "biomorphic/afterwit/mechanism/diner:output",
        "biomorphic/chromometer/pirtleville/scufflers:output",
        "biomorphic/clockcase/reitman/mam:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"biomorphic_afterwit_autoclaves_mesocarpic_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["biomorphic_afterwit_autoclaves_mesocarpic_{chroot}/common_scripts/run_build.sh", "{chroot}", "biomorphic_afterwit_autoclaves_mesocarpic_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
