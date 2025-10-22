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
        "worthington/moldableness/thrasher/odograph/floutingly:output",
        "gpss/unconfound/insulation:output",
        "worthington/backpacked/surprise/torsibility:output",
        "worthington/moldableness/thrasher/romipetal/ammonoidean:output",
        "worthington/moldableness/thrasher/endospermous/anilino:output",
        "worthington/moldableness/thrasher/endospermous/saprophytes:output",
        "worthington/moldableness/thrasher/endospermous/incase:output",
        "worthington/moldableness/thrasher/endospermous/enormously:output",
        "gpss/arecaceous/heavenize:output",
        "gpss/harpins/hoverport:output",
        "worthington/mithridatic/endospermous/antiferment:output",
        "gpss/endospermous/obtruder:output",
        "worthington/moldableness/thrasher/endospermous/tutorials:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"gpss_belita_octopede_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["gpss_belita_octopede_{chroot}/common_scripts/run_build.sh", "{chroot}", "gpss_belita_octopede_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
