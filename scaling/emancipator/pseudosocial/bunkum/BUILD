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
        "bakongo/preconsuming/unqueened/mesogastral:output",
        "bakongo/oiw/burgers/abyssinian:output",
        "bakongo/ribaldly/unqueened/kerning:output",
        "bakongo/yggdrasil/endospermous/elegised:output",
        "bakongo/did/whipmaking/colchicin:output",
        "bakongo/upglide/endospermous/ultrafeudal:output",
        "bakongo/preconsuming/reliers/snecket:output",
        "bakongo/monofilm/reitman/ballot:output",
        "bakongo/did/pneumas/southwood:output",
        "bakongo/did/santalum/billiton:output",
        "bakongo/monofilm/oxyosphresia/ashpan:output",
        "bakongo/did/syndeton/kittled:output",
        "emancipator/endospermous/outserves:output",
        "bakongo/did/dustpans/unelegant:output",
        "bakongo/snatchers/unqueened/redeemedness:output",
        "bakongo/heptene/endospermous/disjasket:output",
        "bakongo/did/surprise/whitfinch:output",
        "bakongo/snatchers/reliers/antisexist:output",
        "emancipator/endospermous/tobaccoless:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"emancipator_pseudosocial_bunkum_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["{chroot}/geomorphy/run_build.sh", "{chroot}", "emancipator_pseudosocial_bunkum_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
