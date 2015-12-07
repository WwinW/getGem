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

// UISprite
struct UISprite_t172;
// UnityEngine.Material
struct Material_t89;
// UIAtlas
struct UIAtlas_t173;
// System.String
struct String_t;
// UISpriteData
struct UISpriteData_t335;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t372;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t374;
// BetterList`1<UnityEngine.Color32>
struct BetterList_1_t375;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector4.h"

// System.Void UISprite::.ctor()
extern "C" void UISprite__ctor_m2753 (UISprite_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UISprite::get_material()
extern "C" Material_t89 * UISprite_get_material_m2754 (UISprite_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIAtlas UISprite::get_atlas()
extern "C" UIAtlas_t173 * UISprite_get_atlas_m2755 (UISprite_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::set_atlas(UIAtlas)
extern "C" void UISprite_set_atlas_m2756 (UISprite_t172 * __this, UIAtlas_t173 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UISprite::get_spriteName()
extern "C" String_t* UISprite_get_spriteName_m2757 (UISprite_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::set_spriteName(System.String)
extern "C" void UISprite_set_spriteName_m2758 (UISprite_t172 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UISprite::get_isValid()
extern "C" bool UISprite_get_isValid_m2759 (UISprite_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UISprite::get_fillCenter()
extern "C" bool UISprite_get_fillCenter_m2760 (UISprite_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::set_fillCenter(System.Boolean)
extern "C" void UISprite_set_fillCenter_m2761 (UISprite_t172 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UISprite::get_border()
extern "C" Vector4_t391  UISprite_get_border_m2762 (UISprite_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UISprite::get_pixelSize()
extern "C" float UISprite_get_pixelSize_m2763 (UISprite_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UISprite::get_minWidth()
extern "C" int32_t UISprite_get_minWidth_m2764 (UISprite_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UISprite::get_minHeight()
extern "C" int32_t UISprite_get_minHeight_m2765 (UISprite_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UISprite::get_drawingDimensions()
extern "C" Vector4_t391  UISprite_get_drawingDimensions_m2766 (UISprite_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UISprite::get_premultipliedAlpha()
extern "C" bool UISprite_get_premultipliedAlpha_m2767 (UISprite_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UISpriteData UISprite::GetAtlasSprite()
extern "C" UISpriteData_t335 * UISprite_GetAtlasSprite_m2768 (UISprite_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::SetAtlasSprite(UISpriteData)
extern "C" void UISprite_SetAtlasSprite_m2769 (UISprite_t172 * __this, UISpriteData_t335 * ___sp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::MakePixelPerfect()
extern "C" void UISprite_MakePixelPerfect_m2770 (UISprite_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::OnInit()
extern "C" void UISprite_OnInit_m2771 (UISprite_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::OnUpdate()
extern "C" void UISprite_OnUpdate_m2772 (UISprite_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::OnFill(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>)
extern "C" void UISprite_OnFill_m2773 (UISprite_t172 * __this, BetterList_1_t372 * ___verts, BetterList_1_t374 * ___uvs, BetterList_1_t375 * ___cols, const MethodInfo* method) IL2CPP_METHOD_ATTR;
