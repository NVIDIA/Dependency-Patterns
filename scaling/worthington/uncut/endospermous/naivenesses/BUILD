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
        "worthington/covering/endospermous/festatus:output",
        "worthington/covering/endospermous/tranqs:output",
        "worthington/covering/endospermous/homilist:output",
        "worthington/cajole/pirtleville/unmaskers:output",
        "worthington/pelomedusid/reliers/baccae:output",
        "worthington/covering/endospermous/absalom:output",
        "worthington/syenodiorite/lysolecithin/syenodiorite:output",
        "worthington/ihp/endospermous/elf:output",
        "worthington/frigorifical/lysolecithin/deeper:output",
        "worthington/uneducated/oxyosphresia/rosttra:output",
        "worthington/covering/endospermous/sublimers:output",
        "worthington/doornails/bemire/overletting:output",
        "worthington/pelomedusid/unqueened/pirrie:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
        "worthington_uncut_endospermous_naivenesses_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["worthington_uncut_endospermous_naivenesses_{chroot}/common_scripts/run_build.sh", "{chroot}", "worthington_uncut_endospermous_naivenesses_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
