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
        "biomorphic/reinstitute/endospermous/lazzaroni:output",
        "biomorphic/tailorwise/cgx/hotdog:output",
        "biomorphic/puerpery/endospermous/bargestone:output",
        "biomorphic/untellable/surprise/pursuant:output",
        "biomorphic/outtrumped/billowing/lepsaria/acclinate:output",
        "biomorphic/semitransept/endospermous/herreid:output",
        "biomorphic/reinstitute/forsythe/besmutting:output",
        "biomorphic/outtrumped/billowing/owades/appendixed:output",
        "biomorphic/semitransept/endospermous/pining:output",
        "biomorphic/reinstitute/differen/wrannock:output",
        "nonsovereign/endospermous/squareman:output",
        "biomorphic/semitransept/endospermous/biles:output",
        "biomorphic/outtrumped/billowing/solvolyzed/neglectedly:output",
        "nonsovereign/endospermous/snicking:output",
        "nonsovereign/endospermous/glimes:output",
        "biomorphic/enterozoa/nubbiest/kilimanjaro:output",
        "biomorphic/outtrumped/billowing/boardroom/victoriana:output",
        "biomorphic/rectocolitic/haircuts/tunesmith:output",
        "biomorphic/semitransept/endospermous/sublimed:output",
        "nonsovereign/columbarium/septiferous:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"nonsovereign_jackdaws_superculture_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["nonsovereign_jackdaws_superculture_{chroot}/common_scripts/run_build.sh", "{chroot}", "nonsovereign_jackdaws_superculture_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
