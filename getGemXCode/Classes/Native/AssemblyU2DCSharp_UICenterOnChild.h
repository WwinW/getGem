#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SpringPanel/OnFinished
struct OnFinished_t249;
// UICenterOnChild/OnCenterCallback
struct OnCenterCallback_t247;
// UIScrollView
struct UIScrollView_t230;
// UnityEngine.GameObject
struct GameObject_t24;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// UICenterOnChild
struct  UICenterOnChild_t248  : public MonoBehaviour_t6
{
	// System.Single UICenterOnChild::springStrength
	float ___springStrength_2;
	// System.Single UICenterOnChild::nextPageThreshold
	float ___nextPageThreshold_3;
	// SpringPanel/OnFinished UICenterOnChild::onFinished
	OnFinished_t249 * ___onFinished_4;
	// UICenterOnChild/OnCenterCallback UICenterOnChild::onCenter
	OnCenterCallback_t247 * ___onCenter_5;
	// UIScrollView UICenterOnChild::mScrollView
	UIScrollView_t230 * ___mScrollView_6;
	// UnityEngine.GameObject UICenterOnChild::mCenteredObject
	GameObject_t24 * ___mCenteredObject_7;
};
