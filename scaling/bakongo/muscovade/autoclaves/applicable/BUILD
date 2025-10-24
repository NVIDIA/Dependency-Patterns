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
        "bakongo/sensuosity/reitman/cubbyholes:output",
        "bakongo/muscovade/strikeboard/mosslike:output",
        "bakongo/prolia/pirtleville/ingmar:output",
        "bakongo/inchase/shawfowl/concolour:output",
        "bakongo/muscovade/rsa/jujubes:output",
        "bakongo/sapphera/reitman/orthoptera:output",
        "bakongo/muscovade/mechanism/juncoides:output",
        "bakongo/muscovade/decimated/doums:output",
        "bakongo/muscovade/vincas/banting:output",
        "bakongo/gutow/reitman/brea:output",
        "bakongo/upglide/endospermous/ultrafeudal:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"bakongo_muscovade_autoclaves_applicable_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["bakongo_muscovade_autoclaves_applicable_{chroot}/common_scripts/run_build.sh", "{chroot}", "bakongo_muscovade_autoclaves_applicable_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
