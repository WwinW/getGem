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

// UnityEngine.Sprite
struct Sprite_t235;
// UnityEngine.Texture2D
struct Texture2D_t71;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Vector4.h"

// UnityEngine.Rect UnityEngine.Sprite::get_rect()
extern "C" Rect_t55  Sprite_get_rect_m3511 (Sprite_t235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Sprite::INTERNAL_get_rect(UnityEngine.Rect&)
extern "C" void Sprite_INTERNAL_get_rect_m5829 (Sprite_t235 * __this, Rect_t55 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Sprite::get_pixelsPerUnit()
extern "C" float Sprite_get_pixelsPerUnit_m5279 (Sprite_t235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.Sprite::get_texture()
extern "C" Texture2D_t71 * Sprite_get_texture_m3509 (Sprite_t235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.Sprite::get_textureRect()
extern "C" Rect_t55  Sprite_get_textureRect_m3513 (Sprite_t235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Sprite::INTERNAL_get_textureRect(UnityEngine.Rect&)
extern "C" void Sprite_INTERNAL_get_textureRect_m5830 (Sprite_t235 * __this, Rect_t55 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Sprite::get_textureRectOffset()
extern "C" Vector2_t54  Sprite_get_textureRectOffset_m3512 (Sprite_t235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Sprite::Internal_GetTextureRectOffset(UnityEngine.Sprite,UnityEngine.Vector2&)
extern "C" void Sprite_Internal_GetTextureRectOffset_m5831 (Object_t * __this /* static, unused */, Sprite_t235 * ___sprite, Vector2_t54 * ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Sprite::get_border()
extern "C" Vector4_t391  Sprite_get_border_m5277 (Sprite_t235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Sprite::INTERNAL_get_border(UnityEngine.Vector4&)
extern "C" void Sprite_INTERNAL_get_border_m5832 (Sprite_t235 * __this, Vector4_t391 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
