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
        "worthington/tassal/entrechat/falterers:output",
        "worthington/backpacked/pneumas/pneumaticity:output",
        "worthington/backpacked/surprise/torsibility:output",
        "worthington/tassal/postabdomen/audres:output",
        "worthington/uneducated/reitman/ruing:output",
        "worthington/backpacked/syndeton/pensionary:output",
        "worthington/backpacked/whipmaking/uncoached:output",
        "worthington/tassal/criminating/desmotrope:output",
        "worthington/backpacked/santalum/lespedeza:output",
        "worthington/tassal/desaturation/unwarnedness:output",
        "worthington/mithridatic/endospermous/antiferment:output",
        "worthington/tassal/springvale/transferable:output",
        "worthington/tassal/gaia/beanweed:output",
        "worthington/tassal/valorie/lichnophora:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"worthington_tassal_garin_inventress_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["worthington_tassal_garin_inventress_{chroot}/common_scripts/run_build.sh", "{chroot}", "worthington_tassal_garin_inventress_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
