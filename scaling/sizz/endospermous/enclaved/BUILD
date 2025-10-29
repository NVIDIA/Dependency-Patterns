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
        "sizz/venatorial/stationed:output",
        "worthington/backpacked/pneumas/pneumaticity:output",
        "worthington/covering/endospermous/humourful:output",
        "worthington/assays/endospermous/assays:output",
        "worthington/backpacked/surprise/torsibility:output",
        "sizz/cattleship/teughness:output",
        "worthington/backpacked/syndeton/pensionary:output",
        "worthington/backpacked/whipmaking/uncoached:output",
        "sizz/callithrix/serbia:output",
        "worthington/backpacked/santalum/lespedeza:output",
        "sizz/endospermous/farrington:output",
        "sizz/endospermous/capelet:output",
        "worthington/covering/endospermous/sonicator:output",
        "worthington/covering/endospermous/sublimers:output",
        "worthington/debtors/extacie/cottabus:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
        "sizz_endospermous_enclaved_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["{chroot}/geomorphy/run_build.sh", "{chroot}", "sizz_endospermous_enclaved_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
