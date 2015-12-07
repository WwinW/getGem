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

// UnityEngine.Material
struct Material_t89;
// UnityEngine.Shader
struct Shader_t377;
// UnityEngine.Texture
struct Texture_t376;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t76;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Vector4.h"

// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
extern "C" void Material__ctor_m3410 (Material_t89 * __this, Shader_t377 * ___shader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
extern "C" void Material__ctor_m3404 (Material_t89 * __this, Material_t89 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Shader UnityEngine.Material::get_shader()
extern "C" Shader_t377 * Material_get_shader_m3402 (Material_t89 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_shader(UnityEngine.Shader)
extern "C" void Material_set_shader_m3409 (Material_t89 * __this, Shader_t377 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Material::get_color()
extern "C" Color_t33  Material_get_color_m564 (Material_t89 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
extern "C" void Material_set_color_m569 (Material_t89 * __this, Color_t33  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::get_mainTexture()
extern "C" Texture_t376 * Material_get_mainTexture_m3468 (Material_t89 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_mainTexture(UnityEngine.Texture)
extern "C" void Material_set_mainTexture_m3401 (Material_t89 * __this, Texture_t376 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_mainTextureOffset(UnityEngine.Vector2)
extern "C" void Material_set_mainTextureOffset_m3440 (Material_t89 * __this, Vector2_t54  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_mainTextureScale(UnityEngine.Vector2)
extern "C" void Material_set_mainTextureScale_m3441 (Material_t89 * __this, Vector2_t54  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
extern "C" void Material_SetColor_m513 (Material_t89 * __this, String_t* ___propertyName, Color_t33  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetColor(System.Int32,UnityEngine.Color)
extern "C" void Material_SetColor_m5796 (Material_t89 * __this, int32_t ___nameID, Color_t33  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::INTERNAL_CALL_SetColor(UnityEngine.Material,System.Int32,UnityEngine.Color&)
extern "C" void Material_INTERNAL_CALL_SetColor_m5797 (Object_t * __this /* static, unused */, Material_t89 * ___self, int32_t ___nameID, Color_t33 * ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Material::GetColor(System.String)
extern "C" Color_t33  Material_GetColor_m594 (Material_t89 * __this, String_t* ___propertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Material::GetColor(System.Int32)
extern "C" Color_t33  Material_GetColor_m5798 (Material_t89 * __this, int32_t ___nameID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetVector(System.String,UnityEngine.Vector4)
extern "C" void Material_SetVector_m3443 (Material_t89 * __this, String_t* ___propertyName, Vector4_t391  ___vector, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetVector(System.Int32,UnityEngine.Vector4)
extern "C" void Material_SetVector_m3437 (Material_t89 * __this, int32_t ___nameID, Vector4_t391  ___vector, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
extern "C" void Material_SetTexture_m3438 (Material_t89 * __this, String_t* ___propertyName, Texture_t376 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetTexture(System.Int32,UnityEngine.Texture)
extern "C" void Material_SetTexture_m5799 (Material_t89 * __this, int32_t ___nameID, Texture_t376 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.String)
extern "C" Texture_t376 * Material_GetTexture_m5800 (Material_t89 * __this, String_t* ___propertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.Int32)
extern "C" Texture_t376 * Material_GetTexture_m5801 (Material_t89 * __this, int32_t ___nameID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetTextureOffset(System.String,UnityEngine.Vector2)
extern "C" void Material_SetTextureOffset_m5802 (Material_t89 * __this, String_t* ___propertyName, Vector2_t54  ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::INTERNAL_CALL_SetTextureOffset(UnityEngine.Material,System.String,UnityEngine.Vector2&)
extern "C" void Material_INTERNAL_CALL_SetTextureOffset_m5803 (Object_t * __this /* static, unused */, Material_t89 * ___self, String_t* ___propertyName, Vector2_t54 * ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetTextureScale(System.String,UnityEngine.Vector2)
extern "C" void Material_SetTextureScale_m5804 (Material_t89 * __this, String_t* ___propertyName, Vector2_t54  ___scale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::INTERNAL_CALL_SetTextureScale(UnityEngine.Material,System.String,UnityEngine.Vector2&)
extern "C" void Material_INTERNAL_CALL_SetTextureScale_m5805 (Object_t * __this /* static, unused */, Material_t89 * ___self, String_t* ___propertyName, Vector2_t54 * ___scale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
extern "C" void Material_SetFloat_m5806 (Material_t89 * __this, String_t* ___propertyName, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetFloat(System.Int32,System.Single)
extern "C" void Material_SetFloat_m5807 (Material_t89 * __this, int32_t ___nameID, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
extern "C" void Material_SetInt_m5408 (Material_t89 * __this, String_t* ___propertyName, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Material::HasProperty(System.String)
extern "C" bool Material_HasProperty_m5407 (Material_t89 * __this, String_t* ___propertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Material::HasProperty(System.Int32)
extern "C" bool Material_HasProperty_m5808 (Material_t89 * __this, int32_t ___nameID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Material::get_renderQueue()
extern "C" int32_t Material_get_renderQueue_m3400 (Material_t89 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_renderQueue(System.Int32)
extern "C" void Material_set_renderQueue_m3397 (Material_t89 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::Internal_CreateWithShader(UnityEngine.Material,UnityEngine.Shader)
extern "C" void Material_Internal_CreateWithShader_m5809 (Object_t * __this /* static, unused */, Material_t89 * ___mono, Shader_t377 * ___shader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::Internal_CreateWithMaterial(UnityEngine.Material,UnityEngine.Material)
extern "C" void Material_Internal_CreateWithMaterial_m5810 (Object_t * __this /* static, unused */, Material_t89 * ___mono, Material_t89 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::CopyPropertiesFromMaterial(UnityEngine.Material)
extern "C" void Material_CopyPropertiesFromMaterial_m3406 (Material_t89 * __this, Material_t89 * ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::EnableKeyword(System.String)
extern "C" void Material_EnableKeyword_m3408 (Material_t89 * __this, String_t* ___keyword, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] UnityEngine.Material::get_shaderKeywords()
extern "C" StringU5BU5D_t76* Material_get_shaderKeywords_m3407 (Material_t89 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
