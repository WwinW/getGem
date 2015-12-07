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
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Quaternion.h"

// PanWithMouse
struct  PanWithMouse_t211  : public MonoBehaviour_t6
{
	// UnityEngine.Vector2 PanWithMouse::degrees
	Vector2_t54  ___degrees_2;
	// System.Single PanWithMouse::range
	float ___range_3;
	// UnityEngine.Transform PanWithMouse::mTrans
	Transform_t9 * ___mTrans_4;
	// UnityEngine.Quaternion PanWithMouse::mStart
	Quaternion_t63  ___mStart_5;
	// UnityEngine.Vector2 PanWithMouse::mRot
	Vector2_t54  ___mRot_6;
};
