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
        "biomorphic/undertakers/lysolecithin/undertakers:output",
        "biomorphic/esau/endospermous/scrupular:output",
        "biomorphic/semitransept/endospermous/thegn:output",
        "biomorphic/puerpery/endospermous/scandalizer:output",
        "biomorphic/puerpery/endospermous/bargestone:output",
        "biomorphic/puerpery/endospermous/zoning:output",
        "biomorphic/untellable/whipmaking/prig:output",
        "biomorphic/semitransept/endospermous/biles:output",
        "biomorphic/semitransept/endospermous/algonkins:output",
        "nonsovereign/endospermous/glimes:output",
        "biomorphic/semitransept/endospermous/forethought:output",
        "biomorphic/untellable/surprise/pursuant:output",
        "biomorphic/chromometer/pirtleville/scufflers:output",
        "biomorphic/fanchie/recountless/fanchie:output",
        "biomorphic/untellable/pneumas/inimaginable:output",
        "biomorphic/runtier/emparadise/inwardly:output",
        "biomorphic/untellable/santalum/rejuvenator:output",
        "biomorphic/untellable/syndeton/alfur:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"nonsovereign_unconfining_subpilosity_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["nonsovereign_unconfining_subpilosity_{chroot}/common_scripts/run_build.sh", "{chroot}", "nonsovereign_unconfining_subpilosity_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
