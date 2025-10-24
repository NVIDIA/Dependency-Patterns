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
        "bakongo/floriage/reitman/floriage:output",
        "bakongo/dualization/megalonyx/dualization:output",
        "bakongo/advances/bouche/axiom:output",
        "bakongo/did/whipmaking/colchicin:output",
        "bakongo/forestalled/criminating/underrates:output",
        "bakongo/upglide/endospermous/ultrafeudal:output",
        "bakongo/did/pneumas/southwood:output",
        "bakongo/did/santalum/billiton:output",
        "bakongo/did/syndeton/kittled:output",
        "bakongo/monofilm/antoninus/nugget:output",
        "bakongo/diploplacula/chimacum/unhuddled:output",
        "bakongo/did/surprise/whitfinch:output",
        "bakongo/brunk/reitman/brunk:output",
        "emancipator/darkskin/heedy:output",
        "emancipator/endospermous/tobaccoless:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"emancipator_prehensive_gondoletta_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["emancipator_prehensive_gondoletta_{chroot}/common_scripts/run_build.sh", "{chroot}", "emancipator_prehensive_gondoletta_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
