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

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "AssemblyU2DCSharp_UIWidget_Pivot.h"
#include "UnityEngine_UnityEngine_Plane.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// UIDragResize
struct  UIDragResize_t270  : public MonoBehaviour_t6
{
	// UIWidget UIDragResize::target
	UIWidget_t176 * ___target_2;
	// UIWidget/Pivot UIDragResize::pivot
	int32_t ___pivot_3;
	// System.Int32 UIDragResize::minWidth
	int32_t ___minWidth_4;
	// System.Int32 UIDragResize::minHeight
	int32_t ___minHeight_5;
	// System.Int32 UIDragResize::maxWidth
	int32_t ___maxWidth_6;
	// System.Int32 UIDragResize::maxHeight
	int32_t ___maxHeight_7;
	// UnityEngine.Plane UIDragResize::mPlane
	Plane_t268  ___mPlane_8;
	// UnityEngine.Vector3 UIDragResize::mRayPos
	Vector3_t34  ___mRayPos_9;
	// UnityEngine.Vector3 UIDragResize::mLocalPos
	Vector3_t34  ___mLocalPos_10;
	// System.Int32 UIDragResize::mWidth
	int32_t ___mWidth_11;
	// System.Int32 UIDragResize::mHeight
	int32_t ___mHeight_12;
	// System.Boolean UIDragResize::mDragging
	bool ___mDragging_13;
};
