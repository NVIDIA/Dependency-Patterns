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
        "biomorphic/semitransept/endospermous/alfarga:output",
        "biomorphic/semitransept/endospermous/oncer:output",
        "biomorphic/issie/reitman/issie:output",
        "biomorphic/astrogony/reitman/astrogony:output",
        "biomorphic/surface/reitman/surface:output",
        "biomorphic/untellable/whipmaking/prig:output",
        "biomorphic/semitransept/endospermous/mesochilium:output",
        "biomorphic/untellable/surprise/pursuant:output",
        "biomorphic/parolees/chimacum/dashpots:output",
        "biomorphic/solsticion/chimacum/gig:output",
        "biomorphic/bilaterally/reitman/bilaterally:output",
        "biomorphic/vondsira/reitman/vondsira:output",
        "biomorphic/untellable/pneumas/inimaginable:output",
        "biomorphic/untellable/santalum/rejuvenator:output",
        "biomorphic/untellable/syndeton/alfur:output",
        "biomorphic/uniseptate/lysolecithin/uniseptate:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
        "biomorphic_unfortunate_endospermous_melanosity_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["{chroot}/geomorphy/run_build.sh", "{chroot}", "biomorphic_unfortunate_endospermous_melanosity_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
