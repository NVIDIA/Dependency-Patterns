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
        "worthington/avidities/pentitol/bourbonnais:output",
        "worthington/cajole/pirtleville/unmaskers:output",
        "worthington/mashed/pentitol/portlaoise:output",
        "worthington/drupe/pentitol/railroadish:output",
        "worthington/drupe/comely/unfarced:output",
        "worthington/phyllade/pentitol/nonstriker:output",
        "worthington/avidities/comely/boabdil:output",
        "worthington/therewhilst/pentitol/chequerwork:output",
        "worthington/therewhilst/comely/inaudibility:output",
        "worthington/uneducated/oxyosphresia/rosttra:output",
        "worthington/covering/endospermous/sublimers:output",
        "worthington/uneducated/bemire/grinter:output",
        "worthington/mashed/comely/refl:output",
        "worthington/phyllade/comely/dormin:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"worthington_phyllade_ermanno_staithmen_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["worthington_phyllade_ermanno_staithmen_{chroot}/common_scripts/run_build.sh", "{chroot}", "worthington_phyllade_ermanno_staithmen_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
