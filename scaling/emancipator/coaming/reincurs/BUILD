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
        "bakongo/upglide/endospermous/libau:output",
        "bakongo/stylosporous/annihilable/synanthetic/germanton:output",
        "bakongo/upglide/endospermous/delenda:output",
        "bakongo/theanthropic/endospermous/bianka:output",
        "bakongo/did/whipmaking/colchicin:output",
        "bakongo/upglide/endospermous/ultrafeudal:output",
        "bakongo/paniquita/lysolecithin/paniquita:output",
        "bakongo/did/pneumas/southwood:output",
        "bakongo/did/santalum/billiton:output",
        "bakongo/did/syndeton/kittled:output",
        "bakongo/did/surprise/whitfinch:output",
        "emancipator/endospermous/tobaccoless:output",
        "bakongo/upglide/endospermous/physoclisti:output",
        "bakongo/upglide/endospermous/bounces:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"emancipator_coaming_reincurs_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["emancipator_coaming_reincurs_{chroot}/common_scripts/run_build.sh", "{chroot}", "emancipator_coaming_reincurs_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
