# SPDX-FileCopyrightText: Copyright (c) 2025 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
# SPDX-License-Identifier: MIT

shell_sources(
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
        "biomorphic/esau/endospermous/scrupular:output",
        "biomorphic/untellable/dustpans/anthoxanthum:output",
        "biomorphic/astrogony/reitman/astrogony:output",
        "biomorphic/ayutthaya/reitman/ayutthaya:output",
        "biomorphic/puerpery/endospermous/bargestone:output",
        "biomorphic/untellable/whipmaking/prig:output",
        "biomorphic/rehash/reitman/rehash:output",
        "biomorphic/untellable/surprise/pursuant:output",
        "biomorphic/kerchoo/triturature/kilometer:output",
        "biomorphic/capitalizer/burgers/innovator:output",
        "biomorphic/fetwa/reitman/preopinion:output",
        "biomorphic/snoozier/criminating/absenters:output",
        "biomorphic/arrobas/burgers/depravingly:output",
        "biomorphic/semitransept/endospermous/toxicologic:output",
        "biomorphic/untellable/pneumas/inimaginable:output",
        "biomorphic/olivet/reitman/olivet:output",
        "biomorphic/untellable/santalum/rejuvenator:output",
        "biomorphic/untellable/syndeton/alfur:output",
        "biomorphic/cottontails/reitman/cottontails:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"biomorphic_coregence_launce_coregence_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["biomorphic_coregence_launce_coregence_{chroot}/common_scripts/run_build.sh", "{chroot}", "biomorphic_coregence_launce_coregence_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
