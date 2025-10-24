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
        "worthington/dardic/prickiest/gynaecol:output",
        "worthington/piazzi/burgers/idioretinal:output",
        "worthington/backpacked/pneumas/pneumaticity:output",
        "worthington/backpacked/surprise/torsibility:output",
        "worthington/backpacked/syndeton/pensionary:output",
        "worthington/backpacked/whipmaking/uncoached:output",
        "worthington/slighten/labialised/dicyanine:output",
        "worthington/backpacked/santalum/lespedeza:output",
        "worthington/niduli/shipways/abilla:output",
        "worthington/covering/endospermous/sublimers:output",
        "worthington/slighten/suspiciously/libration:output",
        "worthington/slighten/unpulped/perice:output",
        "worthington/coprolagnist/reitman/coprolagnist:output",
        "worthington/dardic/shinguard/schmucks:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"worthington_rauli_hydros_unplotting_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["worthington_rauli_hydros_unplotting_{chroot}/common_scripts/run_build.sh", "{chroot}", "worthington_rauli_hydros_unplotting_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
