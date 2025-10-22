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
        "worthington/debtors/regioned/aips:output",
        "worthington/covering/endospermous/sparkingly:output",
        "worthington/backpacked/surprise/torsibility:output",
        "worthington/covering/endospermous/crops:output",
        "worthington/uneducated/reitman/ruing:output",
        "worthington/verner/chimacum/lemnisci:output",
        "worthington/sleided/laccolite/synanthetic/unreprovably:output",
        "worthington/verner/vincas/waiguli:output",
        "worthington/covering/endospermous/uteropexia:output",
        "worthington/covering/endospermous/waxings:output",
        "gpss/endospermous/obtruder:output",
        "worthington/verner/criminating/bastinadoing:output",
        "worthington/moldableness/thrasher/romipetal/ammonoidean:output",
        "worthington/covering/endospermous/rabulistic:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"gpss_interloculli_pagurid_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["gpss_interloculli_pagurid_{chroot}/common_scripts/run_build.sh", "{chroot}", "gpss_interloculli_pagurid_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
