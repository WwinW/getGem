#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ActiveAnimation
struct ActiveAnimation_t324;
// System.Collections.Generic.List`1<EventDelegate>
struct List_1_t231;
// UnityEngine.GameObject
struct GameObject_t24;
// System.String
struct String_t;
// UnityEngine.Animation
struct Animation_t213;
// UnityEngine.Animator
struct Animator_t284;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "AssemblyU2DCSharp_AnimationOrTween_Direction.h"

// ActiveAnimation
struct  ActiveAnimation_t324  : public MonoBehaviour_t6
{
	// System.Collections.Generic.List`1<EventDelegate> ActiveAnimation::onFinished
	List_1_t231 * ___onFinished_3;
	// UnityEngine.GameObject ActiveAnimation::eventReceiver
	GameObject_t24 * ___eventReceiver_4;
	// System.String ActiveAnimation::callWhenFinished
	String_t* ___callWhenFinished_5;
	// UnityEngine.Animation ActiveAnimation::mAnim
	Animation_t213 * ___mAnim_6;
	// AnimationOrTween.Direction ActiveAnimation::mLastDirection
	int32_t ___mLastDirection_7;
	// AnimationOrTween.Direction ActiveAnimation::mDisableDirection
	int32_t ___mDisableDirection_8;
	// System.Boolean ActiveAnimation::mNotify
	bool ___mNotify_9;
	// UnityEngine.Animator ActiveAnimation::mAnimator
	Animator_t284 * ___mAnimator_10;
	// System.String ActiveAnimation::mClip
	String_t* ___mClip_11;
};
struct ActiveAnimation_t324_StaticFields{
	// ActiveAnimation ActiveAnimation::current
	ActiveAnimation_t324 * ___current_2;
};
