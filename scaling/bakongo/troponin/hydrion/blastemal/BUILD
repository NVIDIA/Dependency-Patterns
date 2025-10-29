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
        "bakongo/diploplacula/spruiker/hipple:output",
        "bakongo/diploplacula/bogtrotter/termitary:output",
        "bakongo/diploplacula/haircuts/benia:output",
        "bakongo/diamantine/ofori/endospermous/overfit:output",
        "bakongo/troponin/criminating/laniform:output",
        "bakongo/troponin/vincas/delsartian:output",
        "bakongo/diploplacula/substantize/colima:output",
        "bakongo/diploplacula/strychnos/dermomycosis:output",
        "bakongo/diploplacula/chimacum/unhuddled:output",
        "bakongo/did/surprise/whitfinch:output",
        "bakongo/diploplacula/onondagan/conjubilant:output",
        "bakongo/diploplacula/subcuneus/rebrand:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"bakongo_troponin_hydrion_blastemal_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["{chroot}/geomorphy/run_build.sh", "{chroot}", "bakongo_troponin_hydrion_blastemal_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
