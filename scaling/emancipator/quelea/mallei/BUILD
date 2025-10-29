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
        "bakongo/theanthropic/endospermous/bianka:output",
        "bakongo/diamantine/ofori/endospermous/lapeyrouse:output",
        "bakongo/upglide/endospermous/ochreish:output",
        "bakongo/upglide/endospermous/ultrafeudal:output",
        "bakongo/monofilm/reitman/ballot:output",
        "bakongo/unequivalent/endospermous/unworthily:output",
        "bakongo/monofilm/bemire/heelcap:output",
        "bakongo/diamantine/ofori/endospermous/presumer:output",
        "emancipator/overentreat/crockeryware:output",
        "emancipator/chugalugged/aln:output",
        "bakongo/heptene/endospermous/disjasket:output",
        "bakongo/did/surprise/whitfinch:output",
        "emancipator/endospermous/tobaccoless:output",
        "bakongo/deceiving/reitman/deceiving:output",
        "bakongo/actualise/lysolecithin/actualise:output",
        "bakongo/diamantine/ofori/endospermous/deutschland:output",
        "bakongo/diamantine/ofori/endospermous/jocuma:output",
        "bakongo/fenagler/synanthetic/fenagler:output",
        "bakongo/upglide/endospermous/trustful:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"emancipator_quelea_mallei_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["{chroot}/geomorphy/run_build.sh", "{chroot}", "emancipator_quelea_mallei_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
