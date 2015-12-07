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

// PrefabsDict
struct PrefabsDict_t19;
// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.Transform>[]
struct KeyValuePair_2U5BU5D_t66;
// System.Collections.IEnumerator
struct IEnumerator_t58;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t9;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t59;
// System.Collections.Generic.ICollection`1<UnityEngine.Transform>
struct ICollection_1_t68;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.Transform>>
struct IEnumerator_1_t69;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void PrefabsDict::.ctor()
extern "C" void PrefabsDict__ctor_m133 (PrefabsDict_t19 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PrefabsDict::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<string,UnityEngine.Transform>>.get_IsReadOnly()
extern "C" bool PrefabsDict_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CstringU2CUnityEngine_TransformU3EU3E_get_IsReadOnly_m134 (PrefabsDict_t19 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PrefabsDict::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<string,UnityEngine.Transform>>.CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.Transform>[],System.Int32)
extern "C" void PrefabsDict_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CstringU2CUnityEngine_TransformU3EU3E_CopyTo_m135 (PrefabsDict_t19 * __this, KeyValuePair_2U5BU5D_t66* ___array, int32_t ___arrayIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PrefabsDict::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * PrefabsDict_System_Collections_IEnumerable_GetEnumerator_m136 (PrefabsDict_t19 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PrefabsDict::ToString()
extern "C" String_t* PrefabsDict_ToString_m137 (PrefabsDict_t19 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PrefabsDict::_Add(System.String,UnityEngine.Transform)
extern "C" void PrefabsDict__Add_m138 (PrefabsDict_t19 * __this, String_t* ___prefabName, Transform_t9 * ___prefab, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PrefabsDict::_Remove(System.String)
extern "C" bool PrefabsDict__Remove_m139 (PrefabsDict_t19 * __this, String_t* ___prefabName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PrefabsDict::_Clear()
extern "C" void PrefabsDict__Clear_m140 (PrefabsDict_t19 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PrefabsDict::get_Count()
extern "C" int32_t PrefabsDict_get_Count_m141 (PrefabsDict_t19 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PrefabsDict::ContainsKey(System.String)
extern "C" bool PrefabsDict_ContainsKey_m142 (PrefabsDict_t19 * __this, String_t* ___prefabName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PrefabsDict::TryGetValue(System.String,UnityEngine.Transform&)
extern "C" bool PrefabsDict_TryGetValue_m143 (PrefabsDict_t19 * __this, String_t* ___prefabName, Transform_t9 ** ___prefab, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PrefabsDict::Add(System.String,UnityEngine.Transform)
extern "C" void PrefabsDict_Add_m144 (PrefabsDict_t19 * __this, String_t* ___key, Transform_t9 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PrefabsDict::Remove(System.String)
extern "C" bool PrefabsDict_Remove_m145 (PrefabsDict_t19 * __this, String_t* ___prefabName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PrefabsDict::Contains(System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.Transform>)
extern "C" bool PrefabsDict_Contains_m146 (PrefabsDict_t19 * __this, KeyValuePair_2_t67  ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform PrefabsDict::get_Item(System.String)
extern "C" Transform_t9 * PrefabsDict_get_Item_m147 (PrefabsDict_t19 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PrefabsDict::set_Item(System.String,UnityEngine.Transform)
extern "C" void PrefabsDict_set_Item_m148 (PrefabsDict_t19 * __this, String_t* ___key, Transform_t9 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> PrefabsDict::get_Keys()
extern "C" Object_t* PrefabsDict_get_Keys_m149 (PrefabsDict_t19 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<UnityEngine.Transform> PrefabsDict::get_Values()
extern "C" Object_t* PrefabsDict_get_Values_m150 (PrefabsDict_t19 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PrefabsDict::get_IsReadOnly()
extern "C" bool PrefabsDict_get_IsReadOnly_m151 (PrefabsDict_t19 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PrefabsDict::Add(System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.Transform>)
extern "C" void PrefabsDict_Add_m152 (PrefabsDict_t19 * __this, KeyValuePair_2_t67  ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PrefabsDict::Clear()
extern "C" void PrefabsDict_Clear_m153 (PrefabsDict_t19 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PrefabsDict::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.Transform>[],System.Int32)
extern "C" void PrefabsDict_CopyTo_m154 (PrefabsDict_t19 * __this, KeyValuePair_2U5BU5D_t66* ___array, int32_t ___arrayIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PrefabsDict::Remove(System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.Transform>)
extern "C" bool PrefabsDict_Remove_m155 (PrefabsDict_t19 * __this, KeyValuePair_2_t67  ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.Transform>> PrefabsDict::GetEnumerator()
extern "C" Object_t* PrefabsDict_GetEnumerator_m156 (PrefabsDict_t19 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
