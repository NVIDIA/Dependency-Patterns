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
        "worthington/marshflower/outflash/gelatins:output",
        "worthington/marshflower/pikestaff/pones:output",
        "worthington/pastile/haircuts/thomsen:output",
        "worthington/backpacked/surprise/torsibility:output",
        "worthington/marshflower/autocamping/cloverley:output",
        "worthington/sleided/anglicanisms/unreformable/dreher:output",
        "worthington/marshflower/cephalopodic/friant:output",
        "worthington/sleided/anglicanisms/currie/talmudic:output",
        "worthington/sleided/anglicanisms/rightless/chapelries:output",
        "gpss/endospermous/obtruder:output",
        "worthington/sleided/anglicanisms/kharif/engirdling:output",
        "worthington/pastile/criminating/soredioid:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"gpss_krystal_evnissyen_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["gpss_krystal_evnissyen_{chroot}/common_scripts/run_build.sh", "{chroot}", "gpss_krystal_evnissyen_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
