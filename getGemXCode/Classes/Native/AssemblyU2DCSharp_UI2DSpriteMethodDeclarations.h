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

// UI2DSprite
struct UI2DSprite_t236;
// UnityEngine.Sprite
struct Sprite_t235;
// UnityEngine.Material
struct Material_t89;
// UnityEngine.Shader
struct Shader_t377;
// UnityEngine.Texture
struct Texture_t376;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t372;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t374;
// BetterList`1<UnityEngine.Color32>
struct BetterList_1_t375;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector4.h"

// System.Void UI2DSprite::.ctor()
extern "C" void UI2DSprite__ctor_m2277 (UI2DSprite_t236 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite UI2DSprite::get_sprite2D()
extern "C" Sprite_t235 * UI2DSprite_get_sprite2D_m2278 (UI2DSprite_t236 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UI2DSprite::set_sprite2D(UnityEngine.Sprite)
extern "C" void UI2DSprite_set_sprite2D_m2279 (UI2DSprite_t236 * __this, Sprite_t235 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UI2DSprite::get_material()
extern "C" Material_t89 * UI2DSprite_get_material_m2280 (UI2DSprite_t236 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UI2DSprite::set_material(UnityEngine.Material)
extern "C" void UI2DSprite_set_material_m2281 (UI2DSprite_t236 * __this, Material_t89 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Shader UI2DSprite::get_shader()
extern "C" Shader_t377 * UI2DSprite_get_shader_m2282 (UI2DSprite_t236 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UI2DSprite::set_shader(UnityEngine.Shader)
extern "C" void UI2DSprite_set_shader_m2283 (UI2DSprite_t236 * __this, Shader_t377 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UI2DSprite::get_mainTexture()
extern "C" Texture_t376 * UI2DSprite_get_mainTexture_m2284 (UI2DSprite_t236 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UI2DSprite::get_premultipliedAlpha()
extern "C" bool UI2DSprite_get_premultipliedAlpha_m2285 (UI2DSprite_t236 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UI2DSprite::get_pixelSize()
extern "C" float UI2DSprite_get_pixelSize_m2286 (UI2DSprite_t236 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UI2DSprite::get_drawingDimensions()
extern "C" Vector4_t391  UI2DSprite_get_drawingDimensions_m2287 (UI2DSprite_t236 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UI2DSprite::get_border()
extern "C" Vector4_t391  UI2DSprite_get_border_m2288 (UI2DSprite_t236 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UI2DSprite::set_border(UnityEngine.Vector4)
extern "C" void UI2DSprite_set_border_m2289 (UI2DSprite_t236 * __this, Vector4_t391  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UI2DSprite::OnUpdate()
extern "C" void UI2DSprite_OnUpdate_m2290 (UI2DSprite_t236 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UI2DSprite::MakePixelPerfect()
extern "C" void UI2DSprite_MakePixelPerfect_m2291 (UI2DSprite_t236 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UI2DSprite::OnFill(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>)
extern "C" void UI2DSprite_OnFill_m2292 (UI2DSprite_t236 * __this, BetterList_1_t372 * ___verts, BetterList_1_t374 * ___uvs, BetterList_1_t375 * ___cols, const MethodInfo* method) IL2CPP_METHOD_ATTR;
