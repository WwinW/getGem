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

// TweenWidth
struct  TweenWidth_t418  : public UITweener_t408
{
	// System.Int32 TweenWidth::from
	int32_t ___from_20;
	// System.Int32 TweenWidth::to
	int32_t ___to_21;
	// System.Boolean TweenWidth::updateTable
	bool ___updateTable_22;
	// UIWidget TweenWidth::mWidget
	UIWidget_t176 * ___mWidget_23;
	// UITable TweenWidth::mTable
	UITable_t260 * ___mTable_24;
};
