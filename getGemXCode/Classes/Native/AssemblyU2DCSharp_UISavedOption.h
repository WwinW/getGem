#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UIPopupList
struct UIPopupList_t226;
// UIToggle
struct UIToggle_t302;
// UIProgressBar
struct UIProgressBar_t221;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// UISavedOption
struct  UISavedOption_t301  : public MonoBehaviour_t6
{
	// System.String UISavedOption::keyName
	String_t* ___keyName_2;
	// UIPopupList UISavedOption::mList
	UIPopupList_t226 * ___mList_3;
	// UIToggle UISavedOption::mCheck
	UIToggle_t302 * ___mCheck_4;
	// UIProgressBar UISavedOption::mSlider
	UIProgressBar_t221 * ___mSlider_5;
};
