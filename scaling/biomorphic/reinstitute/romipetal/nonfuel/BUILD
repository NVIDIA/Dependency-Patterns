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
        "biomorphic/semitransept/endospermous/sneezers:output",
        "biomorphic/rebaptizer/lysolecithin/ancestorial:output",
        "biomorphic/mex/theologised/elma:output",
        "biomorphic/linkiest/reitman/linkiest:output",
        "biomorphic/reinstitute/eckhart/vasileior:output",
        "biomorphic/reinstitute/uncustomed/pleiotropism:output",
        "biomorphic/reinstitute/featheredges/goggan:output",
        "biomorphic/mex/megalonyx/ceraunics:output",
        "biomorphic/hookworm/hereditably/centrisms:output",
        "biomorphic/semitransept/endospermous/algonkins:output",
        "biomorphic/semitransept/endospermous/mesochilium:output",
        "biomorphic/efractory/berseems/spearheads:output",
        "biomorphic/semitransept/endospermous/unsacerdotal:output",
        "biomorphic/reinstitute/quarrelproof/dermatomere:output",
        "biomorphic/rebaptizer/lysolecithin/ancestorial:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"biomorphic_reinstitute_romipetal_nonfuel_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["{chroot}/geomorphy/run_build.sh", "{chroot}", "biomorphic_reinstitute_romipetal_nonfuel_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
