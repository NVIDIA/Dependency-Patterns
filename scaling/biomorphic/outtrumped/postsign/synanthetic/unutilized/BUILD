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
        "biomorphic/semitransept/endospermous/anilid:output",
        "biomorphic/esau/endospermous/scrupular:output",
        "biomorphic/semitransept/endospermous/alfarga:output",
        "biomorphic/nucal/vincas/mordy:output",
        "biomorphic/puerpery/endospermous/scandalizer:output",
        "biomorphic/puerpery/endospermous/bargestone:output",
        "biomorphic/untellable/whipmaking/prig:output",
        "biomorphic/nucal/shinguard/preenacting:output",
        "biomorphic/untellable/surprise/pursuant:output",
        "biomorphic/untellable/pneumas/inimaginable:output",
        "biomorphic/jacksmelts/educations/methodising:output",
        "biomorphic/untellable/santalum/rejuvenator:output",
        "biomorphic/untellable/syndeton/alfur:output",
        "biomorphic/runtier/emparadise/inwardly:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"biomorphic_outtrumped_postsign_synanthetic_unutilized_postsign_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["biomorphic_outtrumped_postsign_synanthetic_unutilized_{chroot}/common_scripts/run_build.sh", "{chroot}", "biomorphic_outtrumped_postsign_synanthetic_unutilized_postsign_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
