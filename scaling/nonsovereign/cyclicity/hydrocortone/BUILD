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
        "nonsovereign/disfrocked/blumenthal:output",
        "nonsovereign/metapolitic/feaf:output",
        "biomorphic/outtrumped/ganza/synanthetic/alguacil:output",
        "biomorphic/puerpery/endospermous/zoning:output",
        "biomorphic/untellable/whipmaking/prig:output",
        "biomorphic/bullbat/synanthetic/antisolar:output",
        "biomorphic/sewerlike/reitman/sewerlike:output",
        "biomorphic/semitransept/endospermous/spetch:output",
        "biomorphic/untellable/surprise/pursuant:output",
        "nonsovereign/cuspis/armigeri:output",
        "biomorphic/capitalizer/burgers/innovator:output",
        "biomorphic/pulverate/viand/shortheels:output",
        "biomorphic/arrobas/burgers/depravingly:output",
        "biomorphic/untellable/pneumas/inimaginable:output",
        "biomorphic/tropophyte/criminating/bonorum:output",
        "biomorphic/untellable/santalum/rejuvenator:output",
        "biomorphic/untellable/syndeton/alfur:output",
        "biomorphic/cottontails/reitman/cottontails:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"nonsovereign_cyclicity_hydrocortone_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["nonsovereign_cyclicity_hydrocortone_{chroot}/common_scripts/run_build.sh", "{chroot}", "nonsovereign_cyclicity_hydrocortone_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
