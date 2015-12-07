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

// UIButtonScale
struct  UIButtonScale_t246  : public MonoBehaviour_t6
{
	// UnityEngine.Transform UIButtonScale::tweenTarget
	Transform_t9 * ___tweenTarget_2;
	// UnityEngine.Vector3 UIButtonScale::hover
	Vector3_t34  ___hover_3;
	// UnityEngine.Vector3 UIButtonScale::pressed
	Vector3_t34  ___pressed_4;
	// System.Single UIButtonScale::duration
	float ___duration_5;
	// UnityEngine.Vector3 UIButtonScale::mScale
	Vector3_t34  ___mScale_6;
	// System.Boolean UIButtonScale::mStarted
	bool ___mStarted_7;
};
