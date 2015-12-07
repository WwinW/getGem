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
#include "UnityEngine_UnityEngine_Quaternion.h"

// TweenTransform
struct  TweenTransform_t416  : public UITweener_t408
{
	// UnityEngine.Transform TweenTransform::from
	Transform_t9 * ___from_20;
	// UnityEngine.Transform TweenTransform::to
	Transform_t9 * ___to_21;
	// System.Boolean TweenTransform::parentWhenFinished
	bool ___parentWhenFinished_22;
	// UnityEngine.Transform TweenTransform::mTrans
	Transform_t9 * ___mTrans_23;
	// UnityEngine.Vector3 TweenTransform::mPos
	Vector3_t34  ___mPos_24;
	// UnityEngine.Quaternion TweenTransform::mRot
	Quaternion_t63  ___mRot_25;
	// UnityEngine.Vector3 TweenTransform::mScale
	Vector3_t34  ___mScale_26;
};
