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

// UnityEngine.Texture2D
struct Texture2D_t71;
// UnityEngine.Color[]
struct ColorU5BU5D_t106;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_TextureFormat.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
extern "C" void Texture2D__ctor_m5628 (Texture2D_t71 * __this, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
extern "C" void Texture2D__ctor_m634 (Texture2D_t71 * __this, int32_t ___width, int32_t ___height, int32_t ___format, bool ___mipmap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::Internal_Create(UnityEngine.Texture2D,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean,System.IntPtr)
extern "C" void Texture2D_Internal_Create_m5629 (Object_t * __this /* static, unused */, Texture2D_t71 * ___mono, int32_t ___width, int32_t ___height, int32_t ___format, bool ___mipmap, bool ___linear, IntPtr_t ___nativeTex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.Texture2D::get_whiteTexture()
extern "C" Texture2D_t71 * Texture2D_get_whiteTexture_m5240 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::SetPixel(System.Int32,System.Int32,UnityEngine.Color)
extern "C" void Texture2D_SetPixel_m3598 (Texture2D_t71 * __this, int32_t ___x, int32_t ___y, Color_t33  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::INTERNAL_CALL_SetPixel(UnityEngine.Texture2D,System.Int32,System.Int32,UnityEngine.Color&)
extern "C" void Texture2D_INTERNAL_CALL_SetPixel_m5630 (Object_t * __this /* static, unused */, Texture2D_t71 * ___self, int32_t ___x, int32_t ___y, Color_t33 * ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Texture2D::GetPixelBilinear(System.Single,System.Single)
extern "C" Color_t33  Texture2D_GetPixelBilinear_m5291 (Texture2D_t71 * __this, float ___u, float ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::SetPixels(UnityEngine.Color[])
extern "C" void Texture2D_SetPixels_m635 (Texture2D_t71 * __this, ColorU5BU5D_t106* ___colors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::SetPixels(UnityEngine.Color[],System.Int32)
extern "C" void Texture2D_SetPixels_m5631 (Texture2D_t71 * __this, ColorU5BU5D_t106* ___colors, int32_t ___miplevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::SetPixels(System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Color[],System.Int32)
extern "C" void Texture2D_SetPixels_m5632 (Texture2D_t71 * __this, int32_t ___x, int32_t ___y, int32_t ___blockWidth, int32_t ___blockHeight, ColorU5BU5D_t106* ___colors, int32_t ___miplevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::Apply(System.Boolean,System.Boolean)
extern "C" void Texture2D_Apply_m5633 (Texture2D_t71 * __this, bool ___updateMipmaps, bool ___makeNoLongerReadable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::Apply()
extern "C" void Texture2D_Apply_m636 (Texture2D_t71 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
