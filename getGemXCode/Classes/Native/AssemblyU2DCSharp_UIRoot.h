#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UIRoot>
struct List_1_t480;
// UnityEngine.Transform
struct Transform_t9;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "AssemblyU2DCSharp_UIRoot_Scaling.h"

// UIRoot
struct  UIRoot_t258  : public MonoBehaviour_t6
{
	// UIRoot/Scaling UIRoot::scalingStyle
	int32_t ___scalingStyle_3;
	// System.Int32 UIRoot::manualWidth
	int32_t ___manualWidth_4;
	// System.Int32 UIRoot::manualHeight
	int32_t ___manualHeight_5;
	// System.Int32 UIRoot::minimumHeight
	int32_t ___minimumHeight_6;
	// System.Int32 UIRoot::maximumHeight
	int32_t ___maximumHeight_7;
	// System.Boolean UIRoot::fitWidth
	bool ___fitWidth_8;
	// System.Boolean UIRoot::fitHeight
	bool ___fitHeight_9;
	// System.Boolean UIRoot::adjustByDPI
	bool ___adjustByDPI_10;
	// System.Boolean UIRoot::shrinkPortraitUI
	bool ___shrinkPortraitUI_11;
	// UnityEngine.Transform UIRoot::mTrans
	Transform_t9 * ___mTrans_12;
};
struct UIRoot_t258_StaticFields{
	// System.Collections.Generic.List`1<UIRoot> UIRoot::list
	List_1_t480 * ___list_2;
};
