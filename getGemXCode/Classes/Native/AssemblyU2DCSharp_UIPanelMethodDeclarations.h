#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UIPanel
struct UIPanel_t266;
// UnityEngine.Texture2D
struct Texture2D_t71;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t36;
// UnityEngine.Transform
struct Transform_t9;
// UIWidget
struct UIWidget_t176;
// UIDrawCall
struct UIDrawCall_t371;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "AssemblyU2DCSharp_UIDrawCall_Clipping.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Vector4.h"
#include "UnityEngine_UnityEngine_Bounds.h"

// System.Void UIPanel::.ctor()
extern "C" void UIPanel__ctor_m2662 (UIPanel_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::.cctor()
extern "C" void UIPanel__cctor_m2663 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIPanel::get_nextUnusedDepth()
extern "C" int32_t UIPanel_get_nextUnusedDepth_m2664 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::get_canBeAnchored()
extern "C" bool UIPanel_get_canBeAnchored_m2665 (UIPanel_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIPanel::get_alpha()
extern "C" float UIPanel_get_alpha_m2666 (UIPanel_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::set_alpha(System.Single)
extern "C" void UIPanel_set_alpha_m2667 (UIPanel_t266 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIPanel::get_depth()
extern "C" int32_t UIPanel_get_depth_m2668 (UIPanel_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::set_depth(System.Int32)
extern "C" void UIPanel_set_depth_m2669 (UIPanel_t266 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIPanel::get_sortingOrder()
extern "C" int32_t UIPanel_get_sortingOrder_m2670 (UIPanel_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::set_sortingOrder(System.Int32)
extern "C" void UIPanel_set_sortingOrder_m2671 (UIPanel_t266 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIPanel::CompareFunc(UIPanel,UIPanel)
extern "C" int32_t UIPanel_CompareFunc_m2672 (Object_t * __this /* static, unused */, UIPanel_t266 * ___a, UIPanel_t266 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIPanel::get_width()
extern "C" float UIPanel_get_width_m2673 (UIPanel_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIPanel::get_height()
extern "C" float UIPanel_get_height_m2674 (UIPanel_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::get_halfPixelOffset()
extern "C" bool UIPanel_get_halfPixelOffset_m2675 (UIPanel_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::get_usedForUI()
extern "C" bool UIPanel_get_usedForUI_m2676 (UIPanel_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UIPanel::get_drawCallOffset()
extern "C" Vector3_t34  UIPanel_get_drawCallOffset_m2677 (UIPanel_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIDrawCall/Clipping UIPanel::get_clipping()
extern "C" int32_t UIPanel_get_clipping_m2678 (UIPanel_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::set_clipping(UIDrawCall/Clipping)
extern "C" void UIPanel_set_clipping_m2679 (UIPanel_t266 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIPanel UIPanel::get_parentPanel()
extern "C" UIPanel_t266 * UIPanel_get_parentPanel_m2680 (UIPanel_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIPanel::get_clipCount()
extern "C" int32_t UIPanel_get_clipCount_m2681 (UIPanel_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::get_hasClipping()
extern "C" bool UIPanel_get_hasClipping_m2682 (UIPanel_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::get_hasCumulativeClipping()
extern "C" bool UIPanel_get_hasCumulativeClipping_m2683 (UIPanel_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::get_clipsChildren()
extern "C" bool UIPanel_get_clipsChildren_m2684 (UIPanel_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UIPanel::get_clipOffset()
extern "C" Vector2_t54  UIPanel_get_clipOffset_m2685 (UIPanel_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::set_clipOffset(UnityEngine.Vector2)
extern "C" void UIPanel_set_clipOffset_m2686 (UIPanel_t266 * __this, Vector2_t54  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::InvalidateClipping()
extern "C" void UIPanel_InvalidateClipping_m2687 (UIPanel_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UIPanel::get_clipTexture()
extern "C" Texture2D_t71 * UIPanel_get_clipTexture_m2688 (UIPanel_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::set_clipTexture(UnityEngine.Texture2D)
extern "C" void UIPanel_set_clipTexture_m2689 (UIPanel_t266 * __this, Texture2D_t71 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UIPanel::get_clipRange()
extern "C" Vector4_t391  UIPanel_get_clipRange_m2690 (UIPanel_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::set_clipRange(UnityEngine.Vector4)
extern "C" void UIPanel_set_clipRange_m2691 (UIPanel_t266 * __this, Vector4_t391  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UIPanel::get_baseClipRegion()
extern "C" Vector4_t391  UIPanel_get_baseClipRegion_m2692 (UIPanel_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::set_baseClipRegion(UnityEngine.Vector4)
extern "C" void UIPanel_set_baseClipRegion_m2693 (UIPanel_t266 * __this, Vector4_t391  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UIPanel::get_finalClipRegion()
extern "C" Vector4_t391  UIPanel_get_finalClipRegion_m2694 (UIPanel_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UIPanel::get_clipSoftness()
extern "C" Vector2_t54  UIPanel_get_clipSoftness_m2695 (UIPanel_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::set_clipSoftness(UnityEngine.Vector2)
extern "C" void UIPanel_set_clipSoftness_m2696 (UIPanel_t266 * __this, Vector2_t54  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UIPanel::get_localCorners()
extern "C" Vector3U5BU5D_t36* UIPanel_get_localCorners_m2697 (UIPanel_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UIPanel::get_worldCorners()
extern "C" Vector3U5BU5D_t36* UIPanel_get_worldCorners_m2698 (UIPanel_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UIPanel::GetSides(UnityEngine.Transform)
extern "C" Vector3U5BU5D_t36* UIPanel_GetSides_m2699 (UIPanel_t266 * __this, Transform_t9 * ___relativeTo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::Invalidate(System.Boolean)
extern "C" void UIPanel_Invalidate_m2700 (UIPanel_t266 * __this, bool ___includeChildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIPanel::CalculateFinalAlpha(System.Int32)
extern "C" float UIPanel_CalculateFinalAlpha_m2701 (UIPanel_t266 * __this, int32_t ___frameID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::SetRect(System.Single,System.Single,System.Single,System.Single)
extern "C" void UIPanel_SetRect_m2702 (UIPanel_t266 * __this, float ___x, float ___y, float ___width, float ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::IsVisible(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool UIPanel_IsVisible_m2703 (UIPanel_t266 * __this, Vector3_t34  ___a, Vector3_t34  ___b, Vector3_t34  ___c, Vector3_t34  ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::IsVisible(UnityEngine.Vector3)
extern "C" bool UIPanel_IsVisible_m2704 (UIPanel_t266 * __this, Vector3_t34  ___worldPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::IsVisible(UIWidget)
extern "C" bool UIPanel_IsVisible_m2705 (UIPanel_t266 * __this, UIWidget_t176 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::Affects(UIWidget)
extern "C" bool UIPanel_Affects_m2706 (UIPanel_t266 * __this, UIWidget_t176 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::RebuildAllDrawCalls()
extern "C" void UIPanel_RebuildAllDrawCalls_m2707 (UIPanel_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::SetDirty()
extern "C" void UIPanel_SetDirty_m2708 (UIPanel_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::Awake()
extern "C" void UIPanel_Awake_m2709 (UIPanel_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::FindParent()
extern "C" void UIPanel_FindParent_m2710 (UIPanel_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::ParentHasChanged()
extern "C" void UIPanel_ParentHasChanged_m2711 (UIPanel_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::OnStart()
extern "C" void UIPanel_OnStart_m2712 (UIPanel_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::OnEnable()
extern "C" void UIPanel_OnEnable_m2713 (UIPanel_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::OnInit()
extern "C" void UIPanel_OnInit_m2714 (UIPanel_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::OnDisable()
extern "C" void UIPanel_OnDisable_m2715 (UIPanel_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::UpdateTransformMatrix()
extern "C" void UIPanel_UpdateTransformMatrix_m2716 (UIPanel_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::OnAnchor()
extern "C" void UIPanel_OnAnchor_m2717 (UIPanel_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::LateUpdate()
extern "C" void UIPanel_LateUpdate_m2718 (UIPanel_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::UpdateSelf()
extern "C" void UIPanel_UpdateSelf_m2719 (UIPanel_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::SortWidgets()
extern "C" void UIPanel_SortWidgets_m2720 (UIPanel_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::FillAllDrawCalls()
extern "C" void UIPanel_FillAllDrawCalls_m2721 (UIPanel_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::FillDrawCall(UIDrawCall)
extern "C" bool UIPanel_FillDrawCall_m2722 (UIPanel_t266 * __this, UIDrawCall_t371 * ___dc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::UpdateDrawCalls()
extern "C" void UIPanel_UpdateDrawCalls_m2723 (UIPanel_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::UpdateLayers()
extern "C" void UIPanel_UpdateLayers_m2724 (UIPanel_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::UpdateWidgets()
extern "C" void UIPanel_UpdateWidgets_m2725 (UIPanel_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIDrawCall UIPanel::FindDrawCall(UIWidget)
extern "C" UIDrawCall_t371 * UIPanel_FindDrawCall_m2726 (UIPanel_t266 * __this, UIWidget_t176 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::AddWidget(UIWidget)
extern "C" void UIPanel_AddWidget_m2727 (UIPanel_t266 * __this, UIWidget_t176 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::RemoveWidget(UIWidget)
extern "C" void UIPanel_RemoveWidget_m2728 (UIPanel_t266 * __this, UIWidget_t176 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::Refresh()
extern "C" void UIPanel_Refresh_m2729 (UIPanel_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UIPanel::CalculateConstrainOffset(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" Vector3_t34  UIPanel_CalculateConstrainOffset_m2730 (UIPanel_t266 * __this, Vector2_t54  ___min, Vector2_t54  ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::ConstrainTargetToBounds(UnityEngine.Transform,UnityEngine.Bounds&,System.Boolean)
extern "C" bool UIPanel_ConstrainTargetToBounds_m2731 (UIPanel_t266 * __this, Transform_t9 * ___target, Bounds_t269 * ___targetBounds, bool ___immediate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::ConstrainTargetToBounds(UnityEngine.Transform,System.Boolean)
extern "C" bool UIPanel_ConstrainTargetToBounds_m2732 (UIPanel_t266 * __this, Transform_t9 * ___target, bool ___immediate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIPanel UIPanel::Find(UnityEngine.Transform)
extern "C" UIPanel_t266 * UIPanel_Find_m2733 (Object_t * __this /* static, unused */, Transform_t9 * ___trans, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIPanel UIPanel::Find(UnityEngine.Transform,System.Boolean)
extern "C" UIPanel_t266 * UIPanel_Find_m2734 (Object_t * __this /* static, unused */, Transform_t9 * ___trans, bool ___createIfMissing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIPanel UIPanel::Find(UnityEngine.Transform,System.Boolean,System.Int32)
extern "C" UIPanel_t266 * UIPanel_Find_m2735 (Object_t * __this /* static, unused */, Transform_t9 * ___trans, bool ___createIfMissing, int32_t ___layer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UIPanel::GetWindowSize()
extern "C" Vector2_t54  UIPanel_GetWindowSize_m2736 (UIPanel_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UIPanel::GetViewSize()
extern "C" Vector2_t54  UIPanel_GetViewSize_m2737 (UIPanel_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
