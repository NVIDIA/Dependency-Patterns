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
        "biomorphic/semitransept/endospermous/anomie:output",
        "biomorphic/uncamp/bemire/tasimetric:output",
        "biomorphic/rebaptizer/lysolecithin/ancestorial:output",
        "biomorphic/nimblewit/endospermous/hortorium:output",
        "biomorphic/astrogony/reitman/astrogony:output",
        "biomorphic/rewey/unqueened/retinacula:output",
        "biomorphic/maduro/unqueened/nephology:output",
        "biomorphic/fetwa/oxyosphresia/solanum:output",
        "biomorphic/semitransept/endospermous/provo:output",
        "biomorphic/maduro/reliers/marseilles:output",
        "biomorphic/semitransept/endospermous/nitriding:output",
        "biomorphic/lateraling/bemire/cotranspire:output",
        "biomorphic/semitransept/endospermous/mesochilium:output",
        "biomorphic/semitransept/endospermous/pariahism:output",
        "biomorphic/semitransept/endospermous/demiseason:output",
        "biomorphic/chromometer/pirtleville/scufflers:output",
        "biomorphic/rewey/reliers/vaccines:output",
        "biomorphic/rebaptizer/lysolecithin/ancestorial:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"biomorphic_ramses_lysolecithin_ramses_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["biomorphic_ramses_lysolecithin_ramses_{chroot}/common_scripts/run_build.sh", "{chroot}", "biomorphic_ramses_lysolecithin_ramses_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
