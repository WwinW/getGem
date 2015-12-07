#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// BetterList`1<UIScrollView>
struct BetterList_1_t310;
// UIProgressBar
struct UIProgressBar_t221;
// UIScrollView/OnDragNotification
struct OnDragNotification_t309;
// UnityEngine.Transform
struct Transform_t9;
// UIPanel
struct UIPanel_t266;
// UICenterOnChild
struct UICenterOnChild_t248;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "AssemblyU2DCSharp_UIScrollView_Movement.h"
#include "AssemblyU2DCSharp_UIScrollView_DragEffect.h"
#include "AssemblyU2DCSharp_UIScrollView_ShowCondition.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "AssemblyU2DCSharp_UIWidget_Pivot.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Plane.h"
#include "UnityEngine_UnityEngine_Bounds.h"

// UIScrollView
struct  UIScrollView_t230  : public MonoBehaviour_t6
{
	// UIScrollView/Movement UIScrollView::movement
	int32_t ___movement_3;
	// UIScrollView/DragEffect UIScrollView::dragEffect
	int32_t ___dragEffect_4;
	// System.Boolean UIScrollView::restrictWithinPanel
	bool ___restrictWithinPanel_5;
	// System.Boolean UIScrollView::disableDragIfFits
	bool ___disableDragIfFits_6;
	// System.Boolean UIScrollView::smoothDragStart
	bool ___smoothDragStart_7;
	// System.Boolean UIScrollView::iOSDragEmulation
	bool ___iOSDragEmulation_8;
	// System.Single UIScrollView::scrollWheelFactor
	float ___scrollWheelFactor_9;
	// System.Single UIScrollView::momentumAmount
	float ___momentumAmount_10;
	// UIProgressBar UIScrollView::horizontalScrollBar
	UIProgressBar_t221 * ___horizontalScrollBar_11;
	// UIProgressBar UIScrollView::verticalScrollBar
	UIProgressBar_t221 * ___verticalScrollBar_12;
	// UIScrollView/ShowCondition UIScrollView::showScrollBars
	int32_t ___showScrollBars_13;
	// UnityEngine.Vector2 UIScrollView::customMovement
	Vector2_t54  ___customMovement_14;
	// UIWidget/Pivot UIScrollView::contentPivot
	int32_t ___contentPivot_15;
	// UIScrollView/OnDragNotification UIScrollView::onDragStarted
	OnDragNotification_t309 * ___onDragStarted_16;
	// UIScrollView/OnDragNotification UIScrollView::onDragFinished
	OnDragNotification_t309 * ___onDragFinished_17;
	// UIScrollView/OnDragNotification UIScrollView::onMomentumMove
	OnDragNotification_t309 * ___onMomentumMove_18;
	// UIScrollView/OnDragNotification UIScrollView::onStoppedMoving
	OnDragNotification_t309 * ___onStoppedMoving_19;
	// UnityEngine.Vector3 UIScrollView::scale
	Vector3_t34  ___scale_20;
	// UnityEngine.Vector2 UIScrollView::relativePositionOnReset
	Vector2_t54  ___relativePositionOnReset_21;
	// UnityEngine.Transform UIScrollView::mTrans
	Transform_t9 * ___mTrans_22;
	// UIPanel UIScrollView::mPanel
	UIPanel_t266 * ___mPanel_23;
	// UnityEngine.Plane UIScrollView::mPlane
	Plane_t268  ___mPlane_24;
	// UnityEngine.Vector3 UIScrollView::mLastPos
	Vector3_t34  ___mLastPos_25;
	// System.Boolean UIScrollView::mPressed
	bool ___mPressed_26;
	// UnityEngine.Vector3 UIScrollView::mMomentum
	Vector3_t34  ___mMomentum_27;
	// System.Single UIScrollView::mScroll
	float ___mScroll_28;
	// UnityEngine.Bounds UIScrollView::mBounds
	Bounds_t269  ___mBounds_29;
	// System.Boolean UIScrollView::mCalculatedBounds
	bool ___mCalculatedBounds_30;
	// System.Boolean UIScrollView::mShouldMove
	bool ___mShouldMove_31;
	// System.Boolean UIScrollView::mIgnoreCallbacks
	bool ___mIgnoreCallbacks_32;
	// System.Int32 UIScrollView::mDragID
	int32_t ___mDragID_33;
	// UnityEngine.Vector2 UIScrollView::mDragStartOffset
	Vector2_t54  ___mDragStartOffset_34;
	// System.Boolean UIScrollView::mDragStarted
	bool ___mDragStarted_35;
	// System.Boolean UIScrollView::mStarted
	bool ___mStarted_36;
	// UICenterOnChild UIScrollView::centerOnChild
	UICenterOnChild_t248 * ___centerOnChild_37;
};
struct UIScrollView_t230_StaticFields{
	// BetterList`1<UIScrollView> UIScrollView::list
	BetterList_1_t310 * ___list_2;
};
