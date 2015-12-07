#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIWidget/OnDimensionsChanged
struct OnDimensionsChanged_t398;
// UIWidget/OnPostFillCallback
struct OnPostFillCallback_t399;
// UIDrawCall/OnRenderCallback
struct OnRenderCallback_t370;
// UIWidget/HitCheck
struct HitCheck_t400;
// UIPanel
struct UIPanel_t266;
// UIGeometry
struct UIGeometry_t390;
// UIDrawCall
struct UIDrawCall_t371;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t36;

#include "AssemblyU2DCSharp_UIRect.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "AssemblyU2DCSharp_UIWidget_Pivot.h"
#include "AssemblyU2DCSharp_UIWidget_AspectRatioSource.h"
#include "UnityEngine_UnityEngine_Vector4.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// UIWidget
struct  UIWidget_t176  : public UIRect_t267
{
	// UnityEngine.Color UIWidget::mColor
	Color_t33  ___mColor_22;
	// UIWidget/Pivot UIWidget::mPivot
	int32_t ___mPivot_23;
	// System.Int32 UIWidget::mWidth
	int32_t ___mWidth_24;
	// System.Int32 UIWidget::mHeight
	int32_t ___mHeight_25;
	// System.Int32 UIWidget::mDepth
	int32_t ___mDepth_26;
	// UIWidget/OnDimensionsChanged UIWidget::onChange
	OnDimensionsChanged_t398 * ___onChange_27;
	// UIWidget/OnPostFillCallback UIWidget::onPostFill
	OnPostFillCallback_t399 * ___onPostFill_28;
	// UIDrawCall/OnRenderCallback UIWidget::mOnRender
	OnRenderCallback_t370 * ___mOnRender_29;
	// System.Boolean UIWidget::autoResizeBoxCollider
	bool ___autoResizeBoxCollider_30;
	// System.Boolean UIWidget::hideIfOffScreen
	bool ___hideIfOffScreen_31;
	// UIWidget/AspectRatioSource UIWidget::keepAspectRatio
	int32_t ___keepAspectRatio_32;
	// System.Single UIWidget::aspectRatio
	float ___aspectRatio_33;
	// UIWidget/HitCheck UIWidget::hitCheck
	HitCheck_t400 * ___hitCheck_34;
	// UIPanel UIWidget::panel
	UIPanel_t266 * ___panel_35;
	// UIGeometry UIWidget::geometry
	UIGeometry_t390 * ___geometry_36;
	// System.Boolean UIWidget::fillGeometry
	bool ___fillGeometry_37;
	// System.Boolean UIWidget::mPlayMode
	bool ___mPlayMode_38;
	// UnityEngine.Vector4 UIWidget::mDrawRegion
	Vector4_t391  ___mDrawRegion_39;
	// UnityEngine.Matrix4x4 UIWidget::mLocalToPanel
	Matrix4x4_t401  ___mLocalToPanel_40;
	// System.Boolean UIWidget::mIsVisibleByAlpha
	bool ___mIsVisibleByAlpha_41;
	// System.Boolean UIWidget::mIsVisibleByPanel
	bool ___mIsVisibleByPanel_42;
	// System.Boolean UIWidget::mIsInFront
	bool ___mIsInFront_43;
	// System.Single UIWidget::mLastAlpha
	float ___mLastAlpha_44;
	// System.Boolean UIWidget::mMoved
	bool ___mMoved_45;
	// UIDrawCall UIWidget::drawCall
	UIDrawCall_t371 * ___drawCall_46;
	// UnityEngine.Vector3[] UIWidget::mCorners
	Vector3U5BU5D_t36* ___mCorners_47;
	// System.Int32 UIWidget::mAlphaFrameID
	int32_t ___mAlphaFrameID_48;
	// System.Int32 UIWidget::mMatrixFrame
	int32_t ___mMatrixFrame_49;
	// UnityEngine.Vector3 UIWidget::mOldV0
	Vector3_t34  ___mOldV0_50;
	// UnityEngine.Vector3 UIWidget::mOldV1
	Vector3_t34  ___mOldV1_51;
};
