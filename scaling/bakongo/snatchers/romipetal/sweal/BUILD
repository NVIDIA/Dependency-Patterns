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
        "bakongo/muscovade/romipetal/uravan:output",
        "bakongo/upglide/endospermous/eosophobia:output",
        "bakongo/siccan/romipetal/toilingly:output",
        "bakongo/diamantine/ofori/splachnaceae/pelotherapy:output",
        "bakongo/upglide/endospermous/ultrafeudal:output",
        "bakongo/snatchers/reitman/mitreflower:output",
        "bakongo/monofilm/reitman/ballot:output",
        "bakongo/upglide/endospermous/espier:output",
        "bakongo/snatchers/vincas/recrayed:output",
        "bakongo/upglide/endospermous/phantomship:output",
        "bakongo/upglide/endospermous/khoisan:output",
        "bakongo/diamantine/ofori/endospermous/jocuma:output",
        "bakongo/prenominical/romipetal/demonstrated:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"bakongo_snatchers_romipetal_sweal_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["{chroot}/geomorphy/run_build.sh", "{chroot}", "bakongo_snatchers_romipetal_sweal_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
