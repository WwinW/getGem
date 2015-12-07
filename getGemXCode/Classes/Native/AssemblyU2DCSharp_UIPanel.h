#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UIPanel>
struct List_1_t477;
// UIPanel/OnGeometryUpdated
struct OnGeometryUpdated_t473;
// System.Collections.Generic.List`1<UIWidget>
struct List_1_t475;
// System.Collections.Generic.List`1<UIDrawCall>
struct List_1_t476;
// UIPanel/OnClippingMoved
struct OnClippingMoved_t474;
// UnityEngine.Texture2D
struct Texture2D_t71;
// System.Single[]
struct SingleU5BU5D_t50;
// UIPanel
struct UIPanel_t266;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t36;
// UIDrawCall/OnRenderCallback
struct OnRenderCallback_t370;

#include "AssemblyU2DCSharp_UIRect.h"
#include "AssemblyU2DCSharp_UIPanel_RenderQueue.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "UnityEngine_UnityEngine_Vector4.h"
#include "AssemblyU2DCSharp_UIDrawCall_Clipping.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// UIPanel
struct  UIPanel_t266  : public UIRect_t267
{
	// UIPanel/OnGeometryUpdated UIPanel::onGeometryUpdated
	OnGeometryUpdated_t473 * ___onGeometryUpdated_23;
	// System.Boolean UIPanel::showInPanelTool
	bool ___showInPanelTool_24;
	// System.Boolean UIPanel::generateNormals
	bool ___generateNormals_25;
	// System.Boolean UIPanel::widgetsAreStatic
	bool ___widgetsAreStatic_26;
	// System.Boolean UIPanel::cullWhileDragging
	bool ___cullWhileDragging_27;
	// System.Boolean UIPanel::alwaysOnScreen
	bool ___alwaysOnScreen_28;
	// System.Boolean UIPanel::anchorOffset
	bool ___anchorOffset_29;
	// System.Boolean UIPanel::softBorderPadding
	bool ___softBorderPadding_30;
	// UIPanel/RenderQueue UIPanel::renderQueue
	int32_t ___renderQueue_31;
	// System.Int32 UIPanel::startingRenderQueue
	int32_t ___startingRenderQueue_32;
	// System.Collections.Generic.List`1<UIWidget> UIPanel::widgets
	List_1_t475 * ___widgets_33;
	// System.Collections.Generic.List`1<UIDrawCall> UIPanel::drawCalls
	List_1_t476 * ___drawCalls_34;
	// UnityEngine.Matrix4x4 UIPanel::worldToLocal
	Matrix4x4_t401  ___worldToLocal_35;
	// UnityEngine.Vector4 UIPanel::drawCallClipRange
	Vector4_t391  ___drawCallClipRange_36;
	// UIPanel/OnClippingMoved UIPanel::onClipMove
	OnClippingMoved_t474 * ___onClipMove_37;
	// UnityEngine.Texture2D UIPanel::mClipTexture
	Texture2D_t71 * ___mClipTexture_38;
	// System.Single UIPanel::mAlpha
	float ___mAlpha_39;
	// UIDrawCall/Clipping UIPanel::mClipping
	int32_t ___mClipping_40;
	// UnityEngine.Vector4 UIPanel::mClipRange
	Vector4_t391  ___mClipRange_41;
	// UnityEngine.Vector2 UIPanel::mClipSoftness
	Vector2_t54  ___mClipSoftness_42;
	// System.Int32 UIPanel::mDepth
	int32_t ___mDepth_43;
	// System.Int32 UIPanel::mSortingOrder
	int32_t ___mSortingOrder_44;
	// System.Boolean UIPanel::mRebuild
	bool ___mRebuild_45;
	// System.Boolean UIPanel::mResized
	bool ___mResized_46;
	// UnityEngine.Vector2 UIPanel::mClipOffset
	Vector2_t54  ___mClipOffset_47;
	// System.Single UIPanel::mCullTime
	float ___mCullTime_48;
	// System.Single UIPanel::mUpdateTime
	float ___mUpdateTime_49;
	// System.Int32 UIPanel::mMatrixFrame
	int32_t ___mMatrixFrame_50;
	// System.Int32 UIPanel::mAlphaFrameID
	int32_t ___mAlphaFrameID_51;
	// System.Int32 UIPanel::mLayer
	int32_t ___mLayer_52;
	// UnityEngine.Vector2 UIPanel::mMin
	Vector2_t54  ___mMin_54;
	// UnityEngine.Vector2 UIPanel::mMax
	Vector2_t54  ___mMax_55;
	// System.Boolean UIPanel::mHalfPixelOffset
	bool ___mHalfPixelOffset_56;
	// System.Boolean UIPanel::mSortWidgets
	bool ___mSortWidgets_57;
	// System.Boolean UIPanel::mUpdateScroll
	bool ___mUpdateScroll_58;
	// UIPanel UIPanel::mParentPanel
	UIPanel_t266 * ___mParentPanel_59;
	// UIDrawCall/OnRenderCallback UIPanel::mOnRender
	OnRenderCallback_t370 * ___mOnRender_62;
	// System.Boolean UIPanel::mForced
	bool ___mForced_63;
};
struct UIPanel_t266_StaticFields{
	// System.Collections.Generic.List`1<UIPanel> UIPanel::list
	List_1_t477 * ___list_22;
	// System.Single[] UIPanel::mTemp
	SingleU5BU5D_t50* ___mTemp_53;
	// UnityEngine.Vector3[] UIPanel::mCorners
	Vector3U5BU5D_t36* ___mCorners_60;
	// System.Int32 UIPanel::mUpdateFrame
	int32_t ___mUpdateFrame_61;
};
