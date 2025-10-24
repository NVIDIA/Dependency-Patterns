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
        "biomorphic/scaphopod/gog/pyrophanous:output",
        "biomorphic/tropophyte/criminating/bonorum:output",
        "biomorphic/scaphopod/subresults/pacifiers:output",
        "biomorphic/outtrumped/remble/enapt/crypturidae:output",
        "biomorphic/scaphopod/creekfish/mispoint:output",
        "biomorphic/scaphopod/alluminor/misha:output",
        "biomorphic/scaphopod/chocks/brasser:output",
        "biomorphic/scaphopod/becombed/disfavourer:output",
        "biomorphic/scaphopod/infantryman/proclamatory:output",
        "biomorphic/untellable/surprise/pursuant:output",
        "biomorphic/scaphopod/msmete/antireformer:output",
        "biomorphic/scaphopod/defalcator/chastelain:output",
        "biomorphic/scaphopod/snitching/verboten:output",
        "biomorphic/scaphopod/thorpes/doone:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"nonsovereign_singletons_vairagi_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["nonsovereign_singletons_vairagi_{chroot}/common_scripts/run_build.sh", "{chroot}", "nonsovereign_singletons_vairagi_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
