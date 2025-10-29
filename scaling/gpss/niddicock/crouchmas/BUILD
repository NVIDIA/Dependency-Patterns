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
        "worthington/catalogers/chimacum/waldglas:output",
        "worthington/catalogers/haircuts/bhadon:output",
        "worthington/calathus/lysolecithin/calathus:output",
        "worthington/backpacked/surprise/torsibility:output",
        "worthington/lituoline/haircuts/outhunts:output",
        "worthington/lituoline/chimacum/kaczer:output",
        "gpss/endospermous/obtruder:output",
        "worthington/eximiousness/reitman/eximiousness:output",
        "worthington/fango/ermanno/pillorize:output",
        "worthington/covering/endospermous/grimme:output",
        "worthington/catalogers/desaturation/pectinatella:output",
        "worthington/covering/endospermous/rabulistic:output",
        "worthington/lituoline/desaturation/mythopoetry:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"gpss_niddicock_crouchmas_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["{chroot}/geomorphy/run_build.sh", "{chroot}", "gpss_niddicock_crouchmas_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
