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
#include "UnityEngine_UnityEngine_Quaternion.h"

// UIButtonRotation
struct  UIButtonRotation_t245  : public MonoBehaviour_t6
{
	// UnityEngine.Transform UIButtonRotation::tweenTarget
	Transform_t9 * ___tweenTarget_2;
	// UnityEngine.Vector3 UIButtonRotation::hover
	Vector3_t34  ___hover_3;
	// UnityEngine.Vector3 UIButtonRotation::pressed
	Vector3_t34  ___pressed_4;
	// System.Single UIButtonRotation::duration
	float ___duration_5;
	// UnityEngine.Quaternion UIButtonRotation::mRot
	Quaternion_t63  ___mRot_6;
	// System.Boolean UIButtonRotation::mStarted
	bool ___mStarted_7;
};
