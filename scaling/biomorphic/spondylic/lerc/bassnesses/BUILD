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
        "biomorphic/spondylic/entrechat/unsavourily:output",
        "biomorphic/spondylic/chimacum/yirmilik:output",
        "biomorphic/puerpery/endospermous/bargestone:output",
        "biomorphic/untellable/whipmaking/prig:output",
        "biomorphic/spondylic/criminating/overstanding:output",
        "biomorphic/untellable/surprise/pursuant:output",
        "biomorphic/spondylic/springvale/misfielding:output",
        "biomorphic/fetwa/reitman/preopinion:output",
        "biomorphic/untellable/pneumas/inimaginable:output",
        "biomorphic/spondylic/desaturation/centriscus:output",
        "biomorphic/untellable/santalum/rejuvenator:output",
        "biomorphic/untellable/syndeton/alfur:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"biomorphic_spondylic_lerc_bassnesses_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["biomorphic_spondylic_lerc_bassnesses_{chroot}/common_scripts/run_build.sh", "{chroot}", "biomorphic_spondylic_lerc_bassnesses_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
