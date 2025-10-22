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
        "bakongo/stylosporous/tankard/atmometer/aglisten:output",
        "bakongo/stylosporous/tankard/poschay/subsetting:output",
        "bakongo/stylosporous/tankard/fairoaks/yuleblock:output",
        "bakongo/stylosporous/tankard/sempervivum/splurgily:output",
        "bakongo/stylosporous/tankard/jerome/slapjacks:output",
        "bakongo/stylosporous/tankard/scutulum/overproduced:output",
        "bakongo/stylosporous/tankard/lineolated/glinse:output",
        "bakongo/did/whipmaking/colchicin:output",
        "bakongo/stylosporous/tankard/phalangidea/absence:output",
        "bakongo/did/pneumas/southwood:output",
        "bakongo/did/santalum/billiton:output",
        "bakongo/did/syndeton/kittled:output",
        "bakongo/stylosporous/tankard/rovers/subiaco:output",
        "bakongo/stylosporous/tankard/broadcasted/slater:output",
        "bakongo/did/surprise/whitfinch:output",
        "bakongo/stylosporous/tankard/vaguenesses/prosody:output",
        "bakongo/stylosporous/tankard/nake/carburizes:output",
        "bakongo/stylosporous/tankard/sneaked/emusify:output",
        "bakongo/stylosporous/tankard/bantoid/effloresce:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"bakongo_stylosporous_tankard_bush_qwl_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["bakongo_stylosporous_tankard_bush_qwl_{chroot}/common_scripts/run_build.sh", "{chroot}", "bakongo_stylosporous_tankard_bush_qwl_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
