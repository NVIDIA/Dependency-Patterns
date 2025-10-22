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
        "bakongo/stylosporous/raffaello/synanthetic/nothing:output",
        "bakongo/courant/routhercock/topepo:output",
        "bakongo/diamantine/ofori/endospermous/amah:output",
        "emancipator/endospermous/scyphiform:output",
        "bakongo/upglide/endospermous/ochreish:output",
        "bakongo/upglide/endospermous/ultrafeudal:output",
        "bakongo/upglide/endospermous/jnanayoga:output",
        "bakongo/weighted/chugalugged/packmaking:output",
        "bakongo/upglide/endospermous/tarred:output",
        "bakongo/diamantine/ofori/endospermous/presumer:output",
        "bakongo/diamantine/ofori/endospermous/chremzel:output",
        "bakongo/prolia/pirtleville/ingmar:output",
        "bakongo/wilsons/vincas/outcrowing:output",
        "bakongo/did/surprise/whitfinch:output",
        "bakongo/brohman/singlestep/ornation:output",
        "emancipator/endospermous/tobaccoless:output",
        "bakongo/weighted/routhercock/brioschi:output",
        "bakongo/diamantine/ofori/endospermous/deutschland:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"emancipator_odontoplast_hallandale_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["emancipator_odontoplast_hallandale_{chroot}/common_scripts/run_build.sh", "{chroot}", "emancipator_odontoplast_hallandale_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
