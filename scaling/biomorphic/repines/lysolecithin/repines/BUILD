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
        "biomorphic/fetwa/bemire/candiot:output",
        "biomorphic/uncamp/bemire/tasimetric:output",
        "biomorphic/nimblewit/endospermous/hortorium:output",
        "biomorphic/spondylic/gnathostomi/snipish:output",
        "biomorphic/moochers/lysolecithin/moochers:output",
        "biomorphic/adventured/manifestive/banias:output",
        "biomorphic/chromometer/lysolecithin/savelha:output",
        "biomorphic/adventured/drek/prologed:output",
        "biomorphic/fetwa/oxyosphresia/solanum:output",
        "biomorphic/semitransept/endospermous/nitriding:output",
        "biomorphic/refiled/unqueened/nerves:output",
        "biomorphic/filaricidal/unqueened/lovel:output",
        "biomorphic/spondylic/kufiyeh/undergrowths:output",
        "biomorphic/spondylic/lealness/inurements:output",
        "biomorphic/spondylic/overrigid/kourou:output",
        "biomorphic/semitransept/endospermous/demiseason:output",
        "biomorphic/adventured/urinalist/myosinose:output",
        "biomorphic/chromometer/pirtleville/scufflers:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"biomorphic_repines_lysolecithin_repines_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["{chroot}/geomorphy/run_build.sh", "{chroot}", "biomorphic_repines_lysolecithin_repines_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
