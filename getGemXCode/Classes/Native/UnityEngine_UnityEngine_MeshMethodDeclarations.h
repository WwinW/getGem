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

// UnityEngine.Mesh
struct Mesh_t378;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t36;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t788;
// System.Object
struct Object_t;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t566;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t791;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t48;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t790;
// UnityEngine.Color32[]
struct Color32U5BU5D_t565;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t789;
// System.Int32[]
struct Int32U5BU5D_t167;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t333;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Mesh::.ctor()
extern "C" void Mesh__ctor_m3414 (Mesh_t378 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Internal_Create(UnityEngine.Mesh)
extern "C" void Mesh_Internal_Create_m5588 (Object_t * __this /* static, unused */, Mesh_t378 * ___mono, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Clear(System.Boolean)
extern "C" void Mesh_Clear_m5589 (Mesh_t378 * __this, bool ___keepVertexLayout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Clear()
extern "C" void Mesh_Clear_m3417 (Mesh_t378 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UnityEngine.Mesh::get_vertices()
extern "C" Vector3U5BU5D_t36* Mesh_get_vertices_m5463 (Mesh_t378 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
extern "C" void Mesh_set_vertices_m3419 (Mesh_t378 * __this, Vector3U5BU5D_t36* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetVertices(System.Collections.Generic.List`1<UnityEngine.Vector3>)
extern "C" void Mesh_SetVertices_m5475 (Mesh_t378 * __this, List_1_t788 * ___inVertices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetVerticesInternal(System.Object)
extern "C" void Mesh_SetVerticesInternal_m5590 (Mesh_t378 * __this, Object_t * ___vertices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UnityEngine.Mesh::get_normals()
extern "C" Vector3U5BU5D_t36* Mesh_get_normals_m5470 (Mesh_t378 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_normals(UnityEngine.Vector3[])
extern "C" void Mesh_set_normals_m3424 (Mesh_t378 * __this, Vector3U5BU5D_t36* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetNormals(System.Collections.Generic.List`1<UnityEngine.Vector3>)
extern "C" void Mesh_SetNormals_m5478 (Mesh_t378 * __this, List_1_t788 * ___inNormals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetNormalsInternal(System.Object)
extern "C" void Mesh_SetNormalsInternal_m5591 (Mesh_t378 * __this, Object_t * ___normals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4[] UnityEngine.Mesh::get_tangents()
extern "C" Vector4U5BU5D_t566* Mesh_get_tangents_m5471 (Mesh_t378 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_tangents(UnityEngine.Vector4[])
extern "C" void Mesh_set_tangents_m3426 (Mesh_t378 * __this, Vector4U5BU5D_t566* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetTangents(System.Collections.Generic.List`1<UnityEngine.Vector4>)
extern "C" void Mesh_SetTangents_m5479 (Mesh_t378 * __this, List_1_t791 * ___inTangents, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetTangentsInternal(System.Object)
extern "C" void Mesh_SetTangentsInternal_m5592 (Mesh_t378 * __this, Object_t * ___tangents, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] UnityEngine.Mesh::get_uv()
extern "C" Vector2U5BU5D_t48* Mesh_get_uv_m5467 (Mesh_t378 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
extern "C" void Mesh_set_uv_m3421 (Mesh_t378 * __this, Vector2U5BU5D_t48* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] UnityEngine.Mesh::get_uv2()
extern "C" Vector2U5BU5D_t48* Mesh_get_uv2_m5469 (Mesh_t378 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetUVs(System.Int32,System.Collections.Generic.List`1<UnityEngine.Vector2>)
extern "C" void Mesh_SetUVs_m5477 (Mesh_t378 * __this, int32_t ___channel, List_1_t790 * ___uvs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetUVInternal(System.Object,System.Int32,System.Int32)
extern "C" void Mesh_SetUVInternal_m5593 (Mesh_t378 * __this, Object_t * ___uvs, int32_t ___channel, int32_t ___dim, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32[] UnityEngine.Mesh::get_colors32()
extern "C" Color32U5BU5D_t565* Mesh_get_colors32_m5465 (Mesh_t378 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_colors32(UnityEngine.Color32[])
extern "C" void Mesh_set_colors32_m3423 (Mesh_t378 * __this, Color32U5BU5D_t565* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetColors(System.Collections.Generic.List`1<UnityEngine.Color32>)
extern "C" void Mesh_SetColors_m5476 (Mesh_t378 * __this, List_1_t789 * ___inColors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetColors32Internal(System.Object)
extern "C" void Mesh_SetColors32Internal_m5594 (Mesh_t378 * __this, Object_t * ___colors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::RecalculateBounds()
extern "C" void Mesh_RecalculateBounds_m3428 (Mesh_t378 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
extern "C" void Mesh_set_triangles_m3427 (Mesh_t378 * __this, Int32U5BU5D_t167* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetTriangles(System.Collections.Generic.List`1<System.Int32>,System.Int32)
extern "C" void Mesh_SetTriangles_m5480 (Mesh_t378 * __this, List_1_t333 * ___inTriangles, int32_t ___submesh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetTrianglesInternal(System.Object,System.Int32)
extern "C" void Mesh_SetTrianglesInternal_m5595 (Mesh_t378 * __this, Object_t * ___triangles, int32_t ___submesh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] UnityEngine.Mesh::GetIndices(System.Int32)
extern "C" Int32U5BU5D_t167* Mesh_GetIndices_m5473 (Mesh_t378 * __this, int32_t ___submesh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mesh::get_vertexCount()
extern "C" int32_t Mesh_get_vertexCount_m3416 (Mesh_t378 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::MarkDynamic()
extern "C" void Mesh_MarkDynamic_m3415 (Mesh_t378 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
