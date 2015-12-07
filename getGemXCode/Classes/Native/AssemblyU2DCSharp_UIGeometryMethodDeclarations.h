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

// UIGeometry
struct UIGeometry_t390;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t372;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t374;
// BetterList`1<UnityEngine.Color32>
struct BetterList_1_t375;
// BetterList`1<UnityEngine.Vector4>
struct BetterList_1_t373;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"

// System.Void UIGeometry::.ctor()
extern "C" void UIGeometry__ctor_m1982 (UIGeometry_t390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIGeometry::get_hasVertices()
extern "C" bool UIGeometry_get_hasVertices_m1983 (UIGeometry_t390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIGeometry::get_hasTransformed()
extern "C" bool UIGeometry_get_hasTransformed_m1984 (UIGeometry_t390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGeometry::Clear()
extern "C" void UIGeometry_Clear_m1985 (UIGeometry_t390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGeometry::ApplyTransform(UnityEngine.Matrix4x4)
extern "C" void UIGeometry_ApplyTransform_m1986 (UIGeometry_t390 * __this, Matrix4x4_t401  ___widgetToPanel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGeometry::WriteToBuffers(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>,BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector4>)
extern "C" void UIGeometry_WriteToBuffers_m1987 (UIGeometry_t390 * __this, BetterList_1_t372 * ___v, BetterList_1_t374 * ___u, BetterList_1_t375 * ___c, BetterList_1_t372 * ___n, BetterList_1_t373 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
