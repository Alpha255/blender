/* SPDX-FileCopyrightText: 2023 Blender Authors
 *
 * SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#include "DNA_customdata_types.h"

namespace blender::draw::pbvh {

struct PBVHBatches;

enum {
  CD_PBVH_CO_TYPE = CD_NUMTYPES,
  CD_PBVH_NO_TYPE = CD_NUMTYPES + 1,
  CD_PBVH_FSET_TYPE = CD_NUMTYPES + 2,
  CD_PBVH_MASK_TYPE = CD_NUMTYPES + 3
};

int material_index_get(PBVHBatches *batches);

}  // namespace blender::draw::pbvh