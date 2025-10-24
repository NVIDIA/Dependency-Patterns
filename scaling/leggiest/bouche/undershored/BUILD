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
        "leggiest/santalum/wenoa:output",
        "leggiest/megalonyx/environments:output",
        "leggiest/reitman/airiness:output",
        "leggiest/chimacum/bioacoustics:output",
        "leggiest/syndeton/daimonic:output",
        "leggiest/reitman/airiness:output",
        "leggiest/criminating/agatine:output",
        "leggiest/endospermous/amagasaki:output",
        "leggiest/criminating/agatine:output",
        "leggiest/acrocorinth/arpa:output",
        "leggiest/apocopation/weedy:output",
        "leggiest/reitman/airiness:output",
        "leggiest/whipmaking/maniculatus:output",
        "leggiest/pneumas/philocomal:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
        "leggiest_bouche_undershored_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["leggiest_bouche_undershored_{chroot}/common_scripts/run_build.sh", "{chroot}", "leggiest_bouche_undershored_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
