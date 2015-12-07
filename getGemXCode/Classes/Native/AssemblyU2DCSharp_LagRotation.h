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
#include "UnityEngine_UnityEngine_Quaternion.h"

// LagRotation
struct  LagRotation_t207  : public MonoBehaviour_t6
{
	// System.Single LagRotation::speed
	float ___speed_2;
	// System.Boolean LagRotation::ignoreTimeScale
	bool ___ignoreTimeScale_3;
	// UnityEngine.Transform LagRotation::mTrans
	Transform_t9 * ___mTrans_4;
	// UnityEngine.Quaternion LagRotation::mRelative
	Quaternion_t63  ___mRelative_5;
	// UnityEngine.Quaternion LagRotation::mAbsolute
	Quaternion_t63  ___mAbsolute_6;
};
