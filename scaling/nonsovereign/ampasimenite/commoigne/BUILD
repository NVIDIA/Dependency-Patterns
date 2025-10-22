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
        "biomorphic/reinstitute/endospermous/boilover:output",
        "biomorphic/reinstitute/endospermous/nonbleach:output",
        "biomorphic/unloveliest/endospermous/tempera:output",
        "biomorphic/reinstitute/endospermous/agathist:output",
        "biomorphic/acuerdo/prickiest/scabrousness:output",
        "biomorphic/puerpery/endospermous/bargestone:output",
        "biomorphic/prosaists/routhercock/corkmaking:output",
        "biomorphic/reinstitute/endospermous/reemphasized:output",
        "biomorphic/untellable/surprise/pursuant:output",
        "biomorphic/semitransept/endospermous/demiseason:output",
        "nonsovereign/arnaeus/guidage:output",
        "biomorphic/nimblewit/endospermous/hortorium:output",
        "biomorphic/reinstitute/endospermous/ailantine:output",
        "nonsovereign/endospermous/squareman:output",
        "biomorphic/reinstitute/endospermous/glynis:output",
        "biomorphic/outtrumped/operatively/synanthetic/baryte:output",
        "biomorphic/reinstitute/endospermous/draftsman:output",
        "nonsovereign/endospermous/snicking:output",
        "nonsovereign/endospermous/glimes:output",
        "biomorphic/reinstitute/endospermous/vitaminizing:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"nonsovereign_ampasimenite_commoigne_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["nonsovereign_ampasimenite_commoigne_{chroot}/common_scripts/run_build.sh", "{chroot}", "nonsovereign_ampasimenite_commoigne_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
