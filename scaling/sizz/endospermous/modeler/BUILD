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
        "sizz/venatorial/stationed:output",
        "sizz/synanthetic/canc:output",
        "worthington/backpacked/pneumas/pneumaticity:output",
        "sizz/incipiency/klabund:output",
        "worthington/backpacked/surprise/torsibility:output",
        "worthington/backpacked/syndeton/pensionary:output",
        "worthington/backpacked/whipmaking/uncoached:output",
        "worthington/rotherham/redlining/junkdealer:output",
        "worthington/covering/endospermous/hymner:output",
        "worthington/backpacked/santalum/lespedeza:output",
        "worthington/covering/endospermous/yaksha:output",
        "sizz/endospermous/farrington:output",
        "sizz/principling/idealistic:output",
        "sizz/niland/wantonlike:output",
        "worthington/covering/endospermous/sublimers:output",
        "sizz/endospermous/mancelona:output",
        "sizz/camped/frontsman:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
        "sizz_endospermous_modeler_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["sizz_endospermous_modeler_{chroot}/common_scripts/run_build.sh", "{chroot}", "sizz_endospermous_modeler_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
