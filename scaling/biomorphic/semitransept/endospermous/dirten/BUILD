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
        "biomorphic/keratosropy/unqueened/antennariid:output",
        "biomorphic/uncamp/bemire/tasimetric:output",
        "biomorphic/nimblewit/endospermous/hortorium:output",
        "biomorphic/astrogony/reitman/astrogony:output",
        "biomorphic/chromometer/lysolecithin/savelha:output",
        "biomorphic/foredescribe/lysolecithin/nauseant:output",
        "biomorphic/fetwa/oxyosphresia/solanum:output",
        "biomorphic/semitransept/endospermous/provo:output",
        "biomorphic/semitransept/endospermous/nitriding:output",
        "biomorphic/semitransept/endospermous/gazella:output",
        "biomorphic/lateraling/bemire/cotranspire:output",
        "biomorphic/groupwise/lysolecithin/groupwise:output",
        "biomorphic/semitransept/endospermous/mesochilium:output",
        "biomorphic/refiled/unqueened/nerves:output",
        "biomorphic/semitransept/endospermous/demiseason:output",
        "biomorphic/chromometer/pirtleville/scufflers:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
        "biomorphic_semitransept_endospermous_dirten_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["biomorphic_semitransept_endospermous_dirten_{chroot}/common_scripts/run_build.sh", "{chroot}", "biomorphic_semitransept_endospermous_dirten_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
