/* Copyright 2014-2017 Rene Widera
 *
 * This file is part of PIConGPU.
 *
 * PIConGPU is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * PIConGPU is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with PIConGPU.
 * If not, see <http://www.gnu.org/licenses/>.
 */


#include "picongpu/fields/currentDeposition/Esirkepov/Esirkepov.hpp"
#include "picongpu/fields/currentDeposition/Esirkepov/EsirkepovNative.hpp"
#include "picongpu/fields/currentDeposition/ZigZag/ZigZag.hpp"
#include "picongpu/fields/currentDeposition/EmZ/EmZ.hpp"

#if(SIMDIM==DIM3)
#include "picongpu/fields/currentDeposition/VillaBune/CurrentVillaBune.hpp"
#endif

#include "picongpu/fields/numericalCellTypes/YeeCell.hpp"