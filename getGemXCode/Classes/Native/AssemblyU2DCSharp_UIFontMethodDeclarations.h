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

// UIFont
struct UIFont_t295;
// BMFont
struct BMFont_t329;
// System.Collections.Generic.List`1<BMSymbol>
struct List_1_t456;
// UIAtlas
struct UIAtlas_t173;
// UnityEngine.Material
struct Material_t89;
// UnityEngine.Texture2D
struct Texture2D_t71;
// System.String
struct String_t;
// UISpriteData
struct UISpriteData_t335;
// UnityEngine.Font
struct Font_t296;
// UnityEngine.Texture
struct Texture_t376;
// BMSymbol
struct BMSymbol_t334;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_FontStyle.h"

// System.Void UIFont::.ctor()
extern "C" void UIFont__ctor_m2437 (UIFont_t295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BMFont UIFont::get_bmFont()
extern "C" BMFont_t329 * UIFont_get_bmFont_m2438 (UIFont_t295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_bmFont(BMFont)
extern "C" void UIFont_set_bmFont_m2439 (UIFont_t295 * __this, BMFont_t329 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIFont::get_texWidth()
extern "C" int32_t UIFont_get_texWidth_m2440 (UIFont_t295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_texWidth(System.Int32)
extern "C" void UIFont_set_texWidth_m2441 (UIFont_t295 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIFont::get_texHeight()
extern "C" int32_t UIFont_get_texHeight_m2442 (UIFont_t295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_texHeight(System.Int32)
extern "C" void UIFont_set_texHeight_m2443 (UIFont_t295 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIFont::get_hasSymbols()
extern "C" bool UIFont_get_hasSymbols_m2444 (UIFont_t295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<BMSymbol> UIFont::get_symbols()
extern "C" List_1_t456 * UIFont_get_symbols_m2445 (UIFont_t295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIAtlas UIFont::get_atlas()
extern "C" UIAtlas_t173 * UIFont_get_atlas_m2446 (UIFont_t295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_atlas(UIAtlas)
extern "C" void UIFont_set_atlas_m2447 (UIFont_t295 * __this, UIAtlas_t173 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UIFont::get_material()
extern "C" Material_t89 * UIFont_get_material_m2448 (UIFont_t295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_material(UnityEngine.Material)
extern "C" void UIFont_set_material_m2449 (UIFont_t295 * __this, Material_t89 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIFont::get_premultipliedAlpha()
extern "C" bool UIFont_get_premultipliedAlpha_m2450 (UIFont_t295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIFont::get_premultipliedAlphaShader()
extern "C" bool UIFont_get_premultipliedAlphaShader_m2451 (UIFont_t295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIFont::get_packedFontShader()
extern "C" bool UIFont_get_packedFontShader_m2452 (UIFont_t295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UIFont::get_texture()
extern "C" Texture2D_t71 * UIFont_get_texture_m2453 (UIFont_t295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UIFont::get_uvRect()
extern "C" Rect_t55  UIFont_get_uvRect_m2454 (UIFont_t295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_uvRect(UnityEngine.Rect)
extern "C" void UIFont_set_uvRect_m2455 (UIFont_t295 * __this, Rect_t55  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UIFont::get_spriteName()
extern "C" String_t* UIFont_get_spriteName_m2456 (UIFont_t295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_spriteName(System.String)
extern "C" void UIFont_set_spriteName_m2457 (UIFont_t295 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIFont::get_isValid()
extern "C" bool UIFont_get_isValid_m2458 (UIFont_t295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIFont::get_size()
extern "C" int32_t UIFont_get_size_m2459 (UIFont_t295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_size(System.Int32)
extern "C" void UIFont_set_size_m2460 (UIFont_t295 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIFont::get_defaultSize()
extern "C" int32_t UIFont_get_defaultSize_m2461 (UIFont_t295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_defaultSize(System.Int32)
extern "C" void UIFont_set_defaultSize_m2462 (UIFont_t295 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UISpriteData UIFont::get_sprite()
extern "C" UISpriteData_t335 * UIFont_get_sprite_m2463 (UIFont_t295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIFont UIFont::get_replacement()
extern "C" UIFont_t295 * UIFont_get_replacement_m2464 (UIFont_t295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_replacement(UIFont)
extern "C" void UIFont_set_replacement_m2465 (UIFont_t295 * __this, UIFont_t295 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIFont::get_isDynamic()
extern "C" bool UIFont_get_isDynamic_m2466 (UIFont_t295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font UIFont::get_dynamicFont()
extern "C" Font_t296 * UIFont_get_dynamicFont_m2467 (UIFont_t295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_dynamicFont(UnityEngine.Font)
extern "C" void UIFont_set_dynamicFont_m2468 (UIFont_t295 * __this, Font_t296 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.FontStyle UIFont::get_dynamicFontStyle()
extern "C" int32_t UIFont_get_dynamicFontStyle_m2469 (UIFont_t295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_dynamicFontStyle(UnityEngine.FontStyle)
extern "C" void UIFont_set_dynamicFontStyle_m2470 (UIFont_t295 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::Trim()
extern "C" void UIFont_Trim_m2471 (UIFont_t295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIFont::References(UIFont)
extern "C" bool UIFont_References_m2472 (UIFont_t295 * __this, UIFont_t295 * ___font, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIFont::CheckIfRelated(UIFont,UIFont)
extern "C" bool UIFont_CheckIfRelated_m2473 (Object_t * __this /* static, unused */, UIFont_t295 * ___a, UIFont_t295 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UIFont::get_dynamicTexture()
extern "C" Texture_t376 * UIFont_get_dynamicTexture_m2474 (UIFont_t295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::MarkAsChanged()
extern "C" void UIFont_MarkAsChanged_m2475 (UIFont_t295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::UpdateUVRect()
extern "C" void UIFont_UpdateUVRect_m2476 (UIFont_t295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BMSymbol UIFont::GetSymbol(System.String,System.Boolean)
extern "C" BMSymbol_t334 * UIFont_GetSymbol_m2477 (UIFont_t295 * __this, String_t* ___sequence, bool ___createIfMissing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BMSymbol UIFont::MatchSymbol(System.String,System.Int32,System.Int32)
extern "C" BMSymbol_t334 * UIFont_MatchSymbol_m2478 (UIFont_t295 * __this, String_t* ___text, int32_t ___offset, int32_t ___textLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::AddSymbol(System.String,System.String)
extern "C" void UIFont_AddSymbol_m2479 (UIFont_t295 * __this, String_t* ___sequence, String_t* ___spriteName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::RemoveSymbol(System.String)
extern "C" void UIFont_RemoveSymbol_m2480 (UIFont_t295 * __this, String_t* ___sequence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::RenameSymbol(System.String,System.String)
extern "C" void UIFont_RenameSymbol_m2481 (UIFont_t295 * __this, String_t* ___before, String_t* ___after, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIFont::UsesSprite(System.String)
extern "C" bool UIFont_UsesSprite_m2482 (UIFont_t295 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
