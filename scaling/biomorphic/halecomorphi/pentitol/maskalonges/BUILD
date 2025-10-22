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
        "biomorphic/adventured/quantitively/dodecadrachm:output",
        "biomorphic/semitransept/endospermous/anomie:output",
        "biomorphic/adventured/suspiciously/ariadne:output",
        "biomorphic/melancholily/unionic/elevenfold:output",
        "biomorphic/menispermine/endospermous/rafe:output",
        "biomorphic/adventured/torbert/forestless:output",
        "biomorphic/chromometer/pirtleville/scufflers:output",
        "biomorphic/adventured/dissembly/lateliness:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"biomorphic_halecomorphi_pentitol_maskalonges_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["biomorphic_halecomorphi_pentitol_maskalonges_{chroot}/common_scripts/run_build.sh", "{chroot}", "biomorphic_halecomorphi_pentitol_maskalonges_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
