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

// UIWidget
struct UIWidget_t176;
// UIDrawCall/OnRenderCallback
struct OnRenderCallback_t370;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t36;
// UnityEngine.Material
struct Material_t89;
// UnityEngine.Texture
struct Texture_t376;
// UnityEngine.Shader
struct Shader_t377;
// UnityEngine.Transform
struct Transform_t9;
// UIPanel
struct UIPanel_t266;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t372;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t374;
// BetterList`1<UnityEngine.Color32>
struct BetterList_1_t375;
// BetterList`1<UnityEngine.Vector4>
struct BetterList_1_t373;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector4.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "AssemblyU2DCSharp_UIWidget_Pivot.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Bounds.h"

// System.Void UIWidget::.ctor()
extern "C" void UIWidget__ctor_m2041 (UIWidget_t176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIDrawCall/OnRenderCallback UIWidget::get_onRender()
extern "C" OnRenderCallback_t370 * UIWidget_get_onRender_m2042 (UIWidget_t176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_onRender(UIDrawCall/OnRenderCallback)
extern "C" void UIWidget_set_onRender_m2043 (UIWidget_t176 * __this, OnRenderCallback_t370 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UIWidget::get_drawRegion()
extern "C" Vector4_t391  UIWidget_get_drawRegion_m2044 (UIWidget_t176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_drawRegion(UnityEngine.Vector4)
extern "C" void UIWidget_set_drawRegion_m2045 (UIWidget_t176 * __this, Vector4_t391  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UIWidget::get_pivotOffset()
extern "C" Vector2_t54  UIWidget_get_pivotOffset_m2046 (UIWidget_t176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIWidget::get_width()
extern "C" int32_t UIWidget_get_width_m2047 (UIWidget_t176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_width(System.Int32)
extern "C" void UIWidget_set_width_m2048 (UIWidget_t176 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIWidget::get_height()
extern "C" int32_t UIWidget_get_height_m2049 (UIWidget_t176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_height(System.Int32)
extern "C" void UIWidget_set_height_m2050 (UIWidget_t176 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UIWidget::get_color()
extern "C" Color_t33  UIWidget_get_color_m2051 (UIWidget_t176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_color(UnityEngine.Color)
extern "C" void UIWidget_set_color_m2052 (UIWidget_t176 * __this, Color_t33  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIWidget::get_alpha()
extern "C" float UIWidget_get_alpha_m2053 (UIWidget_t176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_alpha(System.Single)
extern "C" void UIWidget_set_alpha_m2054 (UIWidget_t176 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIWidget::get_isVisible()
extern "C" bool UIWidget_get_isVisible_m2055 (UIWidget_t176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIWidget::get_hasVertices()
extern "C" bool UIWidget_get_hasVertices_m2056 (UIWidget_t176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIWidget/Pivot UIWidget::get_rawPivot()
extern "C" int32_t UIWidget_get_rawPivot_m2057 (UIWidget_t176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_rawPivot(UIWidget/Pivot)
extern "C" void UIWidget_set_rawPivot_m2058 (UIWidget_t176 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIWidget/Pivot UIWidget::get_pivot()
extern "C" int32_t UIWidget_get_pivot_m2059 (UIWidget_t176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_pivot(UIWidget/Pivot)
extern "C" void UIWidget_set_pivot_m2060 (UIWidget_t176 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIWidget::get_depth()
extern "C" int32_t UIWidget_get_depth_m2061 (UIWidget_t176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_depth(System.Int32)
extern "C" void UIWidget_set_depth_m2062 (UIWidget_t176 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIWidget::get_raycastDepth()
extern "C" int32_t UIWidget_get_raycastDepth_m2063 (UIWidget_t176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UIWidget::get_localCorners()
extern "C" Vector3U5BU5D_t36* UIWidget_get_localCorners_m2064 (UIWidget_t176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UIWidget::get_localSize()
extern "C" Vector2_t54  UIWidget_get_localSize_m2065 (UIWidget_t176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UIWidget::get_localCenter()
extern "C" Vector3_t34  UIWidget_get_localCenter_m2066 (UIWidget_t176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UIWidget::get_worldCorners()
extern "C" Vector3U5BU5D_t36* UIWidget_get_worldCorners_m2067 (UIWidget_t176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UIWidget::get_worldCenter()
extern "C" Vector3_t34  UIWidget_get_worldCenter_m2068 (UIWidget_t176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UIWidget::get_drawingDimensions()
extern "C" Vector4_t391  UIWidget_get_drawingDimensions_m2069 (UIWidget_t176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UIWidget::get_material()
extern "C" Material_t89 * UIWidget_get_material_m2070 (UIWidget_t176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_material(UnityEngine.Material)
extern "C" void UIWidget_set_material_m2071 (UIWidget_t176 * __this, Material_t89 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UIWidget::get_mainTexture()
extern "C" Texture_t376 * UIWidget_get_mainTexture_m2072 (UIWidget_t176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_mainTexture(UnityEngine.Texture)
extern "C" void UIWidget_set_mainTexture_m2073 (UIWidget_t176 * __this, Texture_t376 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Shader UIWidget::get_shader()
extern "C" Shader_t377 * UIWidget_get_shader_m2074 (UIWidget_t176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_shader(UnityEngine.Shader)
extern "C" void UIWidget_set_shader_m2075 (UIWidget_t176 * __this, Shader_t377 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UIWidget::get_relativeSize()
extern "C" Vector2_t54  UIWidget_get_relativeSize_m2076 (UIWidget_t176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIWidget::get_hasBoxCollider()
extern "C" bool UIWidget_get_hasBoxCollider_m2077 (UIWidget_t176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::SetDimensions(System.Int32,System.Int32)
extern "C" void UIWidget_SetDimensions_m2078 (UIWidget_t176 * __this, int32_t ___w, int32_t ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UIWidget::GetSides(UnityEngine.Transform)
extern "C" Vector3U5BU5D_t36* UIWidget_GetSides_m2079 (UIWidget_t176 * __this, Transform_t9 * ___relativeTo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIWidget::CalculateFinalAlpha(System.Int32)
extern "C" float UIWidget_CalculateFinalAlpha_m2080 (UIWidget_t176 * __this, int32_t ___frameID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::UpdateFinalAlpha(System.Int32)
extern "C" void UIWidget_UpdateFinalAlpha_m2081 (UIWidget_t176 * __this, int32_t ___frameID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::Invalidate(System.Boolean)
extern "C" void UIWidget_Invalidate_m2082 (UIWidget_t176 * __this, bool ___includeChildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIWidget::CalculateCumulativeAlpha(System.Int32)
extern "C" float UIWidget_CalculateCumulativeAlpha_m2083 (UIWidget_t176 * __this, int32_t ___frameID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::SetRect(System.Single,System.Single,System.Single,System.Single)
extern "C" void UIWidget_SetRect_m2084 (UIWidget_t176 * __this, float ___x, float ___y, float ___width, float ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::ResizeCollider()
extern "C" void UIWidget_ResizeCollider_m2085 (UIWidget_t176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIWidget::FullCompareFunc(UIWidget,UIWidget)
extern "C" int32_t UIWidget_FullCompareFunc_m2086 (Object_t * __this /* static, unused */, UIWidget_t176 * ___left, UIWidget_t176 * ___right, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIWidget::PanelCompareFunc(UIWidget,UIWidget)
extern "C" int32_t UIWidget_PanelCompareFunc_m2087 (Object_t * __this /* static, unused */, UIWidget_t176 * ___left, UIWidget_t176 * ___right, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UIWidget::CalculateBounds()
extern "C" Bounds_t269  UIWidget_CalculateBounds_m2088 (UIWidget_t176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UIWidget::CalculateBounds(UnityEngine.Transform)
extern "C" Bounds_t269  UIWidget_CalculateBounds_m2089 (UIWidget_t176 * __this, Transform_t9 * ___relativeParent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::SetDirty()
extern "C" void UIWidget_SetDirty_m2090 (UIWidget_t176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::RemoveFromPanel()
extern "C" void UIWidget_RemoveFromPanel_m2091 (UIWidget_t176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::MarkAsChanged()
extern "C" void UIWidget_MarkAsChanged_m2092 (UIWidget_t176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIPanel UIWidget::CreatePanel()
extern "C" UIPanel_t266 * UIWidget_CreatePanel_m2093 (UIWidget_t176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::CheckLayer()
extern "C" void UIWidget_CheckLayer_m2094 (UIWidget_t176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::ParentHasChanged()
extern "C" void UIWidget_ParentHasChanged_m2095 (UIWidget_t176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::Awake()
extern "C" void UIWidget_Awake_m2096 (UIWidget_t176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::OnInit()
extern "C" void UIWidget_OnInit_m2097 (UIWidget_t176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::UpgradeFrom265()
extern "C" void UIWidget_UpgradeFrom265_m2098 (UIWidget_t176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::OnStart()
extern "C" void UIWidget_OnStart_m2099 (UIWidget_t176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::OnAnchor()
extern "C" void UIWidget_OnAnchor_m2100 (UIWidget_t176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::OnUpdate()
extern "C" void UIWidget_OnUpdate_m2101 (UIWidget_t176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::OnApplicationPause(System.Boolean)
extern "C" void UIWidget_OnApplicationPause_m2102 (UIWidget_t176 * __this, bool ___paused, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::OnDisable()
extern "C" void UIWidget_OnDisable_m2103 (UIWidget_t176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::OnDestroy()
extern "C" void UIWidget_OnDestroy_m2104 (UIWidget_t176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIWidget::UpdateVisibility(System.Boolean,System.Boolean)
extern "C" bool UIWidget_UpdateVisibility_m2105 (UIWidget_t176 * __this, bool ___visibleByAlpha, bool ___visibleByPanel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIWidget::UpdateTransform(System.Int32)
extern "C" bool UIWidget_UpdateTransform_m2106 (UIWidget_t176 * __this, int32_t ___frame, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIWidget::UpdateGeometry(System.Int32)
extern "C" bool UIWidget_UpdateGeometry_m2107 (UIWidget_t176 * __this, int32_t ___frame, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::WriteToBuffers(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>,BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector4>)
extern "C" void UIWidget_WriteToBuffers_m2108 (UIWidget_t176 * __this, BetterList_1_t372 * ___v, BetterList_1_t374 * ___u, BetterList_1_t375 * ___c, BetterList_1_t372 * ___n, BetterList_1_t373 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::MakePixelPerfect()
extern "C" void UIWidget_MakePixelPerfect_m2109 (UIWidget_t176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIWidget::get_minWidth()
extern "C" int32_t UIWidget_get_minWidth_m2110 (UIWidget_t176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIWidget::get_minHeight()
extern "C" int32_t UIWidget_get_minHeight_m2111 (UIWidget_t176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UIWidget::get_border()
extern "C" Vector4_t391  UIWidget_get_border_m2112 (UIWidget_t176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_border(UnityEngine.Vector4)
extern "C" void UIWidget_set_border_m2113 (UIWidget_t176 * __this, Vector4_t391  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::OnFill(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>)
extern "C" void UIWidget_OnFill_m2114 (UIWidget_t176 * __this, BetterList_1_t372 * ___verts, BetterList_1_t374 * ___uvs, BetterList_1_t375 * ___cols, const MethodInfo* method) IL2CPP_METHOD_ATTR;
