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
        "bakongo/millwheel/amieva/unportraited:output",
        "bakongo/heptene/endospermous/dyable:output",
        "bakongo/barbirolli/criminating/woll:output",
        "bakongo/did/whipmaking/colchicin:output",
        "bakongo/monofilm/reitman/ballot:output",
        "bakongo/did/santalum/billiton:output",
        "bakongo/did/pneumas/southwood:output",
        "bakongo/did/syndeton/kittled:output",
        "bakongo/did/dustpans/unelegant:output",
        "bakongo/heptene/endospermous/disjasket:output",
        "bakongo/did/surprise/whitfinch:output",
        "bakongo/forslake/reitman/forslake:output",
        "bakongo/cymlin/entrechat/defiled:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"bakongo_cymlin_outpracticed_pyrolyzed_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["bakongo_cymlin_outpracticed_pyrolyzed_{chroot}/common_scripts/run_build.sh", "{chroot}", "bakongo_cymlin_outpracticed_pyrolyzed_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
