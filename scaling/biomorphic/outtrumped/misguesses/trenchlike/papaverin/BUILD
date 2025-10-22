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
        "biomorphic/fetwa/bouche/subpar:output",
        "biomorphic/semitransept/endospermous/anomie:output",
        "biomorphic/untellable/dustpans/anthoxanthum:output",
        "biomorphic/fetwa/shinguard/phrynid:output",
        "biomorphic/fetwa/impartialism/halopsyche:output",
        "biomorphic/puerpery/endospermous/zoning:output",
        "biomorphic/puerpery/endospermous/bargestone:output",
        "biomorphic/untellable/whipmaking/prig:output",
        "biomorphic/fetwa/criminating/sedentary:output",
        "biomorphic/untellable/surprise/pursuant:output",
        "biomorphic/fetwa/reitman/preopinion:output",
        "biomorphic/fetwa/gildford/cevian:output",
        "biomorphic/untellable/pneumas/inimaginable:output",
        "biomorphic/fetwa/uppertendom/iter:output",
        "biomorphic/untellable/santalum/rejuvenator:output",
        "biomorphic/untellable/syndeton/alfur:output",
        "biomorphic/cottontails/reitman/cottontails:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"biomorphic_outtrumped_misguesses_trenchlike_papaverin_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["biomorphic_outtrumped_misguesses_trenchlike_papaverin_{chroot}/common_scripts/run_build.sh", "{chroot}", "biomorphic_outtrumped_misguesses_trenchlike_papaverin_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
