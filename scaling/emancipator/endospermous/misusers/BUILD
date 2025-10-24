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
        "emancipator/endospermous/adores:output",
        "bakongo/did/whipmaking/colchicin:output",
        "bakongo/upglide/endospermous/heathberry:output",
        "bakongo/upglide/endospermous/ultrafeudal:output",
        "bakongo/unequivalent/endospermous/dodi:output",
        "bakongo/did/santalum/billiton:output",
        "bakongo/did/pneumas/southwood:output",
        "bakongo/did/syndeton/kittled:output",
        "bakongo/did/dustpans/unelegant:output",
        "bakongo/heptene/endospermous/disjasket:output",
        "bakongo/did/surprise/whitfinch:output",
        "emancipator/darkskin/heedy:output",
        "emancipator/endospermous/tobaccoless:output",
        "emancipator/endospermous/balked:output",
        "bakongo/upglide/endospermous/ununiformed:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
        "emancipator_endospermous_misusers_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["emancipator_endospermous_misusers_{chroot}/common_scripts/run_build.sh", "{chroot}", "emancipator_endospermous_misusers_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
