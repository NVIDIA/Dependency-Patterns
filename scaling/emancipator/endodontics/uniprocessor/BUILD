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
        "bakongo/stylosporous/coala/synanthetic/archaean:output",
        "emancipator/bandore/bailiff:output",
        "bakongo/stylosporous/coala/synanthetic/archaean:output",
        "bakongo/inchase/blithen/libriform:output",
        "bakongo/inchase/sulpholeic/binger:output",
        "bakongo/upglide/endospermous/implemented:output",
        "emancipator/sabadine/dogcarts:output",
        "bakongo/did/whipmaking/colchicin:output",
        "bakongo/stylosporous/coala/synanthetic/archaean:output",
        "bakongo/upglide/endospermous/ultrafeudal:output",
        "emancipator/endospermous/eurygaean:output",
        "bakongo/did/pneumas/southwood:output",
        "bakongo/did/santalum/billiton:output",
        "bakongo/did/syndeton/kittled:output",
        "bakongo/inchase/curtainwise/enterostomy:output",
        "bakongo/did/surprise/whitfinch:output",
        "emancipator/endospermous/tobaccoless:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"emancipator_endodontics_uniprocessor_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["emancipator_endodontics_uniprocessor_{chroot}/common_scripts/run_build.sh", "{chroot}", "emancipator_endodontics_uniprocessor_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
