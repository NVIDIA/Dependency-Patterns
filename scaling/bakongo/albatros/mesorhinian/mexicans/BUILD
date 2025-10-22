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
        "bakongo/heptene/endospermous/compressible:output",
        "bakongo/oxalacetate/glomerella/grynaeus:output",
        "bakongo/tlaco/preacquiring/faddisms:output",
        "bakongo/enyalius/gowrie/restacked:output",
        "bakongo/unsheathes/repossesses/gigs:output",
        "bakongo/enyalius/undivested/dawts:output",
        "bakongo/exordia/approximants/nickstick:output",
        "bakongo/did/whipmaking/colchicin:output",
        "bakongo/listless/heuretic/outspit:output",
        "bakongo/upglide/endospermous/ultrafeudal:output",
        "bakongo/monofilm/reitman/ballot:output",
        "bakongo/did/pneumas/southwood:output",
        "bakongo/did/santalum/billiton:output",
        "bakongo/did/syndeton/kittled:output",
        "bakongo/koranist/hydros/approve:output",
        "bakongo/deadweight/studs/acatallactic:output",
        "bakongo/pederero/reitman/pederero:output",
        "bakongo/heptene/endospermous/disjasket:output",
        "bakongo/did/surprise/whitfinch:output",
        "bakongo/enshrouds/shinguard/untriable:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"bakongo_albatros_mesorhinian_mexicans_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["bakongo_albatros_mesorhinian_mexicans_{chroot}/common_scripts/run_build.sh", "{chroot}", "bakongo_albatros_mesorhinian_mexicans_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
