#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// BetterList`1<UIToggle>
struct BetterList_1_t317;
// UIToggle
struct UIToggle_t302;
// UIWidget
struct UIWidget_t176;
// UnityEngine.Animation
struct Animation_t213;
// System.Collections.Generic.List`1<EventDelegate>
struct List_1_t231;
// UIToggle/Validate
struct Validate_t316;
// UISprite
struct UISprite_t172;
// UnityEngine.GameObject
struct GameObject_t24;
// System.String
struct String_t;

#include "AssemblyU2DCSharp_UIWidgetContainer.h"

// UIToggle
struct  UIToggle_t302  : public UIWidgetContainer_t239
{
	// System.Int32 UIToggle::group
	int32_t ___group_4;
	// UIWidget UIToggle::activeSprite
	UIWidget_t176 * ___activeSprite_5;
	// UnityEngine.Animation UIToggle::activeAnimation
	Animation_t213 * ___activeAnimation_6;
	// System.Boolean UIToggle::startsActive
	bool ___startsActive_7;
	// System.Boolean UIToggle::instantTween
	bool ___instantTween_8;
	// System.Boolean UIToggle::optionCanBeNone
	bool ___optionCanBeNone_9;
	// System.Collections.Generic.List`1<EventDelegate> UIToggle::onChange
	List_1_t231 * ___onChange_10;
	// UIToggle/Validate UIToggle::validator
	Validate_t316 * ___validator_11;
	// UISprite UIToggle::checkSprite
	UISprite_t172 * ___checkSprite_12;
	// UnityEngine.Animation UIToggle::checkAnimation
	Animation_t213 * ___checkAnimation_13;
	// UnityEngine.GameObject UIToggle::eventReceiver
	GameObject_t24 * ___eventReceiver_14;
	// System.String UIToggle::functionName
	String_t* ___functionName_15;
	// System.Boolean UIToggle::startsChecked
	bool ___startsChecked_16;
	// System.Boolean UIToggle::mIsActive
	bool ___mIsActive_17;
	// System.Boolean UIToggle::mStarted
	bool ___mStarted_18;
};
struct UIToggle_t302_StaticFields{
	// BetterList`1<UIToggle> UIToggle::list
	BetterList_1_t317 * ___list_2;
	// UIToggle UIToggle::current
	UIToggle_t302 * ___current_3;
};
