#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UITable/OnReposition
struct OnReposition_t315;
// System.Comparison`1<UnityEngine.Transform>
struct Comparison_1_t276;
// UIPanel
struct UIPanel_t266;

#include "AssemblyU2DCSharp_UIWidgetContainer.h"
#include "AssemblyU2DCSharp_UITable_Direction.h"
#include "AssemblyU2DCSharp_UITable_Sorting.h"
#include "AssemblyU2DCSharp_UIWidget_Pivot.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// UITable
struct  UITable_t260  : public UIWidgetContainer_t239
{
	// System.Int32 UITable::columns
	int32_t ___columns_2;
	// UITable/Direction UITable::direction
	int32_t ___direction_3;
	// UITable/Sorting UITable::sorting
	int32_t ___sorting_4;
	// UIWidget/Pivot UITable::pivot
	int32_t ___pivot_5;
	// UIWidget/Pivot UITable::cellAlignment
	int32_t ___cellAlignment_6;
	// System.Boolean UITable::hideInactive
	bool ___hideInactive_7;
	// System.Boolean UITable::keepWithinPanel
	bool ___keepWithinPanel_8;
	// UnityEngine.Vector2 UITable::padding
	Vector2_t54  ___padding_9;
	// UITable/OnReposition UITable::onReposition
	OnReposition_t315 * ___onReposition_10;
	// System.Comparison`1<UnityEngine.Transform> UITable::onCustomSort
	Comparison_1_t276 * ___onCustomSort_11;
	// UIPanel UITable::mPanel
	UIPanel_t266 * ___mPanel_12;
	// System.Boolean UITable::mInitDone
	bool ___mInitDone_13;
	// System.Boolean UITable::mReposition
	bool ___mReposition_14;
};
