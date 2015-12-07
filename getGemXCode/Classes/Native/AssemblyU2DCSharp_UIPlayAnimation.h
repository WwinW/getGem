#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIPlayAnimation
struct UIPlayAnimation_t283;
// UnityEngine.Animation
struct Animation_t213;
// UnityEngine.Animator
struct Animator_t284;
// System.String
struct String_t;
// System.Collections.Generic.List`1<EventDelegate>
struct List_1_t231;
// UnityEngine.GameObject
struct GameObject_t24;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "AssemblyU2DCSharp_AnimationOrTween_Trigger.h"
#include "AssemblyU2DCSharp_AnimationOrTween_Direction.h"
#include "AssemblyU2DCSharp_AnimationOrTween_EnableCondition.h"
#include "AssemblyU2DCSharp_AnimationOrTween_DisableCondition.h"

// UIPlayAnimation
struct  UIPlayAnimation_t283  : public MonoBehaviour_t6
{
	// UnityEngine.Animation UIPlayAnimation::target
	Animation_t213 * ___target_3;
	// UnityEngine.Animator UIPlayAnimation::animator
	Animator_t284 * ___animator_4;
	// System.String UIPlayAnimation::clipName
	String_t* ___clipName_5;
	// AnimationOrTween.Trigger UIPlayAnimation::trigger
	int32_t ___trigger_6;
	// AnimationOrTween.Direction UIPlayAnimation::playDirection
	int32_t ___playDirection_7;
	// System.Boolean UIPlayAnimation::resetOnPlay
	bool ___resetOnPlay_8;
	// System.Boolean UIPlayAnimation::clearSelection
	bool ___clearSelection_9;
	// AnimationOrTween.EnableCondition UIPlayAnimation::ifDisabledOnPlay
	int32_t ___ifDisabledOnPlay_10;
	// AnimationOrTween.DisableCondition UIPlayAnimation::disableWhenFinished
	int32_t ___disableWhenFinished_11;
	// System.Collections.Generic.List`1<EventDelegate> UIPlayAnimation::onFinished
	List_1_t231 * ___onFinished_12;
	// UnityEngine.GameObject UIPlayAnimation::eventReceiver
	GameObject_t24 * ___eventReceiver_13;
	// System.String UIPlayAnimation::callWhenFinished
	String_t* ___callWhenFinished_14;
	// System.Boolean UIPlayAnimation::mStarted
	bool ___mStarted_15;
	// System.Boolean UIPlayAnimation::mActivated
	bool ___mActivated_16;
	// System.Boolean UIPlayAnimation::dragHighlight
	bool ___dragHighlight_17;
};
struct UIPlayAnimation_t283_StaticFields{
	// UIPlayAnimation UIPlayAnimation::current
	UIPlayAnimation_t283 * ___current_2;
};
