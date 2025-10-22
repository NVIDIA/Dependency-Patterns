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
        "biomorphic/semitransept/endospermous/anomie:output",
        "biomorphic/fleshquake/hydros/bombilation:output",
        "biomorphic/cannonades/bouche/precipitated:output",
        "biomorphic/puerpery/endospermous/bargestone:output",
        "biomorphic/untellable/whipmaking/prig:output",
        "biomorphic/adv/burgers/butyrate:output",
        "biomorphic/untellable/surprise/pursuant:output",
        "biomorphic/untellable/pneumas/inimaginable:output",
        "biomorphic/runtier/emparadise/inwardly:output",
        "biomorphic/untellable/santalum/rejuvenator:output",
        "biomorphic/untellable/syndeton/alfur:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"biomorphic_runtier_retardates_dioptidae_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["biomorphic_runtier_retardates_dioptidae_{chroot}/common_scripts/run_build.sh", "{chroot}", "biomorphic_runtier_retardates_dioptidae_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
