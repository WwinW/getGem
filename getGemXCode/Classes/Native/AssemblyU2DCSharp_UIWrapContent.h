#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIWrapContent/OnInitializeItem
struct OnInitializeItem_t322;
// UnityEngine.Transform
struct Transform_t9;
// UIPanel
struct UIPanel_t266;
// UIScrollView
struct UIScrollView_t230;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t20;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// UIWrapContent
struct  UIWrapContent_t323  : public MonoBehaviour_t6
{
	// System.Int32 UIWrapContent::itemSize
	int32_t ___itemSize_2;
	// System.Boolean UIWrapContent::cullContent
	bool ___cullContent_3;
	// System.Int32 UIWrapContent::minIndex
	int32_t ___minIndex_4;
	// System.Int32 UIWrapContent::maxIndex
	int32_t ___maxIndex_5;
	// UIWrapContent/OnInitializeItem UIWrapContent::onInitializeItem
	OnInitializeItem_t322 * ___onInitializeItem_6;
	// UnityEngine.Transform UIWrapContent::mTrans
	Transform_t9 * ___mTrans_7;
	// UIPanel UIWrapContent::mPanel
	UIPanel_t266 * ___mPanel_8;
	// UIScrollView UIWrapContent::mScroll
	UIScrollView_t230 * ___mScroll_9;
	// System.Boolean UIWrapContent::mHorizontal
	bool ___mHorizontal_10;
	// System.Boolean UIWrapContent::mFirstTime
	bool ___mFirstTime_11;
	// System.Collections.Generic.List`1<UnityEngine.Transform> UIWrapContent::mChildren
	List_1_t20 * ___mChildren_12;
};
