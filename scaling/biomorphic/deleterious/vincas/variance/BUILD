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
        "biomorphic/keratosropy/unqueened/antennariid:output",
        "biomorphic/nimblewit/endospermous/hortorium:output",
        "biomorphic/refiled/unqueened/nerves:output",
        "biomorphic/spondylic/kufiyeh/undergrowths:output",
        "biomorphic/spondylic/lealness/inurements:output",
        "biomorphic/spondylic/gnathostomi/snipish:output",
        "biomorphic/chromometer/pirtleville/scufflers:output",
        "biomorphic/adstipulate/lysolecithin/adstipulate:output",
        "biomorphic/semitransept/endospermous/nitriding:output",
        "biomorphic/cottontails/reitman/cottontails:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"biomorphic_deleterious_vincas_variance_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["biomorphic_deleterious_vincas_variance_{chroot}/common_scripts/run_build.sh", "{chroot}", "biomorphic_deleterious_vincas_variance_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
