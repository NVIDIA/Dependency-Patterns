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
        "hypostasised/scalpellic/ochronotic:output",
        "hypostasised/endospermous/bikinis:output",
        "bakongo/apagoge/reitman/apagoge:output",
        "bakongo/did/whipmaking/colchicin:output",
        "bakongo/upglide/endospermous/ultrafeudal:output",
        "bakongo/did/santalum/billiton:output",
        "bakongo/did/pneumas/southwood:output",
        "bakongo/did/syndeton/kittled:output",
        "hypostasised/darkskin/tragopogon:output",
        "bakongo/did/surprise/whitfinch:output",
        "bakongo/inconcinnity/vincas/inadequation:output",
        "bakongo/imputrid/reitman/imputrid:output",
        "bakongo/synapsed/vincas/tibial:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"hypostasised_lrbm_mls_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["hypostasised_lrbm_mls_{chroot}/common_scripts/run_build.sh", "{chroot}", "hypostasised_lrbm_mls_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
