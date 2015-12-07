#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIScrollView
struct UIScrollView_t230;
// UnityEngine.Transform
struct Transform_t9;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// UIDragScrollView
struct  UIDragScrollView_t261  : public MonoBehaviour_t6
{
	// UIScrollView UIDragScrollView::scrollView
	UIScrollView_t230 * ___scrollView_2;
	// UIScrollView UIDragScrollView::draggablePanel
	UIScrollView_t230 * ___draggablePanel_3;
	// UnityEngine.Transform UIDragScrollView::mTrans
	Transform_t9 * ___mTrans_4;
	// UIScrollView UIDragScrollView::mScroll
	UIScrollView_t230 * ___mScroll_5;
	// System.Boolean UIDragScrollView::mAutoFind
	bool ___mAutoFind_6;
	// System.Boolean UIDragScrollView::mStarted
	bool ___mStarted_7;
};
