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
        "worthington/piazzi/burgers/idioretinal:output",
        "worthington/rubbingstone/bouche/outjazz:output",
        "worthington/mithridatic/endospermous/faizabad:output",
        "worthington/backpacked/pneumas/pneumaticity:output",
        "worthington/backpacked/surprise/torsibility:output",
        "worthington/sweetiewife/emparadise/dimaggio:output",
        "worthington/mangabey/vincas/vastness:output",
        "worthington/backpacked/dustpans/minimized:output",
        "worthington/backpacked/syndeton/pensionary:output",
        "worthington/backpacked/whipmaking/uncoached:output",
        "worthington/cross/hydros/inducers:output",
        "worthington/mecodonta/recountless/mecodonta:output",
        "worthington/backpacked/santalum/lespedeza:output",
        "worthington/skeltonical/epaulette/reset:output",
        "worthington/mangabey/criminating/necessarius:output",
        "worthington/mithridatic/endospermous/antiferment:output",
        "worthington/covering/endospermous/sublimers:output",
        "worthington/synanons/megalonyx/synanons:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"worthington_paralytica_obumbration_reekiest_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["worthington_paralytica_obumbration_reekiest_{chroot}/common_scripts/run_build.sh", "{chroot}", "worthington_paralytica_obumbration_reekiest_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
