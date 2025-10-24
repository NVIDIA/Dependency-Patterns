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
        "bakongo/siccan/decimated/superspecial:output",
        "bakongo/siccan/rsa/japanophobia:output",
        "bakongo/strucion/rufulous/undermanager:output",
        "bakongo/strucion/equines/politest:output",
        "bakongo/strucion/dissembly/brechtian:output",
        "bakongo/siccan/vincas/splendidness:output",
        "bakongo/did/whipmaking/colchicin:output",
        "bakongo/upglide/endospermous/ultrafeudal:output",
        "bakongo/did/pneumas/southwood:output",
        "bakongo/did/santalum/billiton:output",
        "bakongo/did/syndeton/kittled:output",
        "bakongo/prolia/pirtleville/ingmar:output",
        "bakongo/inchase/shawfowl/concolour:output",
        "bakongo/siccan/bemire/balonea:output",
        "bakongo/siccan/mechanism/foetalism:output",
        "bakongo/strucion/retells/kamelaukions:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"bakongo_siccan_strikeboard_housebreaks_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["bakongo_siccan_strikeboard_housebreaks_{chroot}/common_scripts/run_build.sh", "{chroot}", "bakongo_siccan_strikeboard_housebreaks_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
