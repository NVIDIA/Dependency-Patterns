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
        "gpss/routhercock/alamanni:output",
        "gpss/pyonephritis/allures:output",
        "worthington/covering/endospermous/brandless:output",
        "worthington/covering/endospermous/sparkingly:output",
        "worthington/backpacked/surprise/torsibility:output",
        "gpss/endospermous/trinities:output",
        "worthington/relation/bummed/most:output",
        "worthington/moldableness/thrasher/quarrelproof/ajo:output",
        "worthington/moldableness/thrasher/endospermous/eligibility:output",
        "worthington/moldableness/thrasher/uncustomed/temperatures:output",
        "worthington/moldableness/thrasher/featheredges/cohette:output",
        "worthington/covering/endospermous/rabulistic:output",
        "gpss/vastest/animalculae:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"gpss_monogenies_handsomeness_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["gpss_monogenies_handsomeness_{chroot}/common_scripts/run_build.sh", "{chroot}", "gpss_monogenies_handsomeness_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
