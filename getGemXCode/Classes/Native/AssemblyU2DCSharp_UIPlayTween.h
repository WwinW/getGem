#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIPlayTween
struct UIPlayTween_t287;
// UnityEngine.GameObject
struct GameObject_t24;
// System.Collections.Generic.List`1<EventDelegate>
struct List_1_t231;
// System.String
struct String_t;
// UITweener[]
struct UITweenerU5BU5D_t288;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "AssemblyU2DCSharp_AnimationOrTween_Trigger.h"
#include "AssemblyU2DCSharp_AnimationOrTween_Direction.h"
#include "AssemblyU2DCSharp_AnimationOrTween_EnableCondition.h"
#include "AssemblyU2DCSharp_AnimationOrTween_DisableCondition.h"

// UIPlayTween
struct  UIPlayTween_t287  : public MonoBehaviour_t6
{
	// UnityEngine.GameObject UIPlayTween::tweenTarget
	GameObject_t24 * ___tweenTarget_3;
	// System.Int32 UIPlayTween::tweenGroup
	int32_t ___tweenGroup_4;
	// AnimationOrTween.Trigger UIPlayTween::trigger
	int32_t ___trigger_5;
	// AnimationOrTween.Direction UIPlayTween::playDirection
	int32_t ___playDirection_6;
	// System.Boolean UIPlayTween::resetOnPlay
	bool ___resetOnPlay_7;
	// System.Boolean UIPlayTween::resetIfDisabled
	bool ___resetIfDisabled_8;
	// AnimationOrTween.EnableCondition UIPlayTween::ifDisabledOnPlay
	int32_t ___ifDisabledOnPlay_9;
	// AnimationOrTween.DisableCondition UIPlayTween::disableWhenFinished
	int32_t ___disableWhenFinished_10;
	// System.Boolean UIPlayTween::includeChildren
	bool ___includeChildren_11;
	// System.Collections.Generic.List`1<EventDelegate> UIPlayTween::onFinished
	List_1_t231 * ___onFinished_12;
	// UnityEngine.GameObject UIPlayTween::eventReceiver
	GameObject_t24 * ___eventReceiver_13;
	// System.String UIPlayTween::callWhenFinished
	String_t* ___callWhenFinished_14;
	// UITweener[] UIPlayTween::mTweens
	UITweenerU5BU5D_t288* ___mTweens_15;
	// System.Boolean UIPlayTween::mStarted
	bool ___mStarted_16;
	// System.Int32 UIPlayTween::mActive
	int32_t ___mActive_17;
	// System.Boolean UIPlayTween::mActivated
	bool ___mActivated_18;
};
struct UIPlayTween_t287_StaticFields{
	// UIPlayTween UIPlayTween::current
	UIPlayTween_t287 * ___current_2;
};
