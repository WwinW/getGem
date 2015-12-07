#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIWidget
struct UIWidget_t176;
// UITable
struct UITable_t260;

#include "AssemblyU2DCSharp_UITweener.h"

// TweenHeight
struct  TweenHeight_t412  : public UITweener_t408
{
	// System.Int32 TweenHeight::from
	int32_t ___from_20;
	// System.Int32 TweenHeight::to
	int32_t ___to_21;
	// System.Boolean TweenHeight::updateTable
	bool ___updateTable_22;
	// UIWidget TweenHeight::mWidget
	UIWidget_t176 * ___mWidget_23;
	// UITable TweenHeight::mTable
	UITable_t260 * ___mTable_24;
};
