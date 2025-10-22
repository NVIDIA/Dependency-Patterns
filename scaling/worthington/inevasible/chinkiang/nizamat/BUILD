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
        "worthington/inevasible/terebratula/commissioner:output",
        "worthington/inevasible/perisinuous/ohmmeter:output",
        "worthington/inevasible/oppositely/sprawler:output",
        "worthington/inevasible/polyglottal/sebate:output",
        "worthington/inevasible/lentiform/litigant:output",
        "worthington/inevasible/unifolium/dampest:output",
        "worthington/inevasible/spattered/huskey:output",
        "worthington/inevasible/vairee/overdrench:output",
        "worthington/inevasible/overstalely/snuffling:output",
        "worthington/inevasible/sthenic/glazers:output",
        "worthington/inevasible/longwall/pollution:output",
        "worthington/inevasible/extricated/zaniest:output",
        "worthington/inevasible/quests/genius:output",
        "worthington/inevasible/acquisible/gaskets:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"worthington_inevasible_chinkiang_nizamat_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["worthington_inevasible_chinkiang_nizamat_{chroot}/common_scripts/run_build.sh", "{chroot}", "worthington_inevasible_chinkiang_nizamat_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
