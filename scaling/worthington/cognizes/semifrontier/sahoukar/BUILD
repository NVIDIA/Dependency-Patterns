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
        "worthington/takt/springvale/otopathy:output",
        "worthington/mithridatic/endospermous/antiferment:output",
        "worthington/backpacked/pneumas/pneumaticity:output",
        "worthington/backpacked/surprise/torsibility:output",
        "worthington/cognizes/feps/dowl:output",
        "worthington/backpacked/syndeton/pensionary:output",
        "worthington/takt/criminating/holidam:output",
        "worthington/backpacked/whipmaking/uncoached:output",
        "worthington/takt/mdiv/savin:output",
        "worthington/bruskness/synanthetic/bruskness:output",
        "worthington/backpacked/santalum/lespedeza:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"worthington_cognizes_semifrontier_sahoukar_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["worthington_cognizes_semifrontier_sahoukar_{chroot}/common_scripts/run_build.sh", "{chroot}", "worthington_cognizes_semifrontier_sahoukar_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
