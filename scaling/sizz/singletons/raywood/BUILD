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
        "sizz/enapt/mcdougall:output",
        "worthington/chlorhydric/creekfish/diphthongic:output",
        "worthington/chlorhydric/thorpes/optotype:output",
        "worthington/backpacked/surprise/torsibility:output",
        "worthington/alevins/criminating/bucconinae:output",
        "worthington/chlorhydric/subresults/neurobiology:output",
        "worthington/chlorhydric/becombed/montasio:output",
        "worthington/chlorhydric/gog/inequality:output",
        "worthington/chlorhydric/snitching/hamartite:output",
        "worthington/chlorhydric/msmete/producible:output",
        "worthington/chlorhydric/alluminor/creosote:output",
        "worthington/chlorhydric/defalcator/abqaiq:output",
        "worthington/chlorhydric/chocks/barodynamics:output",
        "worthington/chlorhydric/infantryman/tiptoeingly:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"sizz_singletons_raywood_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["sizz_singletons_raywood_{chroot}/common_scripts/run_build.sh", "{chroot}", "sizz_singletons_raywood_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
