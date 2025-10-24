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
        "bakongo/isotactic/reitman/isotactic:output",
        "bakongo/diffluent/curiosa/fishweir:output",
        "bakongo/upglide/endospermous/tarred:output",
        "emancipator/endospermous/tobaccoless:output",
        "bakongo/upglide/endospermous/jnanayoga:output",
        "bakongo/did/surprise/whitfinch:output",
        "bakongo/stylosporous/solvents/solvolyzed/trumperiness:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"emancipator_dorippid_yokozunas_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["emancipator_dorippid_yokozunas_{chroot}/common_scripts/run_build.sh", "{chroot}", "emancipator_dorippid_yokozunas_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
