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
        "biomorphic/fetwa/bemire/candiot:output",
        "biomorphic/nimblewit/endospermous/hortorium:output",
        "biomorphic/tropophyte/bemire/dichronous:output",
        "biomorphic/tropophyte/criminating/bonorum:output",
        "biomorphic/fetwa/oxyosphresia/solanum:output",
        "biomorphic/semitransept/endospermous/nitriding:output",
        "biomorphic/lateraling/bemire/cotranspire:output",
        "biomorphic/tropophyte/bemire/dichronous:output",
        "biomorphic/hillbird/bemire/nonascetical:output",
        "biomorphic/chromometer/pirtleville/scufflers:output",
        "biomorphic/pulverate/lysolecithin/preenroll:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"biomorphic_bullbat_lysolecithin_supervictory_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["biomorphic_bullbat_lysolecithin_supervictory_{chroot}/common_scripts/run_build.sh", "{chroot}", "biomorphic_bullbat_lysolecithin_supervictory_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
