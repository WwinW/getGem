#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t24;
// UIWidget
struct UIWidget_t176;

#include "AssemblyU2DCSharp_UIWidgetContainer.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "AssemblyU2DCSharp_UIButtonColor_State.h"

// UIButtonColor
struct  UIButtonColor_t234  : public UIWidgetContainer_t239
{
	// UnityEngine.GameObject UIButtonColor::tweenTarget
	GameObject_t24 * ___tweenTarget_2;
	// UnityEngine.Color UIButtonColor::hover
	Color_t33  ___hover_3;
	// UnityEngine.Color UIButtonColor::pressed
	Color_t33  ___pressed_4;
	// UnityEngine.Color UIButtonColor::disabledColor
	Color_t33  ___disabledColor_5;
	// System.Single UIButtonColor::duration
	float ___duration_6;
	// UnityEngine.Color UIButtonColor::mStartingColor
	Color_t33  ___mStartingColor_7;
	// UnityEngine.Color UIButtonColor::mDefaultColor
	Color_t33  ___mDefaultColor_8;
	// System.Boolean UIButtonColor::mInitDone
	bool ___mInitDone_9;
	// UIWidget UIButtonColor::mWidget
	UIWidget_t176 * ___mWidget_10;
	// UIButtonColor/State UIButtonColor::mState
	int32_t ___mState_11;
};
