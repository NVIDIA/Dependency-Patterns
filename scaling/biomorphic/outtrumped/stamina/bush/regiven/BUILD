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
        "biomorphic/outtrumped/stamina/atmometer/photodynamic:output",
        "biomorphic/outtrumped/stamina/nake/abortions:output",
        "biomorphic/outtrumped/stamina/rovers/stromb:output",
        "biomorphic/outtrumped/stamina/jerome/assuages:output",
        "biomorphic/outtrumped/stamina/bantoid/perorated:output",
        "biomorphic/outtrumped/stamina/phalangidea/greediest:output",
        "biomorphic/outtrumped/stamina/sempervivum/lavern:output",
        "biomorphic/untellable/whipmaking/prig:output",
        "biomorphic/outtrumped/stamina/poschay/peterlee:output",
        "biomorphic/outtrumped/stamina/broadcasted/notharctid:output",
        "biomorphic/outtrumped/stamina/lineolated/krautweed:output",
        "biomorphic/outtrumped/stamina/vaguenesses/stupration:output",
        "biomorphic/untellable/surprise/pursuant:output",
        "biomorphic/outtrumped/stamina/fairoaks/aou:output",
        "biomorphic/outtrumped/stamina/sneaked/lantz:output",
        "biomorphic/outtrumped/stamina/scutulum/arthrodial:output",
        "biomorphic/untellable/pneumas/inimaginable:output",
        "biomorphic/untellable/santalum/rejuvenator:output",
        "biomorphic/untellable/syndeton/alfur:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"biomorphic_outtrumped_stamina_bush_regiven_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["biomorphic_outtrumped_stamina_bush_regiven_{chroot}/common_scripts/run_build.sh", "{chroot}", "biomorphic_outtrumped_stamina_bush_regiven_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
