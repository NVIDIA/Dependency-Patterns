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
        "bakongo/stylosporous/tankard/vulcanising/scholz:output",
        "bakongo/diamantine/ofori/endospermous/amah:output",
        "bakongo/stylosporous/distension/synanthetic/castleward:output",
        "bakongo/literatured/qaid/rhizocarpeae:output",
        "bakongo/diamantine/ofori/endospermous/lapeyrouse:output",
        "bakongo/upglide/endospermous/ochreish:output",
        "bakongo/diamantine/ofori/endospermous/presumer:output",
        "bakongo/stylosporous/tankard/nutricism/woodmen:output",
        "bakongo/did/surprise/whitfinch:output",
        "bakongo/forslake/reitman/forslake:output",
        "bakongo/stylosporous/veddah/synanthetic/schooled:output",
        "emancipator/endospermous/tobaccoless:output",
        "bakongo/diamantine/ofori/endospermous/deutschland:output",
        "bakongo/diamantine/ofori/endospermous/jocuma:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"emancipator_idiolects_cookouts_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["emancipator_idiolects_cookouts_{chroot}/common_scripts/run_build.sh", "{chroot}", "emancipator_idiolects_cookouts_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
