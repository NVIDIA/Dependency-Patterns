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
        "gpss/vitreous/thisn:output",
        "worthington/backpacked/pneumas/pneumaticity:output",
        "worthington/backpacked/surprise/torsibility:output",
        "worthington/triadically/lysolecithin/triadically:output",
        "worthington/backpacked/dustpans/minimized:output",
        "worthington/backpacked/syndeton/pensionary:output",
        "worthington/backpacked/whipmaking/uncoached:output",
        "worthington/lydite/vincas/panelings:output",
        "worthington/backpacked/santalum/lespedeza:output",
        "worthington/lydite/criminating/menhadens:output",
        "worthington/mithridatic/endospermous/antiferment:output",
        "worthington/smoh/endospermous/multiplicate:output",
        "worthington/subhymenium/vincas/propose:output",
        "worthington/subhymenium/fittiest/morinaceae:output",
        "worthington/fluoride/reitman/fluoride:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"gpss_osirian_purvey_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["gpss_osirian_purvey_{chroot}/common_scripts/run_build.sh", "{chroot}", "gpss_osirian_purvey_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
