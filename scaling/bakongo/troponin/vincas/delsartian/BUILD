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
        "bakongo/monofilm/oxyosphresia/ashpan:output",
        "bakongo/diploplacula/lealness/lach:output",
        "bakongo/waywode/unqueened/verbifies:output",
        "bakongo/stinkardly/unqueened/isopodous:output",
        "bakongo/troponin/criminating/laniform:output",
        "bakongo/diploplacula/gnathostomi/cyna:output",
        "bakongo/prolia/pirtleville/ingmar:output",
        "bakongo/theanthropic/endospermous/bianka:output",
        "bakongo/upglide/endospermous/physoclisti:output",
        "bakongo/diploplacula/kufiyeh/septifolious:output",
        "bakongo/upglide/endospermous/bounces:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"bakongo_troponin_vincas_delsartian_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["{chroot}/geomorphy/run_build.sh", "{chroot}", "bakongo_troponin_vincas_delsartian_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
