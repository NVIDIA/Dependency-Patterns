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
        "biomorphic/outtrumped/hypsochromy/chortler/prickshot:output",
        "biomorphic/outtrumped/hypsochromy/superglacial/unblissful:output",
        "biomorphic/surprising/bottu/starchy:output",
        "biomorphic/surprising/cachaemic/posterish:output",
        "biomorphic/surprising/hoon/skeighish:output",
        "biomorphic/surprising/warily/harborful:output",
        "biomorphic/afterwit/heirdom/picrate:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"biomorphic_outtrumped_hypsochromy_waterworks_viewless_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["{chroot}/geomorphy/run_build.sh", "{chroot}", "biomorphic_outtrumped_hypsochromy_waterworks_viewless_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
