#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody
struct Rigidbody_t105;
// UnityEngine.Transform
struct Transform_t9;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// Spin
struct  Spin_t217  : public MonoBehaviour_t6
{
	// UnityEngine.Vector3 Spin::rotationsPerSecond
	Vector3_t34  ___rotationsPerSecond_2;
	// System.Boolean Spin::ignoreTimeScale
	bool ___ignoreTimeScale_3;
	// UnityEngine.Rigidbody Spin::mRb
	Rigidbody_t105 * ___mRb_4;
	// UnityEngine.Transform Spin::mTrans
	Transform_t9 * ___mTrans_5;
};
