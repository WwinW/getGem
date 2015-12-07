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
// UnityEngine.Animation
struct Animation_t213;
// UIRoot
struct UIRoot_t258;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "AssemblyU2DCSharp_UIAnchor_Side.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Rect.h"

// UIAnchor
struct  UIAnchor_t425  : public MonoBehaviour_t6
{
	// UnityEngine.Camera UIAnchor::uiCamera
	Camera_t171 * ___uiCamera_2;
	// UnityEngine.GameObject UIAnchor::container
	GameObject_t24 * ___container_3;
	// UIAnchor/Side UIAnchor::side
	int32_t ___side_4;
	// System.Boolean UIAnchor::runOnlyOnce
	bool ___runOnlyOnce_5;
	// UnityEngine.Vector2 UIAnchor::relativeOffset
	Vector2_t54  ___relativeOffset_6;
	// UnityEngine.Vector2 UIAnchor::pixelOffset
	Vector2_t54  ___pixelOffset_7;
	// UIWidget UIAnchor::widgetContainer
	UIWidget_t176 * ___widgetContainer_8;
	// UnityEngine.Transform UIAnchor::mTrans
	Transform_t9 * ___mTrans_9;
	// UnityEngine.Animation UIAnchor::mAnim
	Animation_t213 * ___mAnim_10;
	// UnityEngine.Rect UIAnchor::mRect
	Rect_t55  ___mRect_11;
	// UIRoot UIAnchor::mRoot
	UIRoot_t258 * ___mRoot_12;
	// System.Boolean UIAnchor::mStarted
	bool ___mStarted_13;
};
