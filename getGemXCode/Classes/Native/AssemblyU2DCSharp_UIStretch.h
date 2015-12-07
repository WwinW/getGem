#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t171;
// UnityEngine.GameObject
struct GameObject_t24;
// UIWidget
struct UIWidget_t176;
// UnityEngine.Transform
struct Transform_t9;
// UISprite
struct UISprite_t172;
// UIPanel
struct UIPanel_t266;
// UIRoot
struct UIRoot_t258;
// UnityEngine.Animation
struct Animation_t213;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "AssemblyU2DCSharp_UIStretch_Style.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Rect.h"

// UIStretch
struct  UIStretch_t483  : public MonoBehaviour_t6
{
	// UnityEngine.Camera UIStretch::uiCamera
	Camera_t171 * ___uiCamera_2;
	// UnityEngine.GameObject UIStretch::container
	GameObject_t24 * ___container_3;
	// UIStretch/Style UIStretch::style
	int32_t ___style_4;
	// System.Boolean UIStretch::runOnlyOnce
	bool ___runOnlyOnce_5;
	// UnityEngine.Vector2 UIStretch::relativeSize
	Vector2_t54  ___relativeSize_6;
	// UnityEngine.Vector2 UIStretch::initialSize
	Vector2_t54  ___initialSize_7;
	// UnityEngine.Vector2 UIStretch::borderPadding
	Vector2_t54  ___borderPadding_8;
	// UIWidget UIStretch::widgetContainer
	UIWidget_t176 * ___widgetContainer_9;
	// UnityEngine.Transform UIStretch::mTrans
	Transform_t9 * ___mTrans_10;
	// UIWidget UIStretch::mWidget
	UIWidget_t176 * ___mWidget_11;
	// UISprite UIStretch::mSprite
	UISprite_t172 * ___mSprite_12;
	// UIPanel UIStretch::mPanel
	UIPanel_t266 * ___mPanel_13;
	// UIRoot UIStretch::mRoot
	UIRoot_t258 * ___mRoot_14;
	// UnityEngine.Animation UIStretch::mAnim
	Animation_t213 * ___mAnim_15;
	// UnityEngine.Rect UIStretch::mRect
	Rect_t55  ___mRect_16;
	// System.Boolean UIStretch::mStarted
	bool ___mStarted_17;
};
