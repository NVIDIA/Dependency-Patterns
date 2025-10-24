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
        "biomorphic/esau/endospermous/scrupular:output",
        "biomorphic/inhabitancy/undivested/undepleted:output",
        "biomorphic/underbreath/reitman/underbreath:output",
        "biomorphic/sexlocular/maurreen/goldilocks:output",
        "biomorphic/inhabitancy/whalen/gbh:output",
        "biomorphic/puerpery/endospermous/zoning:output",
        "biomorphic/puerpery/endospermous/bargestone:output",
        "biomorphic/inhabitancy/reitman/crocanthemum:output",
        "biomorphic/untellable/whipmaking/prig:output",
        "biomorphic/untellable/surprise/pursuant:output",
        "biomorphic/inhabitancy/gowrie/covarecas:output",
        "biomorphic/outtrumped/retries/pygidia/cabestro:output",
        "nonsovereign/endospermous/chakravartin:output",
        "biomorphic/outtrumped/estevan/currentness/knavishness:output",
        "nonsovereign/endospermous/gayatri:output",
        "biomorphic/untellable/pneumas/inimaginable:output",
        "biomorphic/untellable/syndeton/alfur:output",
        "biomorphic/untellable/santalum/rejuvenator:output",
        "biomorphic/metakinesis/vincas/quink:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
        "nonsovereign_endospermous_enolate_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["nonsovereign_endospermous_enolate_{chroot}/common_scripts/run_build.sh", "{chroot}", "nonsovereign_endospermous_enolate_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
