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
        "sizz/darkskin/nonbroody:output",
        "worthington/sleided/urartaean/salomonic/pastorally:output",
        "worthington/rotherham/reitman/firmer:output",
        "worthington/rotherham/whalen/poulp:output",
        "sizz/incipiency/klabund:output",
        "worthington/backpacked/pneumas/pneumaticity:output",
        "worthington/rotherham/undivested/televox:output",
        "worthington/backpacked/surprise/torsibility:output",
        "worthington/backpacked/syndeton/pensionary:output",
        "worthington/backpacked/whipmaking/uncoached:output",
        "worthington/backpacked/santalum/lespedeza:output",
        "sizz/endospermous/farrington:output",
        "worthington/mithridatic/endospermous/antiferment:output",
        "worthington/smoh/endospermous/multiplicate:output",
        "worthington/covering/endospermous/sublimers:output",
        "worthington/rotherham/gowrie/rhatania:output",
        "worthington/smoh/endospermous/sharpens:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"sizz_niland_wantonlike_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["sizz_niland_wantonlike_{chroot}/common_scripts/run_build.sh", "{chroot}", "sizz_niland_wantonlike_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
