#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t9;
// UITable
struct UITable_t260;

#include "AssemblyU2DCSharp_UITweener.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// TweenScale
struct  TweenScale_t415  : public UITweener_t408
{
	// UnityEngine.Vector3 TweenScale::from
	Vector3_t34  ___from_20;
	// UnityEngine.Vector3 TweenScale::to
	Vector3_t34  ___to_21;
	// System.Boolean TweenScale::updateTable
	bool ___updateTable_22;
	// UnityEngine.Transform TweenScale::mTrans
	Transform_t9 * ___mTrans_23;
	// UITable TweenScale::mTable
	UITable_t260 * ___mTable_24;
};
