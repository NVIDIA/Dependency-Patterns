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
        "worthington/arienzo/lysolecithin/arienzo:output",
        "worthington/moldableness/thrasher/romipetal/ammonoidean:output",
        "worthington/cornball/vincas/pterophorid:output",
        "worthington/backpacked/surprise/torsibility:output",
        "worthington/mecodonta/recountless/mecodonta:output",
        "sizz/endospermous/toxophilous:output",
        "worthington/cornball/crowl/lithoed:output",
        "sizz/endospermous/farrington:output",
        "worthington/mithridatic/endospermous/antiferment:output",
        "worthington/sleided/patrolwomen/synanthetic/concite:output",
        "worthington/cornball/upspurt/fealty:output",
        "worthington/coprolagnist/reitman/coprolagnist:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"sizz_polyphonia_kowhai_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["sizz_polyphonia_kowhai_{chroot}/common_scripts/run_build.sh", "{chroot}", "sizz_polyphonia_kowhai_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
