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

#include "AssemblyU2DCSharp_UITweener.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// TweenRotation
struct  TweenRotation_t414  : public UITweener_t408
{
	// UnityEngine.Vector3 TweenRotation::from
	Vector3_t34  ___from_20;
	// UnityEngine.Vector3 TweenRotation::to
	Vector3_t34  ___to_21;
	// System.Boolean TweenRotation::quaternionLerp
	bool ___quaternionLerp_22;
	// UnityEngine.Transform TweenRotation::mTrans
	Transform_t9 * ___mTrans_23;
};
