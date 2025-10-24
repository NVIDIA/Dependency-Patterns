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
        "biomorphic/untellable/dustpans/anthoxanthum:output",
        "biomorphic/esau/endospermous/scrupular:output",
        "biomorphic/astrogony/reitman/astrogony:output",
        "biomorphic/esau/endospermous/mares:output",
        "biomorphic/pythonomorph/criminating/viola:output",
        "biomorphic/puerpery/endospermous/acalephe:output",
        "biomorphic/chromometer/lysolecithin/savelha:output",
        "biomorphic/puerpery/endospermous/bargestone:output",
        "biomorphic/untellable/whipmaking/prig:output",
        "biomorphic/fetwa/oxyosphresia/solanum:output",
        "biomorphic/puerpery/endospermous/hydrosomata:output",
        "biomorphic/chelidonic/bouche/scyphozoan:output",
        "biomorphic/untellable/surprise/pursuant:output",
        "biomorphic/semitransept/endospermous/labelle:output",
        "biomorphic/fetwa/reitman/preopinion:output",
        "biomorphic/regranted/inadeptness/cembalist:output",
        "biomorphic/untellable/pneumas/inimaginable:output",
        "biomorphic/untellable/santalum/rejuvenator:output",
        "biomorphic/untellable/syndeton/alfur:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"biomorphic_regranted_slickest_colleaguing_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["biomorphic_regranted_slickest_colleaguing_{chroot}/common_scripts/run_build.sh", "{chroot}", "biomorphic_regranted_slickest_colleaguing_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
