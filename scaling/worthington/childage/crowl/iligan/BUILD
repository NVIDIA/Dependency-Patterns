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
        "worthington/girsle/pvc/treasuries:output",
        "worthington/covering/endospermous/festatus:output",
        "worthington/covering/endospermous/homilist:output",
        "worthington/aggressors/bemire/cyanastrum:output",
        "worthington/barksome/unqueened/styloglossal:output",
        "worthington/cajole/pirtleville/unmaskers:output",
        "worthington/spelunkers/unqueened/semilethal:output",
        "worthington/barksome/glunch/graphitoidal:output",
        "worthington/chasteningly/unqueened/finishing:output",
        "worthington/rendition/unqueened/cutters:output",
        "worthington/ihp/endospermous/elf:output",
        "worthington/uneducated/oxyosphresia/rosttra:output",
        "worthington/covering/endospermous/sublimers:output",
        "worthington/jasun/endospermous/encarnalised:output",
        "worthington/cajole/lysolecithin/cvr:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"worthington_childage_crowl_iligan_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["{chroot}/geomorphy/run_build.sh", "{chroot}", "worthington_childage_crowl_iligan_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
