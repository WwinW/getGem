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

// LookAtTarget
struct  LookAtTarget_t209  : public MonoBehaviour_t6
{
	// System.Int32 LookAtTarget::level
	int32_t ___level_2;
	// UnityEngine.Transform LookAtTarget::target
	Transform_t9 * ___target_3;
	// System.Single LookAtTarget::speed
	float ___speed_4;
	// UnityEngine.Transform LookAtTarget::mTrans
	Transform_t9 * ___mTrans_5;
};
