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
        "sizz/darkskin/nonbroody:output",
        "worthington/uneducated/gildford/thumps:output",
        "worthington/backpacked/surprise/torsibility:output",
        "worthington/uneducated/criminating/vallary:output",
        "worthington/uneducated/reitman/ruing:output",
        "worthington/covering/endospermous/hymner:output",
        "worthington/sleided/acrology/matcher/eurytopicity:output",
        "worthington/sleided/acrology/qung/indusiate:output",
        "worthington/slaveless/reitman/slaveless:output",
        "sizz/endospermous/farrington:output",
        "worthington/ihp/endospermous/automation:output",
        "worthington/mithridatic/endospermous/antiferment:output",
        "worthington/uneducated/unspiteful/volkslied:output",
        "worthington/covering/endospermous/sublimers:output",
        "worthington/sleided/acrology/trenchlike/backblocks:output",
        "worthington/uneducated/sow/melanion:output",
        "worthington/covering/endospermous/slbm:output",
        "worthington/mithridatic/endospermous/filbert:output",
        "worthington/smoh/endospermous/sharpens:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"sizz_afterwrist_helioscopy_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["sizz_afterwrist_helioscopy_{chroot}/common_scripts/run_build.sh", "{chroot}", "sizz_afterwrist_helioscopy_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
