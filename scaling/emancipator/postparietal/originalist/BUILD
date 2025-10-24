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
        "bakongo/heptene/endospermous/dyable:output",
        "bakongo/heptene/endospermous/palmettes:output",
        "bakongo/alloxanate/vincas/ophthalm:output",
        "bakongo/upglide/endospermous/jnanayoga:output",
        "bakongo/did/surprise/whitfinch:output",
        "emancipator/endospermous/tobaccoless:output",
        "bakongo/alloxanate/slopstone/winebaum:output",
        "bakongo/diopters/supernotably/belshazzar:output",
        "bakongo/theanthropic/endospermous/bianka:output",
        "bakongo/diamantine/ofori/endospermous/lapeyrouse:output",
        "bakongo/diopters/autoscopy/foreorder:output",
        "bakongo/upglide/endospermous/espier:output",
        "bakongo/diamantine/ofori/endospermous/presumer:output",
        "bakongo/upglide/endospermous/tarred:output",
        "bakongo/heptene/endospermous/disjasket:output",
        "bakongo/diopters/loathly/ordanchite:output",
        "bakongo/despumate/bouche/gleaned:output",
        "bakongo/diamantine/ofori/endospermous/deutschland:output",
        "bakongo/diamantine/ofori/endospermous/jocuma:output",
        "bakongo/diopters/kheths/amies:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"emancipator_postparietal_originalist_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["emancipator_postparietal_originalist_{chroot}/common_scripts/run_build.sh", "{chroot}", "emancipator_postparietal_originalist_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
