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
        "bakongo/incumbrances/reitman/incumbrances:output",
        "emancipator/diploidic/cacafugo:output",
        "bakongo/heptene/endospermous/dyable:output",
        "emancipator/solemnitude/mecke:output",
        "emancipator/disfrocked/kensal:output",
        "emancipator/cunctator/sphindidae:output",
        "emancipator/photochemic/enamorado:output",
        "emancipator/dulcifies/canakins:output",
        "bakongo/labials/reitman/labials:output",
        "bakongo/did/surprise/whitfinch:output",
        "bakongo/archizoic/burgers/imu:output",
        "bakongo/excretolic/burgers/faison:output",
        "emancipator/keelhauling/capsulizing:output",
        "emancipator/stallment/jegger:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"emancipator_previewed_accruer_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["{chroot}/geomorphy/run_build.sh", "{chroot}", "emancipator_previewed_accruer_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
