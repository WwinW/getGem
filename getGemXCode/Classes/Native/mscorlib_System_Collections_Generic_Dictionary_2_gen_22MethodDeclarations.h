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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2451;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t2450;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1094;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t3104;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t58;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t3105;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1301;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_t2455;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t2459;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_12.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__12.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m16880_gshared (Dictionary_2_t2451 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m16880(__this, method) (( void (*) (Dictionary_2_t2451 *, const MethodInfo*))Dictionary_2__ctor_m16880_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m16882_gshared (Dictionary_2_t2451 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m16882(__this, ___comparer, method) (( void (*) (Dictionary_2_t2451 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m16882_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m16884_gshared (Dictionary_2_t2451 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m16884(__this, ___capacity, method) (( void (*) (Dictionary_2_t2451 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m16884_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m16886_gshared (Dictionary_2_t2451 * __this, SerializationInfo_t1094 * ___info, StreamingContext_t1095  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m16886(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2451 *, SerializationInfo_t1094 *, StreamingContext_t1095 , const MethodInfo*))Dictionary_2__ctor_m16886_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m16888_gshared (Dictionary_2_t2451 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m16888(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2451 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m16888_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m16890_gshared (Dictionary_2_t2451 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m16890(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2451 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m16890_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m16892_gshared (Dictionary_2_t2451 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m16892(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2451 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m16892_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m16894_gshared (Dictionary_2_t2451 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m16894(__this, ___key, method) (( bool (*) (Dictionary_2_t2451 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m16894_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m16896_gshared (Dictionary_2_t2451 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m16896(__this, ___key, method) (( void (*) (Dictionary_2_t2451 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m16896_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16898_gshared (Dictionary_2_t2451 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16898(__this, method) (( bool (*) (Dictionary_2_t2451 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16898_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16900_gshared (Dictionary_2_t2451 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16900(__this, method) (( Object_t * (*) (Dictionary_2_t2451 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16900_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16902_gshared (Dictionary_2_t2451 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16902(__this, method) (( bool (*) (Dictionary_2_t2451 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16902_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16904_gshared (Dictionary_2_t2451 * __this, KeyValuePair_2_t2453  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16904(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2451 *, KeyValuePair_2_t2453 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16904_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16906_gshared (Dictionary_2_t2451 * __this, KeyValuePair_2_t2453  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16906(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2451 *, KeyValuePair_2_t2453 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16906_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16908_gshared (Dictionary_2_t2451 * __this, KeyValuePair_2U5BU5D_t3104* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16908(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2451 *, KeyValuePair_2U5BU5D_t3104*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16908_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16910_gshared (Dictionary_2_t2451 * __this, KeyValuePair_2_t2453  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16910(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2451 *, KeyValuePair_2_t2453 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16910_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m16912_gshared (Dictionary_2_t2451 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m16912(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2451 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m16912_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16914_gshared (Dictionary_2_t2451 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16914(__this, method) (( Object_t * (*) (Dictionary_2_t2451 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16914_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16916_gshared (Dictionary_2_t2451 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16916(__this, method) (( Object_t* (*) (Dictionary_2_t2451 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16916_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16918_gshared (Dictionary_2_t2451 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16918(__this, method) (( Object_t * (*) (Dictionary_2_t2451 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16918_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m16920_gshared (Dictionary_2_t2451 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m16920(__this, method) (( int32_t (*) (Dictionary_2_t2451 *, const MethodInfo*))Dictionary_2_get_Count_m16920_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m16922_gshared (Dictionary_2_t2451 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m16922(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2451 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m16922_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m16924_gshared (Dictionary_2_t2451 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m16924(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2451 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m16924_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m16926_gshared (Dictionary_2_t2451 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m16926(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2451 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m16926_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m16928_gshared (Dictionary_2_t2451 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m16928(__this, ___size, method) (( void (*) (Dictionary_2_t2451 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m16928_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m16930_gshared (Dictionary_2_t2451 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m16930(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2451 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m16930_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2453  Dictionary_2_make_pair_m16932_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m16932(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2453  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m16932_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m16934_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m16934(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m16934_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m16936_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m16936(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m16936_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m16938_gshared (Dictionary_2_t2451 * __this, KeyValuePair_2U5BU5D_t3104* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m16938(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2451 *, KeyValuePair_2U5BU5D_t3104*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m16938_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m16940_gshared (Dictionary_2_t2451 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m16940(__this, method) (( void (*) (Dictionary_2_t2451 *, const MethodInfo*))Dictionary_2_Resize_m16940_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m16942_gshared (Dictionary_2_t2451 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m16942(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2451 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m16942_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m16944_gshared (Dictionary_2_t2451 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m16944(__this, method) (( void (*) (Dictionary_2_t2451 *, const MethodInfo*))Dictionary_2_Clear_m16944_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m16946_gshared (Dictionary_2_t2451 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m16946(__this, ___key, method) (( bool (*) (Dictionary_2_t2451 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m16946_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m16948_gshared (Dictionary_2_t2451 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m16948(__this, ___value, method) (( bool (*) (Dictionary_2_t2451 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m16948_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m16950_gshared (Dictionary_2_t2451 * __this, SerializationInfo_t1094 * ___info, StreamingContext_t1095  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m16950(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2451 *, SerializationInfo_t1094 *, StreamingContext_t1095 , const MethodInfo*))Dictionary_2_GetObjectData_m16950_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m16952_gshared (Dictionary_2_t2451 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m16952(__this, ___sender, method) (( void (*) (Dictionary_2_t2451 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m16952_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m16954_gshared (Dictionary_2_t2451 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m16954(__this, ___key, method) (( bool (*) (Dictionary_2_t2451 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m16954_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m16956_gshared (Dictionary_2_t2451 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m16956(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2451 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m16956_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Keys()
extern "C" KeyCollection_t2455 * Dictionary_2_get_Keys_m16958_gshared (Dictionary_2_t2451 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m16958(__this, method) (( KeyCollection_t2455 * (*) (Dictionary_2_t2451 *, const MethodInfo*))Dictionary_2_get_Keys_m16958_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t2459 * Dictionary_2_get_Values_m16960_gshared (Dictionary_2_t2451 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m16960(__this, method) (( ValueCollection_t2459 * (*) (Dictionary_2_t2451 *, const MethodInfo*))Dictionary_2_get_Values_m16960_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m16962_gshared (Dictionary_2_t2451 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m16962(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2451 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m16962_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m16964_gshared (Dictionary_2_t2451 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m16964(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2451 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m16964_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m16966_gshared (Dictionary_2_t2451 * __this, KeyValuePair_2_t2453  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m16966(__this, ___pair, method) (( bool (*) (Dictionary_2_t2451 *, KeyValuePair_2_t2453 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m16966_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t2457  Dictionary_2_GetEnumerator_m16968_gshared (Dictionary_2_t2451 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m16968(__this, method) (( Enumerator_t2457  (*) (Dictionary_2_t2451 *, const MethodInfo*))Dictionary_2_GetEnumerator_m16968_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t111  Dictionary_2_U3CCopyToU3Em__0_m16970_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m16970(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t111  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m16970_gshared)(__this /* static, unused */, ___key, ___value, method)
