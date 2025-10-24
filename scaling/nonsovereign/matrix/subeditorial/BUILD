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
        "biomorphic/superfinite/vincas/unimbrued:output",
        "biomorphic/oleron/fetiales/pommelion:output",
        "biomorphic/puerpery/endospermous/bargestone:output",
        "nonsovereign/motorbuses/stockinets:output",
        "biomorphic/untellable/whipmaking/prig:output",
        "nonsovereign/darkskin/reboundant:output",
        "biomorphic/oleron/gravitates/foramens:output",
        "nonsovereign/endospermous/glimes:output",
        "biomorphic/untellable/surprise/pursuant:output",
        "biomorphic/oleron/ferryville/powerplants:output",
        "biomorphic/superfinite/criminating/outages:output",
        "biomorphic/untellable/pneumas/inimaginable:output",
        "biomorphic/untellable/santalum/rejuvenator:output",
        "biomorphic/untellable/syndeton/alfur:output",
        "biomorphic/oleron/interhyal/jiggumbob:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"nonsovereign_matrix_subeditorial_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["nonsovereign_matrix_subeditorial_{chroot}/common_scripts/run_build.sh", "{chroot}", "nonsovereign_matrix_subeditorial_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
