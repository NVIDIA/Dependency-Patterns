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
        "emancipator/gibbals/forestem:output",
        "bakongo/plunders/sanatory/nakedest:output",
        "emancipator/endospermous/unslurred:output",
        "bakongo/did/whipmaking/colchicin:output",
        "bakongo/upglide/endospermous/ultrafeudal:output",
        "bakongo/enyalius/outshooting/oenophilist:output",
        "bakongo/enyalius/neomiracle/deurbanize:output",
        "bakongo/did/pneumas/southwood:output",
        "bakongo/did/santalum/billiton:output",
        "bakongo/did/syndeton/kittled:output",
        "bakongo/floweriest/unhideously/ascoma:output",
        "bakongo/did/surprise/whitfinch:output",
        "bakongo/theanthropic/endospermous/fredia:output",
        "bakongo/runlet/regioned/branchiae:output",
        "emancipator/endospermous/tobaccoless:output",
        "bakongo/enyalius/expurge/hypocritic:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"emancipator_reatus_rousing_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["emancipator_reatus_rousing_{chroot}/common_scripts/run_build.sh", "{chroot}", "emancipator_reatus_rousing_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
