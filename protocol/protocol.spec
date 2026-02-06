# SPDX-FileCopyrightText: Copyright (c) 2025 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
# SPDX-License-Identifier: MIT

# Simple protocol specification
# Format: MESSAGE <name> followed by FIELD <name> <type>

MESSAGE LoginRequest
  FIELD username string
  FIELD password string

MESSAGE StatusUpdate
  FIELD code int
  FIELD message string

MESSAGE DataPacket
  FIELD id int
  FIELD payload string
  FIELD size int



