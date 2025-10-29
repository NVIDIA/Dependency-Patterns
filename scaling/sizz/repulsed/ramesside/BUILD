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
        "sizz/incipiency/klabund:output",
        "worthington/backpacked/surprise/torsibility:output",
        "worthington/rotherham/abkhasian/upapurana:output",
        "worthington/backpacked/syndeton/pensionary:output",
        "worthington/backpacked/whipmaking/uncoached:output",
        "worthington/rotherham/redlining/junkdealer:output",
        "worthington/rotherham/triglyph/gregarinous:output",
        "worthington/backpacked/santalum/lespedeza:output",
        "sizz/niland/wantonlike:output",
        "sizz/principling/idealistic:output",
        "worthington/rotherham/cowheel/panionian:output",
        "sizz/camped/frontsman:output",
        "worthington/rotherham/stereognosis/cryptopapist:output",
        "worthington/rotherham/cockatoos/undermanning:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"sizz_repulsed_ramesside_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["{chroot}/geomorphy/run_build.sh", "{chroot}", "sizz_repulsed_ramesside_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
