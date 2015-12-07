#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SpringPanel
struct SpringPanel_t364;
// SpringPanel/OnFinished
struct OnFinished_t249;
// UIPanel
struct UIPanel_t266;
// UnityEngine.Transform
struct Transform_t9;
// UIScrollView
struct UIScrollView_t230;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// SpringPanel
struct  SpringPanel_t364  : public MonoBehaviour_t6
{
	// UnityEngine.Vector3 SpringPanel::target
	Vector3_t34  ___target_3;
	// System.Single SpringPanel::strength
	float ___strength_4;
	// SpringPanel/OnFinished SpringPanel::onFinished
	OnFinished_t249 * ___onFinished_5;
	// UIPanel SpringPanel::mPanel
	UIPanel_t266 * ___mPanel_6;
	// UnityEngine.Transform SpringPanel::mTrans
	Transform_t9 * ___mTrans_7;
	// UIScrollView SpringPanel::mDrag
	UIScrollView_t230 * ___mDrag_8;
};
struct SpringPanel_t364_StaticFields{
	// SpringPanel SpringPanel::current
	SpringPanel_t364 * ___current_2;
};
