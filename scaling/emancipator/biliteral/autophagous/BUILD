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
        "emancipator/endospermous/signon:output",
        "emancipator/endospermous/scyphiform:output",
        "bakongo/upglide/endospermous/ochreish:output",
        "bakongo/upglide/endospermous/jnanayoga:output",
        "bakongo/oreshoot/criminating/muriated:output",
        "bakongo/upglide/endospermous/tarred:output",
        "bakongo/upglide/endospermous/embargoed:output",
        "emancipator/kingsnake/acceptant:output",
        "bakongo/upglide/endospermous/kenoticism:output",
        "bakongo/upglide/endospermous/radiability:output",
        "bakongo/did/surprise/whitfinch:output",
        "bakongo/heptene/endospermous/disjasket:output",
        "emancipator/endospermous/tobaccoless:output",
        "bakongo/diamantine/ofori/endospermous/deutschland:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"emancipator_biliteral_autophagous_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["emancipator_biliteral_autophagous_{chroot}/common_scripts/run_build.sh", "{chroot}", "emancipator_biliteral_autophagous_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
