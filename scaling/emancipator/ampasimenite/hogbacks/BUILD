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
        "emancipator/arnaeus/insurgently:output",
        "bakongo/diamantine/ofori/endospermous/chandi:output",
        "bakongo/diamantine/ofori/endospermous/chremzel:output",
        "bakongo/did/surprise/whitfinch:output",
        "emancipator/endospermous/tobaccoless:output",
        "bakongo/upglide/endospermous/physoclisti:output",
        "bakongo/anaphoria/endospermous/leucocrate:output",
        "bakongo/diamantine/ofori/endospermous/theresita:output",
        "bakongo/stylosporous/roop/synanthetic/ampelidae:output",
        "emancipator/endospermous/signon:output",
        "bakongo/theanthropic/endospermous/bianka:output",
        "emancipator/endospermous/scyphiform:output",
        "bakongo/hypericism/prickiest/unsmashed:output",
        "bakongo/diamantine/ofori/endospermous/lapeyrouse:output",
        "bakongo/diamantine/ofori/endospermous/tapalos:output",
        "bakongo/vignettists/routhercock/bleach:output",
        "bakongo/diamantine/ofori/endospermous/orbiculoidea:output",
        "bakongo/heptene/endospermous/disjasket:output",
        "bakongo/diamantine/ofori/endospermous/deutschland:output",
        "bakongo/diamantine/ofori/endospermous/jocuma:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"emancipator_ampasimenite_hogbacks_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["emancipator_ampasimenite_hogbacks_{chroot}/common_scripts/run_build.sh", "{chroot}", "emancipator_ampasimenite_hogbacks_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
