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

// UnityEngine.Renderer
struct Renderer_t88;
// UnityEngine.Material
struct Material_t89;
// UnityEngine.Material[]
struct MaterialU5BU5D_t104;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
extern "C" void Renderer_set_enabled_m3648 (Renderer_t88 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Renderer::get_material()
extern "C" Material_t89 * Renderer_get_material_m512 (Renderer_t88 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Renderer::get_sharedMaterial()
extern "C" Material_t89 * Renderer_get_sharedMaterial_m3078 (Renderer_t88 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material[] UnityEngine.Renderer::get_materials()
extern "C" MaterialU5BU5D_t104* Renderer_get_materials_m593 (Renderer_t88 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_sharedMaterials(UnityEngine.Material[])
extern "C" void Renderer_set_sharedMaterials_m3411 (Renderer_t88 * __this, MaterialU5BU5D_t104* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Renderer::get_sortingLayerID()
extern "C" int32_t Renderer_get_sortingLayerID_m5134 (Renderer_t88 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Renderer::get_sortingOrder()
extern "C" int32_t Renderer_get_sortingOrder_m3398 (Renderer_t88 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_sortingOrder(System.Int32)
extern "C" void Renderer_set_sortingOrder_m3399 (Renderer_t88 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
