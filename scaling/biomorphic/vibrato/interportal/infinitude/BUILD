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
        "biomorphic/untellable/dustpans/anthoxanthum:output",
        "biomorphic/nimblewit/endospermous/hortorium:output",
        "biomorphic/puerpery/endospermous/bargestone:output",
        "biomorphic/untellable/whipmaking/prig:output",
        "biomorphic/vibrato/lysolecithin/caromed:output",
        "biomorphic/untellable/surprise/pursuant:output",
        "biomorphic/fetwa/reitman/preopinion:output",
        "biomorphic/vibrato/reitman/fancier:output",
        "biomorphic/untellable/pneumas/inimaginable:output",
        "biomorphic/vibrato/holeable/welleresque:output",
        "biomorphic/vibrato/gelidities/salar:output",
        "biomorphic/untellable/santalum/rejuvenator:output",
        "biomorphic/untellable/syndeton/alfur:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"biomorphic_vibrato_interportal_infinitude_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["biomorphic_vibrato_interportal_infinitude_{chroot}/common_scripts/run_build.sh", "{chroot}", "biomorphic_vibrato_interportal_infinitude_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
