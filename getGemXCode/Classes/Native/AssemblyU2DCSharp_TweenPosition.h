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
// UIRect
struct UIRect_t267;

#include "AssemblyU2DCSharp_UITweener.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// TweenPosition
struct  TweenPosition_t293  : public UITweener_t408
{
	// UnityEngine.Vector3 TweenPosition::from
	Vector3_t34  ___from_20;
	// UnityEngine.Vector3 TweenPosition::to
	Vector3_t34  ___to_21;
	// System.Boolean TweenPosition::worldSpace
	bool ___worldSpace_22;
	// UnityEngine.Transform TweenPosition::mTrans
	Transform_t9 * ___mTrans_23;
	// UIRect TweenPosition::mRect
	UIRect_t267 * ___mRect_24;
};
