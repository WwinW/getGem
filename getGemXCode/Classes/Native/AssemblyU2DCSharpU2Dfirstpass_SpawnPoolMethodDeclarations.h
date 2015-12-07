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

// SpawnPool
struct SpawnPool_t10;
// System.Collections.IEnumerator
struct IEnumerator_t58;
// UnityEngine.Transform
struct Transform_t9;
// System.Collections.Generic.Dictionary`2<System.String,PrefabPool>
struct Dictionary_2_t62;
// PrefabPool
struct PrefabPool_t22;
// System.String
struct String_t;
// UnityEngine.ParticleEmitter
struct ParticleEmitter_t13;
// UnityEngine.ParticleSystem
struct ParticleSystem_t15;
// UnityEngine.GameObject
struct GameObject_t24;
// UnityEngine.Transform[]
struct TransformU5BU5D_t64;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Transform>
struct IEnumerator_1_t65;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Quaternion.h"
#include "UnityEngine_UnityEngine_Color.h"

// System.Void SpawnPool::.ctor()
extern "C" void SpawnPool__ctor_m63 (SpawnPool_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SpawnPool::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * SpawnPool_System_Collections_IEnumerable_GetEnumerator_m64 (SpawnPool_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SpawnPool::System.Collections.Generic.ICollection<UnityEngine.Transform>.Remove(UnityEngine.Transform)
extern "C" bool SpawnPool_System_Collections_Generic_ICollectionU3CUnityEngine_TransformU3E_Remove_m65 (SpawnPool_t10 * __this, Transform_t9 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform SpawnPool::get_group()
extern "C" Transform_t9 * SpawnPool_get_group_m66 (SpawnPool_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpawnPool::set_group(UnityEngine.Transform)
extern "C" void SpawnPool_set_group_m67 (SpawnPool_t10 * __this, Transform_t9 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,PrefabPool> SpawnPool::get_prefabPools()
extern "C" Dictionary_2_t62 * SpawnPool_get_prefabPools_m68 (SpawnPool_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpawnPool::Awake()
extern "C" void SpawnPool_Awake_m69 (SpawnPool_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpawnPool::OnDestroy()
extern "C" void SpawnPool_OnDestroy_m70 (SpawnPool_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpawnPool::CreatePrefabPool(PrefabPool)
extern "C" void SpawnPool_CreatePrefabPool_m71 (SpawnPool_t10 * __this, PrefabPool_t22 * ___prefabPool, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpawnPool::Add(UnityEngine.Transform,System.String,System.Boolean,System.Boolean)
extern "C" void SpawnPool_Add_m72 (SpawnPool_t10 * __this, Transform_t9 * ___instance, String_t* ___prefabName, bool ___despawn, bool ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpawnPool::Add(UnityEngine.Transform)
extern "C" void SpawnPool_Add_m73 (SpawnPool_t10 * __this, Transform_t9 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpawnPool::Remove(UnityEngine.Transform)
extern "C" void SpawnPool_Remove_m74 (SpawnPool_t10 * __this, Transform_t9 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform SpawnPool::Spawn(UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" Transform_t9 * SpawnPool_Spawn_m75 (SpawnPool_t10 * __this, Transform_t9 * ___prefab, Vector3_t34  ___pos, Quaternion_t63  ___rot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform SpawnPool::Spawn(UnityEngine.Transform)
extern "C" Transform_t9 * SpawnPool_Spawn_m76 (SpawnPool_t10 * __this, Transform_t9 * ___prefab, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ParticleEmitter SpawnPool::Spawn(UnityEngine.ParticleEmitter,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" ParticleEmitter_t13 * SpawnPool_Spawn_m77 (SpawnPool_t10 * __this, ParticleEmitter_t13 * ___prefab, Vector3_t34  ___pos, Quaternion_t63  ___quat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ParticleSystem SpawnPool::Spawn(UnityEngine.ParticleSystem,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" ParticleSystem_t15 * SpawnPool_Spawn_m78 (SpawnPool_t10 * __this, ParticleSystem_t15 * ___prefab, Vector3_t34  ___pos, Quaternion_t63  ___quat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ParticleEmitter SpawnPool::Spawn(UnityEngine.ParticleEmitter,UnityEngine.Vector3,UnityEngine.Quaternion,System.String,UnityEngine.Color)
extern "C" ParticleEmitter_t13 * SpawnPool_Spawn_m79 (SpawnPool_t10 * __this, ParticleEmitter_t13 * ___prefab, Vector3_t34  ___pos, Quaternion_t63  ___quat, String_t* ___colorPropertyName, Color_t33  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpawnPool::Despawn(UnityEngine.Transform)
extern "C" void SpawnPool_Despawn_m80 (SpawnPool_t10 * __this, Transform_t9 * ___xform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpawnPool::Despawn(UnityEngine.Transform,System.Single)
extern "C" void SpawnPool_Despawn_m81 (SpawnPool_t10 * __this, Transform_t9 * ___instance, float ___seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SpawnPool::DoDespawnAfterSeconds(UnityEngine.Transform,System.Single)
extern "C" Object_t * SpawnPool_DoDespawnAfterSeconds_m82 (SpawnPool_t10 * __this, Transform_t9 * ___instance, float ___seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpawnPool::DespawnAll()
extern "C" void SpawnPool_DespawnAll_m83 (SpawnPool_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SpawnPool::IsSpawned(UnityEngine.Transform)
extern "C" bool SpawnPool_IsSpawned_m84 (SpawnPool_t10 * __this, Transform_t9 * ___instance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform SpawnPool::GetPrefab(UnityEngine.Transform)
extern "C" Transform_t9 * SpawnPool_GetPrefab_m85 (SpawnPool_t10 * __this, Transform_t9 * ___prefab, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject SpawnPool::GetPrefab(UnityEngine.GameObject)
extern "C" GameObject_t24 * SpawnPool_GetPrefab_m86 (SpawnPool_t10 * __this, GameObject_t24 * ___prefab, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SpawnPool::ListenForEmitDespawn(UnityEngine.ParticleEmitter)
extern "C" Object_t * SpawnPool_ListenForEmitDespawn_m87 (SpawnPool_t10 * __this, ParticleEmitter_t13 * ___emitter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SpawnPool::ListenForEmitDespawn(UnityEngine.ParticleSystem)
extern "C" Object_t * SpawnPool_ListenForEmitDespawn_m88 (SpawnPool_t10 * __this, ParticleSystem_t15 * ___emitter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SpawnPool::ToString()
extern "C" String_t* SpawnPool_ToString_m89 (SpawnPool_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform SpawnPool::get_Item(System.Int32)
extern "C" Transform_t9 * SpawnPool_get_Item_m90 (SpawnPool_t10 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpawnPool::set_Item(System.Int32,UnityEngine.Transform)
extern "C" void SpawnPool_set_Item_m91 (SpawnPool_t10 * __this, int32_t ___index, Transform_t9 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SpawnPool::Contains(UnityEngine.Transform)
extern "C" bool SpawnPool_Contains_m92 (SpawnPool_t10 * __this, Transform_t9 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpawnPool::CopyTo(UnityEngine.Transform[],System.Int32)
extern "C" void SpawnPool_CopyTo_m93 (SpawnPool_t10 * __this, TransformU5BU5D_t64* ___array, int32_t ___arrayIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SpawnPool::get_Count()
extern "C" int32_t SpawnPool_get_Count_m94 (SpawnPool_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Transform> SpawnPool::GetEnumerator()
extern "C" Object_t* SpawnPool_GetEnumerator_m95 (SpawnPool_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SpawnPool::IndexOf(UnityEngine.Transform)
extern "C" int32_t SpawnPool_IndexOf_m96 (SpawnPool_t10 * __this, Transform_t9 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpawnPool::Insert(System.Int32,UnityEngine.Transform)
extern "C" void SpawnPool_Insert_m97 (SpawnPool_t10 * __this, int32_t ___index, Transform_t9 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpawnPool::RemoveAt(System.Int32)
extern "C" void SpawnPool_RemoveAt_m98 (SpawnPool_t10 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpawnPool::Clear()
extern "C" void SpawnPool_Clear_m99 (SpawnPool_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SpawnPool::get_IsReadOnly()
extern "C" bool SpawnPool_get_IsReadOnly_m100 (SpawnPool_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
