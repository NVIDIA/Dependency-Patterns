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
        "bakongo/diamantine/ofori/endospermous/swounded:output",
        "bakongo/technicality/reitman/enervates:output",
        "bakongo/diamantine/ofori/endospermous/typify:output",
        "bakongo/diamantine/ofori/endospermous/telegraf:output",
        "bakongo/diamantine/ofori/endospermous/kakariki:output",
        "bakongo/diamantine/ofori/endospermous/perorational:output",
        "bakongo/diamantine/ofori/endospermous/bania:output",
        "bakongo/diamantine/ofori/endospermous/cardiform:output",
        "bakongo/upglide/endospermous/mercuriate:output",
        "bakongo/diamantine/ofori/endospermous/ceraunoscopy:output",
        "bakongo/diamantine/ofori/endospermous/maraschinos:output",
        "bakongo/upglide/endospermous/ultrafeudal:output",
        "bakongo/diamantine/ofori/endospermous/unwoefulness:output",
        "bakongo/diamantine/ofori/endospermous/shrewdnesses:output",
        "bakongo/diamantine/ofori/endospermous/talipedic:output",
        "bakongo/diamantine/ofori/endospermous/schema:output",
        "bakongo/diamantine/ofori/endospermous/antepretonic:output",
        "bakongo/diamantine/ofori/endospermous/tussurs:output",
        "bakongo/diamantine/ofori/endospermous/unlodged:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
        "bakongo_diamantine_ofori_endospermous_overfit_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["{chroot}/geomorphy/run_build.sh", "{chroot}", "bakongo_diamantine_ofori_endospermous_overfit_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
