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
        "worthington/backpacked/syndeton/pensionary:output",
        "worthington/backpacked/whipmaking/uncoached:output",
        "worthington/inexpectant/studs/waterside:output",
        "worthington/backpacked/santalum/lespedeza:output",
        "sizz/endospermous/farrington:output",
        "worthington/sleided/moraller/perchromate/energids:output",
        "worthington/parryville/heuretic/whirligig:output",
        "worthington/hahnville/glomerella/pomato:output",
        "sizz/routhercock/millionnaire:output",
        "worthington/summanus/preacquiring/tegs:output",
        "worthington/uveas/repossesses/overabusive:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"sizz_copremias_sherifi_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["sizz_copremias_sherifi_{chroot}/common_scripts/run_build.sh", "{chroot}", "sizz_copremias_sherifi_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
