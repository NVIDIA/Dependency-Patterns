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
        "worthington/backpacked/pneumas/pneumaticity:output",
        "worthington/backpacked/surprise/torsibility:output",
        "worthington/sleided/leonore/synanthetic/cocoanuts:output",
        "worthington/backpacked/syndeton/pensionary:output",
        "worthington/backpacked/whipmaking/uncoached:output",
        "worthington/covering/endospermous/twaddy:output",
        "worthington/backpacked/santalum/lespedeza:output",
        "gpss/sabadine/dysodile:output",
        "gpss/endospermous/stateroom:output",
        "gpss/bandore/linalools:output",
        "worthington/alevins/sulpholeic/chloracetate:output",
        "worthington/covering/endospermous/sublimers:output",
        "gpss/endospermous/obtruder:output",
        "worthington/alevins/curtainwise/lovington:output",
        "worthington/sleided/leonore/synanthetic/cocoanuts:output",
        "worthington/alevins/blithen/laryngectomy:output",
        "worthington/sleided/leonore/synanthetic/cocoanuts:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"gpss_endodontics_probuying_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["{chroot}/geomorphy/run_build.sh", "{chroot}", "gpss_endodontics_probuying_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
