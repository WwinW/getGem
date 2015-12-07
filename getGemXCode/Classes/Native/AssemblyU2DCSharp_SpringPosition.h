#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SpringPosition
struct SpringPosition_t406;
// SpringPosition/OnFinished
struct OnFinished_t405;
// UnityEngine.GameObject
struct GameObject_t24;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t9;
// UIScrollView
struct UIScrollView_t230;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// SpringPosition
struct  SpringPosition_t406  : public MonoBehaviour_t6
{
	// UnityEngine.Vector3 SpringPosition::target
	Vector3_t34  ___target_3;
	// System.Single SpringPosition::strength
	float ___strength_4;
	// System.Boolean SpringPosition::worldSpace
	bool ___worldSpace_5;
	// System.Boolean SpringPosition::ignoreTimeScale
	bool ___ignoreTimeScale_6;
	// System.Boolean SpringPosition::updateScrollView
	bool ___updateScrollView_7;
	// SpringPosition/OnFinished SpringPosition::onFinished
	OnFinished_t405 * ___onFinished_8;
	// UnityEngine.GameObject SpringPosition::eventReceiver
	GameObject_t24 * ___eventReceiver_9;
	// System.String SpringPosition::callWhenFinished
	String_t* ___callWhenFinished_10;
	// UnityEngine.Transform SpringPosition::mTrans
	Transform_t9 * ___mTrans_11;
	// System.Single SpringPosition::mThreshold
	float ___mThreshold_12;
	// UIScrollView SpringPosition::mSv
	UIScrollView_t230 * ___mSv_13;
};
struct SpringPosition_t406_StaticFields{
	// SpringPosition SpringPosition::current
	SpringPosition_t406 * ___current_2;
};
