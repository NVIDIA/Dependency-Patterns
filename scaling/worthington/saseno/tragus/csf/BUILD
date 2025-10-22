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
        "worthington/covering/endospermous/festatus:output",
        "worthington/covering/endospermous/tranqs:output",
        "worthington/covering/endospermous/homilist:output",
        "worthington/cajole/pirtleville/unmaskers:output",
        "worthington/covering/endospermous/absalom:output",
        "worthington/frigorifical/lysolecithin/deeper:output",
        "worthington/ihp/endospermous/elf:output",
        "worthington/uneducated/oxyosphresia/rosttra:output",
        "worthington/pimpled/lysolecithin/pimpled:output",
        "worthington/covering/endospermous/sublimers:output",
        "worthington/doornails/bemire/overletting:output",
        "worthington/pelomedusid/unqueened/pirrie:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"worthington_saseno_tragus_csf_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["worthington_saseno_tragus_csf_{chroot}/common_scripts/run_build.sh", "{chroot}", "worthington_saseno_tragus_csf_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
