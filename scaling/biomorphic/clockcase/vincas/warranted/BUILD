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
        "biomorphic/melancholily/unionic/elevenfold:output",
        "biomorphic/nimblewit/endospermous/hortorium:output",
        "biomorphic/menispermine/endospermous/rafe:output",
        "biomorphic/halecomorphi/pentitol/maskalonges:output",
        "biomorphic/tropophyte/bemire/dichronous:output",
        "biomorphic/tropophyte/criminating/bonorum:output",
        "biomorphic/adventured/torbert/forestless:output",
        "biomorphic/tropophyte/mutuality/chidden:output",
        "biomorphic/fetwa/oxyosphresia/solanum:output",
        "biomorphic/semitransept/endospermous/nitriding:output",
        "biomorphic/lateraling/bemire/cotranspire:output",
        "biomorphic/clockcase/lysolecithin/actuaryship:output",
        "biomorphic/hillbird/bemire/nonascetical:output",
        "biomorphic/chromometer/pirtleville/scufflers:output",
        "biomorphic/pulverate/lysolecithin/preenroll:output",
        "biomorphic/adventured/dissembly/lateliness:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"biomorphic_clockcase_vincas_warranted_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["biomorphic_clockcase_vincas_warranted_{chroot}/common_scripts/run_build.sh", "{chroot}", "biomorphic_clockcase_vincas_warranted_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
