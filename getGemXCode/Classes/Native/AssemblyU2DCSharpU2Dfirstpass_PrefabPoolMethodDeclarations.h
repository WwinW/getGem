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

// PrefabPool
struct PrefabPool_t22;
// UnityEngine.Transform
struct Transform_t9;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t20;
// System.Collections.IEnumerator
struct IEnumerator_t58;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Quaternion.h"

// System.Void PrefabPool::.ctor(UnityEngine.Transform)
extern "C" void PrefabPool__ctor_m113 (PrefabPool_t22 * __this, Transform_t9 * ___prefab, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PrefabPool::.ctor()
extern "C" void PrefabPool__ctor_m114 (PrefabPool_t22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PrefabPool::get_logMessages()
extern "C" bool PrefabPool_get_logMessages_m115 (PrefabPool_t22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PrefabPool::inspectorInstanceConstructor()
extern "C" void PrefabPool_inspectorInstanceConstructor_m116 (PrefabPool_t22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PrefabPool::SelfDestruct()
extern "C" void PrefabPool_SelfDestruct_m117 (PrefabPool_t22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Transform> PrefabPool::get_spawned()
extern "C" List_1_t20 * PrefabPool_get_spawned_m118 (PrefabPool_t22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Transform> PrefabPool::get_despawned()
extern "C" List_1_t20 * PrefabPool_get_despawned_m119 (PrefabPool_t22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PrefabPool::get_totalCount()
extern "C" int32_t PrefabPool_get_totalCount_m120 (PrefabPool_t22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PrefabPool::get_preloaded()
extern "C" bool PrefabPool_get_preloaded_m121 (PrefabPool_t22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PrefabPool::set_preloaded(System.Boolean)
extern "C" void PrefabPool_set_preloaded_m122 (PrefabPool_t22 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PrefabPool::DespawnInstance(UnityEngine.Transform)
extern "C" bool PrefabPool_DespawnInstance_m123 (PrefabPool_t22 * __this, Transform_t9 * ___xform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PrefabPool::CullDespawned()
extern "C" Object_t * PrefabPool_CullDespawned_m124 (PrefabPool_t22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform PrefabPool::SpawnInstance(UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" Transform_t9 * PrefabPool_SpawnInstance_m125 (PrefabPool_t22 * __this, Vector3_t34  ___pos, Quaternion_t63  ___rot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform PrefabPool::SpawnNew()
extern "C" Transform_t9 * PrefabPool_SpawnNew_m126 (PrefabPool_t22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform PrefabPool::SpawnNew(UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" Transform_t9 * PrefabPool_SpawnNew_m127 (PrefabPool_t22 * __this, Vector3_t34  ___pos, Quaternion_t63  ___rot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PrefabPool::SetRecursively(UnityEngine.Transform,System.Int32)
extern "C" void PrefabPool_SetRecursively_m128 (PrefabPool_t22 * __this, Transform_t9 * ___xform, int32_t ___layer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PrefabPool::AddUnpooled(UnityEngine.Transform,System.Boolean)
extern "C" void PrefabPool_AddUnpooled_m129 (PrefabPool_t22 * __this, Transform_t9 * ___inst, bool ___despawn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PrefabPool::PreloadInstances()
extern "C" void PrefabPool_PreloadInstances_m130 (PrefabPool_t22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PrefabPool::PreloadOverTime()
extern "C" Object_t * PrefabPool_PreloadOverTime_m131 (PrefabPool_t22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PrefabPool::nameInstance(UnityEngine.Transform)
extern "C" void PrefabPool_nameInstance_m132 (PrefabPool_t22 * __this, Transform_t9 * ___instance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
