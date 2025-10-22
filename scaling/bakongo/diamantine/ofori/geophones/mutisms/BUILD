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
        "bakongo/diamantine/ofori/refutes/levanters:output",
        "bakongo/gallantry/hereditably/roadrunners:output",
        "bakongo/diamantine/ofori/sonnetted/decadal:output",
        "bakongo/advances/bouche/axiom:output",
        "bakongo/diamantine/ofori/deckswabber/gangplow:output",
        "bakongo/diamantine/ofori/outhaul/charteris:output",
        "bakongo/forestalled/hereditably/sirra:output",
        "bakongo/upglide/endospermous/ultrafeudal:output",
        "bakongo/forestalled/criminating/underrates:output",
        "bakongo/monofilm/reitman/ballot:output",
        "bakongo/diamantine/ofori/cockleshell/sciomachy:output",
        "bakongo/diamantine/ofori/incendiarist/chiefery:output",
        "bakongo/diamantine/ofori/iesg/masticic:output",
        "bakongo/upglide/endospermous/noti:output",
        "bakongo/diamantine/ofori/pteridosperm/phyxius:output",
        "bakongo/swankie/shover/haemanthus:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"bakongo_diamantine_ofori_geophones_mutisms_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["bakongo_diamantine_ofori_geophones_mutisms_{chroot}/common_scripts/run_build.sh", "{chroot}", "bakongo_diamantine_ofori_geophones_mutisms_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
