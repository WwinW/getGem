#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UITweener
struct UITweener_t408;
// UnityEngine.AnimationCurve
struct AnimationCurve_t421;
struct AnimationCurve_t421_marshaled;
// System.Collections.Generic.List`1<EventDelegate>
struct List_1_t231;
// UnityEngine.GameObject
struct GameObject_t24;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "AssemblyU2DCSharp_UITweener_Method.h"
#include "AssemblyU2DCSharp_UITweener_Style.h"

// UITweener
struct  UITweener_t408  : public MonoBehaviour_t6
{
	// UITweener/Method UITweener::method
	int32_t ___method_3;
	// UITweener/Style UITweener::style
	int32_t ___style_4;
	// UnityEngine.AnimationCurve UITweener::animationCurve
	AnimationCurve_t421 * ___animationCurve_5;
	// System.Boolean UITweener::ignoreTimeScale
	bool ___ignoreTimeScale_6;
	// System.Single UITweener::delay
	float ___delay_7;
	// System.Single UITweener::duration
	float ___duration_8;
	// System.Boolean UITweener::steeperCurves
	bool ___steeperCurves_9;
	// System.Int32 UITweener::tweenGroup
	int32_t ___tweenGroup_10;
	// System.Collections.Generic.List`1<EventDelegate> UITweener::onFinished
	List_1_t231 * ___onFinished_11;
	// UnityEngine.GameObject UITweener::eventReceiver
	GameObject_t24 * ___eventReceiver_12;
	// System.String UITweener::callWhenFinished
	String_t* ___callWhenFinished_13;
	// System.Boolean UITweener::mStarted
	bool ___mStarted_14;
	// System.Single UITweener::mStartTime
	float ___mStartTime_15;
	// System.Single UITweener::mDuration
	float ___mDuration_16;
	// System.Single UITweener::mAmountPerDelta
	float ___mAmountPerDelta_17;
	// System.Single UITweener::mFactor
	float ___mFactor_18;
	// System.Collections.Generic.List`1<EventDelegate> UITweener::mTemp
	List_1_t231 * ___mTemp_19;
};
struct UITweener_t408_StaticFields{
	// UITweener UITweener::current
	UITweener_t408 * ___current_2;
};
