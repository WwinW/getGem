#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UITooltip
struct UITooltip_t488;
// UnityEngine.Camera
struct Camera_t171;
// UILabel
struct UILabel_t177;
// UISprite
struct UISprite_t172;
// UnityEngine.GameObject
struct GameObject_t24;
// UnityEngine.Transform
struct Transform_t9;
// UIWidget[]
struct UIWidgetU5BU5D_t489;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// UITooltip
struct  UITooltip_t488  : public MonoBehaviour_t6
{
	// UnityEngine.Camera UITooltip::uiCamera
	Camera_t171 * ___uiCamera_3;
	// UILabel UITooltip::text
	UILabel_t177 * ___text_4;
	// UISprite UITooltip::background
	UISprite_t172 * ___background_5;
	// System.Single UITooltip::appearSpeed
	float ___appearSpeed_6;
	// System.Boolean UITooltip::scalingTransitions
	bool ___scalingTransitions_7;
	// UnityEngine.GameObject UITooltip::mHover
	GameObject_t24 * ___mHover_8;
	// UnityEngine.Transform UITooltip::mTrans
	Transform_t9 * ___mTrans_9;
	// System.Single UITooltip::mTarget
	float ___mTarget_10;
	// System.Single UITooltip::mCurrent
	float ___mCurrent_11;
	// UnityEngine.Vector3 UITooltip::mPos
	Vector3_t34  ___mPos_12;
	// UnityEngine.Vector3 UITooltip::mSize
	Vector3_t34  ___mSize_13;
	// UIWidget[] UITooltip::mWidgets
	UIWidgetU5BU5D_t489* ___mWidgets_14;
};
struct UITooltip_t488_StaticFields{
	// UITooltip UITooltip::mInstance
	UITooltip_t488 * ___mInstance_2;
};
