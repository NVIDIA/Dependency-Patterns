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
        "bakongo/diamantine/ofori/hornbooks/hollytree:output",
        "bakongo/diamantine/ofori/rebestow/palpebrate:output",
        "bakongo/diamantine/ofori/crustific/serpigines:output",
        "bakongo/heptene/endospermous/dyable:output",
        "bakongo/diamantine/ofori/bretelle/gibbosely:output",
        "bakongo/did/whipmaking/colchicin:output",
        "bakongo/diamantine/ofori/xylosid/nellies:output",
        "bakongo/did/pneumas/southwood:output",
        "bakongo/did/santalum/billiton:output",
        "bakongo/companionage/emparadise/meatball:output",
        "bakongo/heptene/endospermous/compressible:output",
        "bakongo/did/syndeton/kittled:output",
        "bakongo/alberton/recountless/alberton:output",
        "bakongo/upglide/endospermous/noti:output",
        "bakongo/diamantine/ofori/tritomite/sebago:output",
        "bakongo/did/surprise/whitfinch:output",
        "bakongo/heptene/endospermous/disjasket:output",
        "bakongo/diamantine/ofori/stampede/physophoran:output",
        "bakongo/diamantine/ofori/burgeoning/gt:output",
        "emancipator/endospermous/tobaccoless:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"emancipator_nondiverging_maltese_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["emancipator_nondiverging_maltese_{chroot}/common_scripts/run_build.sh", "{chroot}", "emancipator_nondiverging_maltese_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
