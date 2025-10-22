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
        "bakongo/jareb/chugalugged/photophilic:output",
        "bakongo/jareb/routhercock/lieblich:output",
        "bakongo/courant/routhercock/topepo:output",
        "bakongo/diamantine/ofori/endospermous/amah:output",
        "emancipator/endospermous/scyphiform:output",
        "bakongo/stylosporous/antick/synanthetic/teleologies:output",
        "bakongo/upglide/endospermous/ochreish:output",
        "bakongo/upglide/endospermous/ultrafeudal:output",
        "bakongo/upglide/endospermous/jnanayoga:output",
        "bakongo/enophthalmos/criminating/slingers:output",
        "emancipator/threated/psycholeptic:output",
        "bakongo/upglide/endospermous/tarred:output",
        "bakongo/diamantine/ofori/endospermous/presumer:output",
        "bakongo/diamantine/ofori/endospermous/chremzel:output",
        "bakongo/prolia/pirtleville/ingmar:output",
        "bakongo/did/surprise/whitfinch:output",
        "emancipator/endospermous/tobaccoless:output",
        "bakongo/diamantine/ofori/endospermous/deutschland:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"emancipator_seels_succorable_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["emancipator_seels_succorable_{chroot}/common_scripts/run_build.sh", "{chroot}", "emancipator_seels_succorable_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
