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

// UIAtlas
struct UIAtlas_t173;
// UnityEngine.Material
struct Material_t89;
// System.Collections.Generic.List`1<UISpriteData>
struct List_1_t428;
// UnityEngine.Texture
struct Texture_t376;
// UISpriteData
struct UISpriteData_t335;
// System.String
struct String_t;
// BetterList`1<System.String>
struct BetterList_1_t338;

#include "codegen/il2cpp-codegen.h"

// System.Void UIAtlas::.ctor()
extern "C" void UIAtlas__ctor_m2311 (UIAtlas_t173 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UIAtlas::get_spriteMaterial()
extern "C" Material_t89 * UIAtlas_get_spriteMaterial_m2312 (UIAtlas_t173 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIAtlas::set_spriteMaterial(UnityEngine.Material)
extern "C" void UIAtlas_set_spriteMaterial_m2313 (UIAtlas_t173 * __this, Material_t89 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIAtlas::get_premultipliedAlpha()
extern "C" bool UIAtlas_get_premultipliedAlpha_m2314 (UIAtlas_t173 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UISpriteData> UIAtlas::get_spriteList()
extern "C" List_1_t428 * UIAtlas_get_spriteList_m2315 (UIAtlas_t173 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIAtlas::set_spriteList(System.Collections.Generic.List`1<UISpriteData>)
extern "C" void UIAtlas_set_spriteList_m2316 (UIAtlas_t173 * __this, List_1_t428 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UIAtlas::get_texture()
extern "C" Texture_t376 * UIAtlas_get_texture_m2317 (UIAtlas_t173 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIAtlas::get_pixelSize()
extern "C" float UIAtlas_get_pixelSize_m2318 (UIAtlas_t173 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIAtlas::set_pixelSize(System.Single)
extern "C" void UIAtlas_set_pixelSize_m2319 (UIAtlas_t173 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIAtlas UIAtlas::get_replacement()
extern "C" UIAtlas_t173 * UIAtlas_get_replacement_m2320 (UIAtlas_t173 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIAtlas::set_replacement(UIAtlas)
extern "C" void UIAtlas_set_replacement_m2321 (UIAtlas_t173 * __this, UIAtlas_t173 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UISpriteData UIAtlas::GetSprite(System.String)
extern "C" UISpriteData_t335 * UIAtlas_GetSprite_m2322 (UIAtlas_t173 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UIAtlas::GetRandomSprite(System.String)
extern "C" String_t* UIAtlas_GetRandomSprite_m2323 (UIAtlas_t173 * __this, String_t* ___startsWith, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIAtlas::MarkSpriteListAsChanged()
extern "C" void UIAtlas_MarkSpriteListAsChanged_m2324 (UIAtlas_t173 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIAtlas::SortAlphabetically()
extern "C" void UIAtlas_SortAlphabetically_m2325 (UIAtlas_t173 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetterList`1<System.String> UIAtlas::GetListOfSprites()
extern "C" BetterList_1_t338 * UIAtlas_GetListOfSprites_m2326 (UIAtlas_t173 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetterList`1<System.String> UIAtlas::GetListOfSprites(System.String)
extern "C" BetterList_1_t338 * UIAtlas_GetListOfSprites_m2327 (UIAtlas_t173 * __this, String_t* ___match, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIAtlas::References(UIAtlas)
extern "C" bool UIAtlas_References_m2328 (UIAtlas_t173 * __this, UIAtlas_t173 * ___atlas, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIAtlas::CheckIfRelated(UIAtlas,UIAtlas)
extern "C" bool UIAtlas_CheckIfRelated_m2329 (Object_t * __this /* static, unused */, UIAtlas_t173 * ___a, UIAtlas_t173 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIAtlas::MarkAsChanged()
extern "C" void UIAtlas_MarkAsChanged_m2330 (UIAtlas_t173 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIAtlas::Upgrade()
extern "C" bool UIAtlas_Upgrade_m2331 (UIAtlas_t173 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIAtlas::<SortAlphabetically>m__F(UISpriteData,UISpriteData)
extern "C" int32_t UIAtlas_U3CSortAlphabeticallyU3Em__F_m2332 (Object_t * __this /* static, unused */, UISpriteData_t335 * ___s1, UISpriteData_t335 * ___s2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
