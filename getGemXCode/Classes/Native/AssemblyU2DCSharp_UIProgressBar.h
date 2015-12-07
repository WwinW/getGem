#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIProgressBar
struct UIProgressBar_t221;
// UIProgressBar/OnDragFinished
struct OnDragFinished_t300;
// UnityEngine.Transform
struct Transform_t9;
// UIWidget
struct UIWidget_t176;
// UnityEngine.Camera
struct Camera_t171;
// System.Collections.Generic.List`1<EventDelegate>
struct List_1_t231;

#include "AssemblyU2DCSharp_UIWidgetContainer.h"
#include "AssemblyU2DCSharp_UIProgressBar_FillDirection.h"

// UIProgressBar
struct  UIProgressBar_t221  : public UIWidgetContainer_t239
{
	// UIProgressBar/OnDragFinished UIProgressBar::onDragFinished
	OnDragFinished_t300 * ___onDragFinished_3;
	// UnityEngine.Transform UIProgressBar::thumb
	Transform_t9 * ___thumb_4;
	// UIWidget UIProgressBar::mBG
	UIWidget_t176 * ___mBG_5;
	// UIWidget UIProgressBar::mFG
	UIWidget_t176 * ___mFG_6;
	// System.Single UIProgressBar::mValue
	float ___mValue_7;
	// UIProgressBar/FillDirection UIProgressBar::mFill
	int32_t ___mFill_8;
	// UnityEngine.Transform UIProgressBar::mTrans
	Transform_t9 * ___mTrans_9;
	// System.Boolean UIProgressBar::mIsDirty
	bool ___mIsDirty_10;
	// UnityEngine.Camera UIProgressBar::mCam
	Camera_t171 * ___mCam_11;
	// System.Single UIProgressBar::mOffset
	float ___mOffset_12;
	// System.Int32 UIProgressBar::numberOfSteps
	int32_t ___numberOfSteps_13;
	// System.Collections.Generic.List`1<EventDelegate> UIProgressBar::onChange
	List_1_t231 * ___onChange_14;
};
struct UIProgressBar_t221_StaticFields{
	// UIProgressBar UIProgressBar::current
	UIProgressBar_t221 * ___current_2;
};
