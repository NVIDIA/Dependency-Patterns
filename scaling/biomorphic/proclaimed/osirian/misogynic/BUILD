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
        "biomorphic/semitransept/endospermous/anomie:output",
        "biomorphic/esau/endospermous/scrupular:output",
        "biomorphic/untellable/dustpans/anthoxanthum:output",
        "biomorphic/bfhd/reitman/bfhd:output",
        "biomorphic/masaridinae/lysolecithin/masaridinae:output",
        "biomorphic/puerpery/endospermous/bargestone:output",
        "biomorphic/proclaimed/vitreous/unprosecuted:output",
        "biomorphic/untellable/whipmaking/prig:output",
        "biomorphic/kronur/vincas/flintstone:output",
        "biomorphic/kronur/criminating/emmers:output",
        "biomorphic/untellable/surprise/pursuant:output",
        "biomorphic/casemate/vincas/desulphuret:output",
        "biomorphic/untellable/pneumas/inimaginable:output",
        "biomorphic/casemate/fittiest/decasualized:output",
        "biomorphic/untellable/santalum/rejuvenator:output",
        "biomorphic/untellable/syndeton/alfur:output",
        "biomorphic/cottontails/reitman/cottontails:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"biomorphic_proclaimed_osirian_misogynic_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["{chroot}/geomorphy/run_build.sh", "{chroot}", "biomorphic_proclaimed_osirian_misogynic_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
