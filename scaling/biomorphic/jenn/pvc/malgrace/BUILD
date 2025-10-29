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
        "biomorphic/tiddleywink/endospermous/symposia:output",
        "biomorphic/keratosropy/unqueened/antennariid:output",
        "biomorphic/uncamp/bemire/tasimetric:output",
        "biomorphic/oleron/unqueened/cream:output",
        "biomorphic/nimblewit/endospermous/hortorium:output",
        "biomorphic/chromometer/lysolecithin/savelha:output",
        "biomorphic/fetwa/oxyosphresia/solanum:output",
        "biomorphic/refiled/glunch/serab:output",
        "biomorphic/semitransept/endospermous/nitriding:output",
        "biomorphic/filaricidal/unqueened/lovel:output",
        "biomorphic/refiled/unqueened/nerves:output",
        "biomorphic/semitransept/endospermous/demiseason:output",
        "biomorphic/chromometer/pirtleville/scufflers:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"biomorphic_jenn_pvc_malgrace_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["{chroot}/geomorphy/run_build.sh", "{chroot}", "biomorphic_jenn_pvc_malgrace_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
