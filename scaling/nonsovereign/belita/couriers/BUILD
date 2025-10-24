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
        "biomorphic/reinstitute/odograph/medicks:output",
        "biomorphic/reinstitute/endospermous/lazzaroni:output",
        "biomorphic/reinstitute/romipetal/amazilia:output",
        "nonsovereign/harpins/meanest:output",
        "biomorphic/reinstitute/endospermous/acacian:output",
        "biomorphic/puerpery/endospermous/bargestone:output",
        "nonsovereign/unconfound/nephrectasis:output",
        "biomorphic/reinstitute/endospermous/draftsman:output",
        "nonsovereign/endospermous/glimes:output",
        "biomorphic/reinstitute/endospermous/reemphasized:output",
        "biomorphic/untellable/surprise/pursuant:output",
        "nonsovereign/arecaceous/covetiveness:output",
        "biomorphic/reinstitute/endospermous/vitaminizing:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"nonsovereign_belita_couriers_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["nonsovereign_belita_couriers_{chroot}/common_scripts/run_build.sh", "{chroot}", "nonsovereign_belita_couriers_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
