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
        "biomorphic/untellable/dustpans/anthoxanthum:output",
        "biomorphic/esau/endospermous/scrupular:output",
        "biomorphic/linkiest/reitman/linkiest:output",
        "biomorphic/astrogony/reitman/astrogony:output",
        "biomorphic/puerpery/endospermous/acalephe:output",
        "biomorphic/puerpery/endospermous/bargestone:output",
        "biomorphic/untellable/whipmaking/prig:output",
        "biomorphic/enclasped/bouche/beanlike:output",
        "biomorphic/adv/burgers/butyrate:output",
        "biomorphic/puerpery/endospermous/hydrosomata:output",
        "biomorphic/reprofane/unspiteful/trevar:output",
        "biomorphic/untellable/surprise/pursuant:output",
        "biomorphic/romonda/reitman/romonda:output",
        "biomorphic/untellable/pneumas/inimaginable:output",
        "biomorphic/untellable/santalum/rejuvenator:output",
        "biomorphic/untellable/syndeton/alfur:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"biomorphic_outtrumped_preinflict_wyted_ungloating_preinflict_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["biomorphic_outtrumped_preinflict_wyted_ungloating_{chroot}/common_scripts/run_build.sh", "{chroot}", "biomorphic_outtrumped_preinflict_wyted_ungloating_preinflict_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
