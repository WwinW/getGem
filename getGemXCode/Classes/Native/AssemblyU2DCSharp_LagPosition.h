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

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// LagPosition
struct  LagPosition_t206  : public MonoBehaviour_t6
{
	// UnityEngine.Vector3 LagPosition::speed
	Vector3_t34  ___speed_2;
	// System.Boolean LagPosition::ignoreTimeScale
	bool ___ignoreTimeScale_3;
	// UnityEngine.Transform LagPosition::mTrans
	Transform_t9 * ___mTrans_4;
	// UnityEngine.Vector3 LagPosition::mRelative
	Vector3_t34  ___mRelative_5;
	// UnityEngine.Vector3 LagPosition::mAbsolute
	Vector3_t34  ___mAbsolute_6;
	// System.Boolean LagPosition::mStarted
	bool ___mStarted_7;
};
