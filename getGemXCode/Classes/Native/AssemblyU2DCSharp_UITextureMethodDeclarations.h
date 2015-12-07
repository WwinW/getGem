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

// UITexture
struct UITexture_t200;
// UnityEngine.Texture
struct Texture_t376;
// UnityEngine.Material
struct Material_t89;
// UnityEngine.Shader
struct Shader_t377;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t372;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t374;
// BetterList`1<UnityEngine.Color32>
struct BetterList_1_t375;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector4.h"
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UITexture::.ctor()
extern "C" void UITexture__ctor_m2820 (UITexture_t200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UITexture::get_mainTexture()
extern "C" Texture_t376 * UITexture_get_mainTexture_m2821 (UITexture_t200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITexture::set_mainTexture(UnityEngine.Texture)
extern "C" void UITexture_set_mainTexture_m2822 (UITexture_t200 * __this, Texture_t376 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UITexture::get_material()
extern "C" Material_t89 * UITexture_get_material_m2823 (UITexture_t200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITexture::set_material(UnityEngine.Material)
extern "C" void UITexture_set_material_m2824 (UITexture_t200 * __this, Material_t89 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Shader UITexture::get_shader()
extern "C" Shader_t377 * UITexture_get_shader_m2825 (UITexture_t200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITexture::set_shader(UnityEngine.Shader)
extern "C" void UITexture_set_shader_m2826 (UITexture_t200 * __this, Shader_t377 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UITexture::get_premultipliedAlpha()
extern "C" bool UITexture_get_premultipliedAlpha_m2827 (UITexture_t200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UITexture::get_border()
extern "C" Vector4_t391  UITexture_get_border_m2828 (UITexture_t200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITexture::set_border(UnityEngine.Vector4)
extern "C" void UITexture_set_border_m2829 (UITexture_t200 * __this, Vector4_t391  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UITexture::get_uvRect()
extern "C" Rect_t55  UITexture_get_uvRect_m2830 (UITexture_t200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITexture::set_uvRect(UnityEngine.Rect)
extern "C" void UITexture_set_uvRect_m2831 (UITexture_t200 * __this, Rect_t55  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UITexture::get_drawingDimensions()
extern "C" Vector4_t391  UITexture_get_drawingDimensions_m2832 (UITexture_t200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UITexture::get_fixedAspect()
extern "C" bool UITexture_get_fixedAspect_m2833 (UITexture_t200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITexture::set_fixedAspect(System.Boolean)
extern "C" void UITexture_set_fixedAspect_m2834 (UITexture_t200 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITexture::MakePixelPerfect()
extern "C" void UITexture_MakePixelPerfect_m2835 (UITexture_t200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITexture::OnUpdate()
extern "C" void UITexture_OnUpdate_m2836 (UITexture_t200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITexture::OnFill(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>)
extern "C" void UITexture_OnFill_m2837 (UITexture_t200 * __this, BetterList_1_t372 * ___verts, BetterList_1_t374 * ___uvs, BetterList_1_t375 * ___cols, const MethodInfo* method) IL2CPP_METHOD_ATTR;
