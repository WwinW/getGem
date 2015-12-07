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

// UIDrawCall
struct UIDrawCall_t371;
// BetterList`1<UIDrawCall>
struct BetterList_1_t381;
// UnityEngine.Transform
struct Transform_t9;
// UnityEngine.Material
struct Material_t89;
// UnityEngine.Texture
struct Texture_t376;
// UnityEngine.Shader
struct Shader_t377;
// System.Int32[]
struct Int32U5BU5D_t167;
// UIPanel
struct UIPanel_t266;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector4.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UIDrawCall::.ctor()
extern "C" void UIDrawCall__ctor_m1902 (UIDrawCall_t371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::.cctor()
extern "C" void UIDrawCall__cctor_m1903 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetterList`1<UIDrawCall> UIDrawCall::get_list()
extern "C" BetterList_1_t381 * UIDrawCall_get_list_m1904 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetterList`1<UIDrawCall> UIDrawCall::get_activeList()
extern "C" BetterList_1_t381 * UIDrawCall_get_activeList_m1905 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetterList`1<UIDrawCall> UIDrawCall::get_inactiveList()
extern "C" BetterList_1_t381 * UIDrawCall_get_inactiveList_m1906 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIDrawCall::get_renderQueue()
extern "C" int32_t UIDrawCall_get_renderQueue_m1907 (UIDrawCall_t371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::set_renderQueue(System.Int32)
extern "C" void UIDrawCall_set_renderQueue_m1908 (UIDrawCall_t371 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIDrawCall::get_sortingOrder()
extern "C" int32_t UIDrawCall_get_sortingOrder_m1909 (UIDrawCall_t371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::set_sortingOrder(System.Int32)
extern "C" void UIDrawCall_set_sortingOrder_m1910 (UIDrawCall_t371 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIDrawCall::get_finalRenderQueue()
extern "C" int32_t UIDrawCall_get_finalRenderQueue_m1911 (UIDrawCall_t371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UIDrawCall::get_cachedTransform()
extern "C" Transform_t9 * UIDrawCall_get_cachedTransform_m1912 (UIDrawCall_t371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UIDrawCall::get_baseMaterial()
extern "C" Material_t89 * UIDrawCall_get_baseMaterial_m1913 (UIDrawCall_t371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::set_baseMaterial(UnityEngine.Material)
extern "C" void UIDrawCall_set_baseMaterial_m1914 (UIDrawCall_t371 * __this, Material_t89 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UIDrawCall::get_dynamicMaterial()
extern "C" Material_t89 * UIDrawCall_get_dynamicMaterial_m1915 (UIDrawCall_t371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UIDrawCall::get_mainTexture()
extern "C" Texture_t376 * UIDrawCall_get_mainTexture_m1916 (UIDrawCall_t371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::set_mainTexture(UnityEngine.Texture)
extern "C" void UIDrawCall_set_mainTexture_m1917 (UIDrawCall_t371 * __this, Texture_t376 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Shader UIDrawCall::get_shader()
extern "C" Shader_t377 * UIDrawCall_get_shader_m1918 (UIDrawCall_t371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::set_shader(UnityEngine.Shader)
extern "C" void UIDrawCall_set_shader_m1919 (UIDrawCall_t371 * __this, Shader_t377 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIDrawCall::get_triangles()
extern "C" int32_t UIDrawCall_get_triangles_m1920 (UIDrawCall_t371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIDrawCall::get_isClipped()
extern "C" bool UIDrawCall_get_isClipped_m1921 (UIDrawCall_t371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::CreateMaterial()
extern "C" void UIDrawCall_CreateMaterial_m1922 (UIDrawCall_t371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UIDrawCall::RebuildMaterial()
extern "C" Material_t89 * UIDrawCall_RebuildMaterial_m1923 (UIDrawCall_t371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::UpdateMaterials()
extern "C" void UIDrawCall_UpdateMaterials_m1924 (UIDrawCall_t371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::UpdateGeometry(System.Int32)
extern "C" void UIDrawCall_UpdateGeometry_m1925 (UIDrawCall_t371 * __this, int32_t ___widgetCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] UIDrawCall::GenerateCachedIndexBuffer(System.Int32,System.Int32)
extern "C" Int32U5BU5D_t167* UIDrawCall_GenerateCachedIndexBuffer_m1926 (UIDrawCall_t371 * __this, int32_t ___vertexCount, int32_t ___indexCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::OnWillRenderObject()
extern "C" void UIDrawCall_OnWillRenderObject_m1927 (UIDrawCall_t371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::SetClipping(System.Int32,UnityEngine.Vector4,UnityEngine.Vector2,System.Single)
extern "C" void UIDrawCall_SetClipping_m1928 (UIDrawCall_t371 * __this, int32_t ___index, Vector4_t391  ___cr, Vector2_t54  ___soft, float ___angle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::Awake()
extern "C" void UIDrawCall_Awake_m1929 (UIDrawCall_t371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::OnEnable()
extern "C" void UIDrawCall_OnEnable_m1930 (UIDrawCall_t371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::OnDisable()
extern "C" void UIDrawCall_OnDisable_m1931 (UIDrawCall_t371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::OnDestroy()
extern "C" void UIDrawCall_OnDestroy_m1932 (UIDrawCall_t371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIDrawCall UIDrawCall::Create(UIPanel,UnityEngine.Material,UnityEngine.Texture,UnityEngine.Shader)
extern "C" UIDrawCall_t371 * UIDrawCall_Create_m1933 (Object_t * __this /* static, unused */, UIPanel_t266 * ___panel, Material_t89 * ___mat, Texture_t376 * ___tex, Shader_t377 * ___shader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIDrawCall UIDrawCall::Create(System.String,UIPanel,UnityEngine.Material,UnityEngine.Texture,UnityEngine.Shader)
extern "C" UIDrawCall_t371 * UIDrawCall_Create_m1934 (Object_t * __this /* static, unused */, String_t* ___name, UIPanel_t266 * ___pan, Material_t89 * ___mat, Texture_t376 * ___tex, Shader_t377 * ___shader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIDrawCall UIDrawCall::Create(System.String)
extern "C" UIDrawCall_t371 * UIDrawCall_Create_m1935 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::ClearAll()
extern "C" void UIDrawCall_ClearAll_m1936 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::ReleaseAll()
extern "C" void UIDrawCall_ReleaseAll_m1937 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::ReleaseInactive()
extern "C" void UIDrawCall_ReleaseInactive_m1938 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIDrawCall::Count(UIPanel)
extern "C" int32_t UIDrawCall_Count_m1939 (Object_t * __this /* static, unused */, UIPanel_t266 * ___panel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::Destroy(UIDrawCall)
extern "C" void UIDrawCall_Destroy_m1940 (Object_t * __this /* static, unused */, UIDrawCall_t371 * ___dc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
