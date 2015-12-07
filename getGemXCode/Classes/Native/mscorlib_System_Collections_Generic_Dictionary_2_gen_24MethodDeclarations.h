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

// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t2921;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2244;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1094;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>[]
struct KeyValuePair_2U5BU5D_t3177;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t58;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>
struct IEnumerator_1_t3178;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1301;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.TextEditor/TextEditOp>
struct KeyCollection_t2926;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>
struct ValueCollection_t2930;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_22.h"
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__22.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor()
extern "C" void Dictionary_2__ctor_m23521_gshared (Dictionary_2_t2921 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m23521(__this, method) (( void (*) (Dictionary_2_t2921 *, const MethodInfo*))Dictionary_2__ctor_m23521_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m23523_gshared (Dictionary_2_t2921 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m23523(__this, ___comparer, method) (( void (*) (Dictionary_2_t2921 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m23523_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m23525_gshared (Dictionary_2_t2921 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m23525(__this, ___capacity, method) (( void (*) (Dictionary_2_t2921 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m23525_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m23527_gshared (Dictionary_2_t2921 * __this, SerializationInfo_t1094 * ___info, StreamingContext_t1095  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m23527(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2921 *, SerializationInfo_t1094 *, StreamingContext_t1095 , const MethodInfo*))Dictionary_2__ctor_m23527_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m23529_gshared (Dictionary_2_t2921 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m23529(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2921 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m23529_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m23531_gshared (Dictionary_2_t2921 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m23531(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2921 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m23531_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m23533_gshared (Dictionary_2_t2921 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m23533(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2921 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m23533_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m23535_gshared (Dictionary_2_t2921 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m23535(__this, ___key, method) (( bool (*) (Dictionary_2_t2921 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m23535_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m23537_gshared (Dictionary_2_t2921 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m23537(__this, ___key, method) (( void (*) (Dictionary_2_t2921 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m23537_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m23539_gshared (Dictionary_2_t2921 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m23539(__this, method) (( bool (*) (Dictionary_2_t2921 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m23539_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23541_gshared (Dictionary_2_t2921 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23541(__this, method) (( Object_t * (*) (Dictionary_2_t2921 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23541_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23543_gshared (Dictionary_2_t2921 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23543(__this, method) (( bool (*) (Dictionary_2_t2921 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23543_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23545_gshared (Dictionary_2_t2921 * __this, KeyValuePair_2_t2923  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23545(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2921 *, KeyValuePair_2_t2923 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23545_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23547_gshared (Dictionary_2_t2921 * __this, KeyValuePair_2_t2923  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23547(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2921 *, KeyValuePair_2_t2923 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23547_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23549_gshared (Dictionary_2_t2921 * __this, KeyValuePair_2U5BU5D_t3177* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23549(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2921 *, KeyValuePair_2U5BU5D_t3177*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23549_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23551_gshared (Dictionary_2_t2921 * __this, KeyValuePair_2_t2923  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23551(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2921 *, KeyValuePair_2_t2923 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23551_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m23553_gshared (Dictionary_2_t2921 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m23553(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2921 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m23553_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23555_gshared (Dictionary_2_t2921 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23555(__this, method) (( Object_t * (*) (Dictionary_2_t2921 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23555_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23557_gshared (Dictionary_2_t2921 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23557(__this, method) (( Object_t* (*) (Dictionary_2_t2921 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23557_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23559_gshared (Dictionary_2_t2921 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23559(__this, method) (( Object_t * (*) (Dictionary_2_t2921 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23559_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m23561_gshared (Dictionary_2_t2921 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m23561(__this, method) (( int32_t (*) (Dictionary_2_t2921 *, const MethodInfo*))Dictionary_2_get_Count_m23561_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m23563_gshared (Dictionary_2_t2921 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m23563(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2921 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m23563_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m23565_gshared (Dictionary_2_t2921 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m23565(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2921 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m23565_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m23567_gshared (Dictionary_2_t2921 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m23567(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2921 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m23567_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m23569_gshared (Dictionary_2_t2921 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m23569(__this, ___size, method) (( void (*) (Dictionary_2_t2921 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m23569_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m23571_gshared (Dictionary_2_t2921 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m23571(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2921 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m23571_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2923  Dictionary_2_make_pair_m23573_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m23573(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2923  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m23573_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m23575_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m23575(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m23575_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m23577_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m23577(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m23577_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m23579_gshared (Dictionary_2_t2921 * __this, KeyValuePair_2U5BU5D_t3177* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m23579(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2921 *, KeyValuePair_2U5BU5D_t3177*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m23579_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Resize()
extern "C" void Dictionary_2_Resize_m23581_gshared (Dictionary_2_t2921 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m23581(__this, method) (( void (*) (Dictionary_2_t2921 *, const MethodInfo*))Dictionary_2_Resize_m23581_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m23583_gshared (Dictionary_2_t2921 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m23583(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2921 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m23583_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Clear()
extern "C" void Dictionary_2_Clear_m23585_gshared (Dictionary_2_t2921 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m23585(__this, method) (( void (*) (Dictionary_2_t2921 *, const MethodInfo*))Dictionary_2_Clear_m23585_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m23587_gshared (Dictionary_2_t2921 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m23587(__this, ___key, method) (( bool (*) (Dictionary_2_t2921 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m23587_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m23589_gshared (Dictionary_2_t2921 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m23589(__this, ___value, method) (( bool (*) (Dictionary_2_t2921 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m23589_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m23591_gshared (Dictionary_2_t2921 * __this, SerializationInfo_t1094 * ___info, StreamingContext_t1095  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m23591(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2921 *, SerializationInfo_t1094 *, StreamingContext_t1095 , const MethodInfo*))Dictionary_2_GetObjectData_m23591_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m23593_gshared (Dictionary_2_t2921 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m23593(__this, ___sender, method) (( void (*) (Dictionary_2_t2921 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m23593_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m23595_gshared (Dictionary_2_t2921 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m23595(__this, ___key, method) (( bool (*) (Dictionary_2_t2921 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m23595_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m23597_gshared (Dictionary_2_t2921 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m23597(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2921 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m23597_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Keys()
extern "C" KeyCollection_t2926 * Dictionary_2_get_Keys_m23599_gshared (Dictionary_2_t2921 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m23599(__this, method) (( KeyCollection_t2926 * (*) (Dictionary_2_t2921 *, const MethodInfo*))Dictionary_2_get_Keys_m23599_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Values()
extern "C" ValueCollection_t2930 * Dictionary_2_get_Values_m23601_gshared (Dictionary_2_t2921 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m23601(__this, method) (( ValueCollection_t2930 * (*) (Dictionary_2_t2921 *, const MethodInfo*))Dictionary_2_get_Values_m23601_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m23603_gshared (Dictionary_2_t2921 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m23603(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2921 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m23603_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m23605_gshared (Dictionary_2_t2921 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m23605(__this, ___value, method) (( int32_t (*) (Dictionary_2_t2921 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m23605_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m23607_gshared (Dictionary_2_t2921 * __this, KeyValuePair_2_t2923  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m23607(__this, ___pair, method) (( bool (*) (Dictionary_2_t2921 *, KeyValuePair_2_t2923 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m23607_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::GetEnumerator()
extern "C" Enumerator_t2928  Dictionary_2_GetEnumerator_m23609_gshared (Dictionary_2_t2921 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m23609(__this, method) (( Enumerator_t2928  (*) (Dictionary_2_t2921 *, const MethodInfo*))Dictionary_2_GetEnumerator_m23609_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t111  Dictionary_2_U3CCopyToU3Em__0_m23611_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m23611(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t111  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m23611_gshared)(__this /* static, unused */, ___key, ___value, method)
