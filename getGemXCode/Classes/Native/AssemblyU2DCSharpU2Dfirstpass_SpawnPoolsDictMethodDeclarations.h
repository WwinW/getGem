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

// SpawnPoolsDict
struct SpawnPoolsDict_t2;
// System.Collections.Generic.KeyValuePair`2<System.String,SpawnPool>[]
struct KeyValuePair_2U5BU5D_t56;
// System.Collections.IEnumerator
struct IEnumerator_t58;
// SpawnPool
struct SpawnPool_t10;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t24;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t59;
// System.Collections.Generic.ICollection`1<SpawnPool>
struct ICollection_1_t60;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,SpawnPool>>
struct IEnumerator_1_t61;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen.h"

// System.Void SpawnPoolsDict::.ctor()
extern "C" void SpawnPoolsDict__ctor_m3 (SpawnPoolsDict_t2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SpawnPoolsDict::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<string,SpawnPool>>.get_IsReadOnly()
extern "C" bool SpawnPoolsDict_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CstringU2CSpawnPoolU3EU3E_get_IsReadOnly_m4 (SpawnPoolsDict_t2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpawnPoolsDict::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<string,SpawnPool>>.CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,SpawnPool>[],System.Int32)
extern "C" void SpawnPoolsDict_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CstringU2CSpawnPoolU3EU3E_CopyTo_m5 (SpawnPoolsDict_t2 * __this, KeyValuePair_2U5BU5D_t56* ___array, int32_t ___arrayIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SpawnPoolsDict::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * SpawnPoolsDict_System_Collections_IEnumerable_GetEnumerator_m6 (SpawnPoolsDict_t2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SpawnPool SpawnPoolsDict::Create(System.String)
extern "C" SpawnPool_t10 * SpawnPoolsDict_Create_m7 (SpawnPoolsDict_t2 * __this, String_t* ___poolName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SpawnPool SpawnPoolsDict::Create(System.String,UnityEngine.GameObject)
extern "C" SpawnPool_t10 * SpawnPoolsDict_Create_m8 (SpawnPoolsDict_t2 * __this, String_t* ___poolName, GameObject_t24 * ___owner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SpawnPoolsDict::assertValidPoolName(System.String)
extern "C" bool SpawnPoolsDict_assertValidPoolName_m9 (SpawnPoolsDict_t2 * __this, String_t* ___poolName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SpawnPoolsDict::ToString()
extern "C" String_t* SpawnPoolsDict_ToString_m10 (SpawnPoolsDict_t2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SpawnPoolsDict::Destroy(System.String)
extern "C" bool SpawnPoolsDict_Destroy_m11 (SpawnPoolsDict_t2 * __this, String_t* ___poolName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpawnPoolsDict::DestroyAll()
extern "C" void SpawnPoolsDict_DestroyAll_m12 (SpawnPoolsDict_t2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpawnPoolsDict::Add(SpawnPool)
extern "C" void SpawnPoolsDict_Add_m13 (SpawnPoolsDict_t2 * __this, SpawnPool_t10 * ___spawnPool, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpawnPoolsDict::Add(System.String,SpawnPool)
extern "C" void SpawnPoolsDict_Add_m14 (SpawnPoolsDict_t2 * __this, String_t* ___key, SpawnPool_t10 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SpawnPoolsDict::Remove(SpawnPool)
extern "C" bool SpawnPoolsDict_Remove_m15 (SpawnPoolsDict_t2 * __this, SpawnPool_t10 * ___spawnPool, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SpawnPoolsDict::Remove(System.String)
extern "C" bool SpawnPoolsDict_Remove_m16 (SpawnPoolsDict_t2 * __this, String_t* ___poolName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SpawnPoolsDict::get_Count()
extern "C" int32_t SpawnPoolsDict_get_Count_m17 (SpawnPoolsDict_t2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SpawnPoolsDict::ContainsKey(System.String)
extern "C" bool SpawnPoolsDict_ContainsKey_m18 (SpawnPoolsDict_t2 * __this, String_t* ___poolName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SpawnPoolsDict::TryGetValue(System.String,SpawnPool&)
extern "C" bool SpawnPoolsDict_TryGetValue_m19 (SpawnPoolsDict_t2 * __this, String_t* ___poolName, SpawnPool_t10 ** ___spawnPool, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SpawnPoolsDict::Contains(System.Collections.Generic.KeyValuePair`2<System.String,SpawnPool>)
extern "C" bool SpawnPoolsDict_Contains_m20 (SpawnPoolsDict_t2 * __this, KeyValuePair_2_t57  ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SpawnPool SpawnPoolsDict::get_Item(System.String)
extern "C" SpawnPool_t10 * SpawnPoolsDict_get_Item_m21 (SpawnPoolsDict_t2 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpawnPoolsDict::set_Item(System.String,SpawnPool)
extern "C" void SpawnPoolsDict_set_Item_m22 (SpawnPoolsDict_t2 * __this, String_t* ___key, SpawnPool_t10 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> SpawnPoolsDict::get_Keys()
extern "C" Object_t* SpawnPoolsDict_get_Keys_m23 (SpawnPoolsDict_t2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<SpawnPool> SpawnPoolsDict::get_Values()
extern "C" Object_t* SpawnPoolsDict_get_Values_m24 (SpawnPoolsDict_t2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SpawnPoolsDict::get_IsReadOnly()
extern "C" bool SpawnPoolsDict_get_IsReadOnly_m25 (SpawnPoolsDict_t2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpawnPoolsDict::Add(System.Collections.Generic.KeyValuePair`2<System.String,SpawnPool>)
extern "C" void SpawnPoolsDict_Add_m26 (SpawnPoolsDict_t2 * __this, KeyValuePair_2_t57  ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpawnPoolsDict::Clear()
extern "C" void SpawnPoolsDict_Clear_m27 (SpawnPoolsDict_t2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpawnPoolsDict::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,SpawnPool>[],System.Int32)
extern "C" void SpawnPoolsDict_CopyTo_m28 (SpawnPoolsDict_t2 * __this, KeyValuePair_2U5BU5D_t56* ___array, int32_t ___arrayIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SpawnPoolsDict::Remove(System.Collections.Generic.KeyValuePair`2<System.String,SpawnPool>)
extern "C" bool SpawnPoolsDict_Remove_m29 (SpawnPoolsDict_t2 * __this, KeyValuePair_2_t57  ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,SpawnPool>> SpawnPoolsDict::GetEnumerator()
extern "C" Object_t* SpawnPoolsDict_GetEnumerator_m30 (SpawnPoolsDict_t2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
