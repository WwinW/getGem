#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIGrid/OnReposition
struct OnReposition_t275;
// System.Comparison`1<UnityEngine.Transform>
struct Comparison_1_t276;
// UIPanel
struct UIPanel_t266;

#include "AssemblyU2DCSharp_UIWidgetContainer.h"
#include "AssemblyU2DCSharp_UIGrid_Arrangement.h"
#include "AssemblyU2DCSharp_UIGrid_Sorting.h"
#include "AssemblyU2DCSharp_UIWidget_Pivot.h"

// UIGrid
struct  UIGrid_t259  : public UIWidgetContainer_t239
{
	// UIGrid/Arrangement UIGrid::arrangement
	int32_t ___arrangement_2;
	// UIGrid/Sorting UIGrid::sorting
	int32_t ___sorting_3;
	// UIWidget/Pivot UIGrid::pivot
	int32_t ___pivot_4;
	// System.Int32 UIGrid::maxPerLine
	int32_t ___maxPerLine_5;
	// System.Single UIGrid::cellWidth
	float ___cellWidth_6;
	// System.Single UIGrid::cellHeight
	float ___cellHeight_7;
	// System.Boolean UIGrid::animateSmoothly
	bool ___animateSmoothly_8;
	// System.Boolean UIGrid::hideInactive
	bool ___hideInactive_9;
	// System.Boolean UIGrid::keepWithinPanel
	bool ___keepWithinPanel_10;
	// UIGrid/OnReposition UIGrid::onReposition
	OnReposition_t275 * ___onReposition_11;
	// System.Comparison`1<UnityEngine.Transform> UIGrid::onCustomSort
	Comparison_1_t276 * ___onCustomSort_12;
	// System.Boolean UIGrid::sorted
	bool ___sorted_13;
	// System.Boolean UIGrid::mReposition
	bool ___mReposition_14;
	// UIPanel UIGrid::mPanel
	UIPanel_t266 * ___mPanel_15;
	// System.Boolean UIGrid::mInitDone
	bool ___mInitDone_16;
};
