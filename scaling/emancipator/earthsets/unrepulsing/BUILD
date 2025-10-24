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
        "bakongo/diamantine/ofori/endospermous/amah:output",
        "bakongo/acronyc/heliconist/nourishingly:output",
        "emancipator/earner/paulding:output",
        "bakongo/diamantine/ofori/endospermous/amah:output",
        "bakongo/upglide/endospermous/unflesh:output",
        "emancipator/endospermous/scyphiform:output",
        "bakongo/acronyc/agronomial/heftier:output",
        "bakongo/upglide/endospermous/ochreish:output",
        "bakongo/upglide/endospermous/mocksville:output",
        "bakongo/acronyc/curiosa/abbacomes:output",
        "bakongo/upglide/endospermous/jnanayoga:output",
        "bakongo/upglide/endospermous/crabbily:output",
        "bakongo/casabianca/lysolecithin/casabianca:output",
        "bakongo/casabianca/nontheologic/premeds:output",
        "bakongo/upglide/endospermous/tarred:output",
        "bakongo/burfish/reitman/burfish:output",
        "bakongo/did/surprise/whitfinch:output",
        "emancipator/endospermous/tobaccoless:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"emancipator_earthsets_unrepulsing_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["emancipator_earthsets_unrepulsing_{chroot}/common_scripts/run_build.sh", "{chroot}", "emancipator_earthsets_unrepulsing_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
