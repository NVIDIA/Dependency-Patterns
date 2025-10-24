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
        "biomorphic/esau/endospermous/etape:output",
        "nonsovereign/prediscover/outbuilds:output",
        "biomorphic/untellable/whipmaking/prig:output",
        "nonsovereign/mathura/torta:output",
        "nonsovereign/endospermous/nonflyable:output",
        "biomorphic/esau/endospermous/franc:output",
        "nonsovereign/minivers/summertown:output",
        "nonsovereign/supervenient/stationarily:output",
        "biomorphic/untellable/surprise/pursuant:output",
        "biomorphic/chromometer/pirtleville/scufflers:output",
        "biomorphic/untellable/pneumas/inimaginable:output",
        "biomorphic/untellable/santalum/rejuvenator:output",
        "biomorphic/untellable/syndeton/alfur:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"nonsovereign_throneless_emanatistic_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["nonsovereign_throneless_emanatistic_{chroot}/common_scripts/run_build.sh", "{chroot}", "nonsovereign_throneless_emanatistic_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
