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
        "worthington/backpacked/pneumas/pneumaticity:output",
        "worthington/covering/endospermous/corti:output",
        "worthington/mithridatic/endospermous/faizabad:output",
        "worthington/backpacked/surprise/torsibility:output",
        "worthington/sweetiewife/emparadise/dimaggio:output",
        "worthington/cajole/pirtleville/unmaskers:output",
        "worthington/backpacked/syndeton/pensionary:output",
        "worthington/backpacked/whipmaking/uncoached:output",
        "worthington/mecodonta/recountless/mecodonta:output",
        "worthington/backpacked/santalum/lespedeza:output",
        "worthington/mithridatic/endospermous/antiferment:output",
        "worthington/cacesthesis/lysolecithin/cacesthesis:output",
        "worthington/smoh/endospermous/multiplicate:output",
        "gpss/endospermous/obtruder:output",
        "worthington/covering/endospermous/grimme:output",
        "worthington/covering/endospermous/slbm:output",
        "worthington/mithridatic/endospermous/filbert:output",
        "worthington/covering/endospermous/rabulistic:output",
        "geomorphy:run_build_script",
    ],
    output_files=[
"gpss_unconfining_bioelectric_output.txt",
    ],
    runnable="geomorphy:bash",
    args=["gpss_unconfining_bioelectric_{chroot}/common_scripts/run_build.sh", "{chroot}", "gpss_unconfining_bioelectric_output.txt",],
    runnable_dependencies=[
        "geomorphy:cat",
        "geomorphy:md5sum",
        "geomorphy:cut",
    ],
)
