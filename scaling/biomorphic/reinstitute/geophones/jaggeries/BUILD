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
        "biomorphic/semitransept/endospermous/anomie:output",
        "biomorphic/reinstitute/cockleshell/stepstone:output",
        "biomorphic/reinstitute/iesg/midspan:output",
        "biomorphic/polentas/bouche/wardress:output",
        "biomorphic/reinstitute/sonnetted/rhodoras:output",
        "biomorphic/philippizer/hereditably/volkslieder:output",
        "biomorphic/reinstitute/outhaul/garmentless:output",
        "biomorphic/reinstitute/pteridosperm/reillumine:output",
        "biomorphic/reinstitute/refutes/renovative:output",
        "biomorphic/guessers/hereditably/predevelop:output",
        "biomorphic/semitransept/endospermous/renillidae:output",
        "biomorphic/philippizer/criminating/teargases:output",
        "biomorphic/reinstitute/incendiarist/suberize:output",
        "biomorphic/azotize/shover/punjabi:output",
        "biomorphic/fetwa/reitman/preopinion:output",
        "biomorphic/reinstitute/deckswabber/coturnix:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"biomorphic_reinstitute_geophones_jaggeries_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["biomorphic_reinstitute_geophones_jaggeries_{chroot}/common_scripts/run_build.sh", "{chroot}", "biomorphic_reinstitute_geophones_jaggeries_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
