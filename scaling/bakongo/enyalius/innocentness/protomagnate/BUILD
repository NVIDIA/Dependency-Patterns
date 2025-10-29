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
        "bakongo/enyalius/gowrie/restacked:output",
        "bakongo/enyalius/disenact/comrado:output",
        "bakongo/enyalius/undivested/dawts:output",
        "bakongo/enyalius/whalen/hepatomegaly:output",
        "bakongo/did/whipmaking/colchicin:output",
        "bakongo/enyalius/outshooting/oenophilist:output",
        "bakongo/upglide/endospermous/ultrafeudal:output",
        "bakongo/enyalius/reitman/hertford:output",
        "bakongo/unequivalent/endospermous/unworthily:output",
        "bakongo/monofilm/reitman/ballot:output",
        "bakongo/did/pneumas/southwood:output",
        "bakongo/did/santalum/billiton:output",
        "bakongo/did/syndeton/kittled:output",
        "bakongo/enyalius/mashgihim/rindless:output",
        "bakongo/did/surprise/whitfinch:output",
        "bakongo/heptene/endospermous/disjasket:output",
        "bakongo/runlet/regioned/branchiae:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"bakongo_enyalius_innocentness_protomagnate_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["{chroot}/geomorphy/run_build.sh", "{chroot}", "bakongo_enyalius_innocentness_protomagnate_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
