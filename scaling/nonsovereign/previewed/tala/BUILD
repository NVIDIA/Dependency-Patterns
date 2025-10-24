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
        "nonsovereign/stallment/abscises:output",
        "nonsovereign/disfrocked/blumenthal:output",
        "biomorphic/puerpery/endospermous/zoning:output",
        "biomorphic/sewerlike/reitman/sewerlike:output",
        "biomorphic/untellable/surprise/pursuant:output",
        "nonsovereign/cunctator/neofiber:output",
        "nonsovereign/dulcifies/binomial:output",
        "nonsovereign/photochemic/beerothite:output",
        "biomorphic/capitalizer/burgers/innovator:output",
        "nonsovereign/diploidic/lazybed:output",
        "nonsovereign/solemnitude/homothermy:output",
        "biomorphic/arrobas/burgers/depravingly:output",
        "nonsovereign/keelhauling/lance:output",
        "biomorphic/cottontails/reitman/cottontails:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"nonsovereign_previewed_tala_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["nonsovereign_previewed_tala_{chroot}/common_scripts/run_build.sh", "{chroot}", "nonsovereign_previewed_tala_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
