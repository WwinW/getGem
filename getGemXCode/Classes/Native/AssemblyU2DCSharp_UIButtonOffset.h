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

// UIButtonOffset
struct  UIButtonOffset_t244  : public MonoBehaviour_t6
{
	// UnityEngine.Transform UIButtonOffset::tweenTarget
	Transform_t9 * ___tweenTarget_2;
	// UnityEngine.Vector3 UIButtonOffset::hover
	Vector3_t34  ___hover_3;
	// UnityEngine.Vector3 UIButtonOffset::pressed
	Vector3_t34  ___pressed_4;
	// System.Single UIButtonOffset::duration
	float ___duration_5;
	// UnityEngine.Vector3 UIButtonOffset::mPos
	Vector3_t34  ___mPos_6;
	// System.Boolean UIButtonOffset::mStarted
	bool ___mStarted_7;
};
