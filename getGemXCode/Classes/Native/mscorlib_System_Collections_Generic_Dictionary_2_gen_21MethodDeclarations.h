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

// System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>
struct Dictionary_2_t2361;
// System.Collections.Generic.IEqualityComparer`1<System.IntPtr>
struct IEqualityComparer_1_t2360;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1094;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>[]
struct KeyValuePair_2U5BU5D_t3097;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t58;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>>
struct IEnumerator_1_t3098;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1301;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.IntPtr,System.Object>
struct KeyCollection_t2366;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.IntPtr,System.Object>
struct ValueCollection_t2370;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__10.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m15715_gshared (Dictionary_2_t2361 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m15715(__this, method) (( void (*) (Dictionary_2_t2361 *, const MethodInfo*))Dictionary_2__ctor_m15715_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m15717_gshared (Dictionary_2_t2361 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m15717(__this, ___comparer, method) (( void (*) (Dictionary_2_t2361 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m15717_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m15719_gshared (Dictionary_2_t2361 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m15719(__this, ___capacity, method) (( void (*) (Dictionary_2_t2361 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m15719_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m15721_gshared (Dictionary_2_t2361 * __this, SerializationInfo_t1094 * ___info, StreamingContext_t1095  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m15721(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2361 *, SerializationInfo_t1094 *, StreamingContext_t1095 , const MethodInfo*))Dictionary_2__ctor_m15721_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m15723_gshared (Dictionary_2_t2361 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m15723(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2361 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m15723_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m15725_gshared (Dictionary_2_t2361 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m15725(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2361 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m15725_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m15727_gshared (Dictionary_2_t2361 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m15727(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2361 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m15727_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m15729_gshared (Dictionary_2_t2361 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m15729(__this, ___key, method) (( bool (*) (Dictionary_2_t2361 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m15729_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m15731_gshared (Dictionary_2_t2361 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m15731(__this, ___key, method) (( void (*) (Dictionary_2_t2361 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m15731_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m15733_gshared (Dictionary_2_t2361 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m15733(__this, method) (( bool (*) (Dictionary_2_t2361 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m15733_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15735_gshared (Dictionary_2_t2361 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15735(__this, method) (( Object_t * (*) (Dictionary_2_t2361 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15735_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15737_gshared (Dictionary_2_t2361 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15737(__this, method) (( bool (*) (Dictionary_2_t2361 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15737_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15739_gshared (Dictionary_2_t2361 * __this, KeyValuePair_2_t2363  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15739(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2361 *, KeyValuePair_2_t2363 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15739_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15741_gshared (Dictionary_2_t2361 * __this, KeyValuePair_2_t2363  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15741(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2361 *, KeyValuePair_2_t2363 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15741_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15743_gshared (Dictionary_2_t2361 * __this, KeyValuePair_2U5BU5D_t3097* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15743(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2361 *, KeyValuePair_2U5BU5D_t3097*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15743_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15745_gshared (Dictionary_2_t2361 * __this, KeyValuePair_2_t2363  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15745(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2361 *, KeyValuePair_2_t2363 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15745_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m15747_gshared (Dictionary_2_t2361 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m15747(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2361 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m15747_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15749_gshared (Dictionary_2_t2361 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15749(__this, method) (( Object_t * (*) (Dictionary_2_t2361 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15749_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15751_gshared (Dictionary_2_t2361 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15751(__this, method) (( Object_t* (*) (Dictionary_2_t2361 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15751_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15753_gshared (Dictionary_2_t2361 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15753(__this, method) (( Object_t * (*) (Dictionary_2_t2361 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15753_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m15755_gshared (Dictionary_2_t2361 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m15755(__this, method) (( int32_t (*) (Dictionary_2_t2361 *, const MethodInfo*))Dictionary_2_get_Count_m15755_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m15757_gshared (Dictionary_2_t2361 * __this, IntPtr_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m15757(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2361 *, IntPtr_t, const MethodInfo*))Dictionary_2_get_Item_m15757_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m15759_gshared (Dictionary_2_t2361 * __this, IntPtr_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m15759(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2361 *, IntPtr_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m15759_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m15761_gshared (Dictionary_2_t2361 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m15761(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2361 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m15761_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m15763_gshared (Dictionary_2_t2361 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m15763(__this, ___size, method) (( void (*) (Dictionary_2_t2361 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m15763_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m15765_gshared (Dictionary_2_t2361 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m15765(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2361 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m15765_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2363  Dictionary_2_make_pair_m15767_gshared (Object_t * __this /* static, unused */, IntPtr_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m15767(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2363  (*) (Object_t * /* static, unused */, IntPtr_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m15767_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::pick_key(TKey,TValue)
extern "C" IntPtr_t Dictionary_2_pick_key_m15769_gshared (Object_t * __this /* static, unused */, IntPtr_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m15769(__this /* static, unused */, ___key, ___value, method) (( IntPtr_t (*) (Object_t * /* static, unused */, IntPtr_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m15769_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m15771_gshared (Object_t * __this /* static, unused */, IntPtr_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m15771(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, IntPtr_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m15771_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m15773_gshared (Dictionary_2_t2361 * __this, KeyValuePair_2U5BU5D_t3097* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m15773(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2361 *, KeyValuePair_2U5BU5D_t3097*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m15773_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m15775_gshared (Dictionary_2_t2361 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m15775(__this, method) (( void (*) (Dictionary_2_t2361 *, const MethodInfo*))Dictionary_2_Resize_m15775_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m15777_gshared (Dictionary_2_t2361 * __this, IntPtr_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m15777(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2361 *, IntPtr_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m15777_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m15779_gshared (Dictionary_2_t2361 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m15779(__this, method) (( void (*) (Dictionary_2_t2361 *, const MethodInfo*))Dictionary_2_Clear_m15779_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m15781_gshared (Dictionary_2_t2361 * __this, IntPtr_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m15781(__this, ___key, method) (( bool (*) (Dictionary_2_t2361 *, IntPtr_t, const MethodInfo*))Dictionary_2_ContainsKey_m15781_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m15783_gshared (Dictionary_2_t2361 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m15783(__this, ___value, method) (( bool (*) (Dictionary_2_t2361 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m15783_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m15785_gshared (Dictionary_2_t2361 * __this, SerializationInfo_t1094 * ___info, StreamingContext_t1095  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m15785(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2361 *, SerializationInfo_t1094 *, StreamingContext_t1095 , const MethodInfo*))Dictionary_2_GetObjectData_m15785_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m15787_gshared (Dictionary_2_t2361 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m15787(__this, ___sender, method) (( void (*) (Dictionary_2_t2361 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m15787_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m15789_gshared (Dictionary_2_t2361 * __this, IntPtr_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m15789(__this, ___key, method) (( bool (*) (Dictionary_2_t2361 *, IntPtr_t, const MethodInfo*))Dictionary_2_Remove_m15789_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m15791_gshared (Dictionary_2_t2361 * __this, IntPtr_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m15791(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2361 *, IntPtr_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m15791_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::get_Keys()
extern "C" KeyCollection_t2366 * Dictionary_2_get_Keys_m15793_gshared (Dictionary_2_t2361 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m15793(__this, method) (( KeyCollection_t2366 * (*) (Dictionary_2_t2361 *, const MethodInfo*))Dictionary_2_get_Keys_m15793_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::get_Values()
extern "C" ValueCollection_t2370 * Dictionary_2_get_Values_m15795_gshared (Dictionary_2_t2361 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m15795(__this, method) (( ValueCollection_t2370 * (*) (Dictionary_2_t2361 *, const MethodInfo*))Dictionary_2_get_Values_m15795_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::ToTKey(System.Object)
extern "C" IntPtr_t Dictionary_2_ToTKey_m15797_gshared (Dictionary_2_t2361 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m15797(__this, ___key, method) (( IntPtr_t (*) (Dictionary_2_t2361 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m15797_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m15799_gshared (Dictionary_2_t2361 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m15799(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2361 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m15799_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m15801_gshared (Dictionary_2_t2361 * __this, KeyValuePair_2_t2363  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m15801(__this, ___pair, method) (( bool (*) (Dictionary_2_t2361 *, KeyValuePair_2_t2363 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m15801_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::GetEnumerator()
extern "C" Enumerator_t2368  Dictionary_2_GetEnumerator_m15803_gshared (Dictionary_2_t2361 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m15803(__this, method) (( Enumerator_t2368  (*) (Dictionary_2_t2361 *, const MethodInfo*))Dictionary_2_GetEnumerator_m15803_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t111  Dictionary_2_U3CCopyToU3Em__0_m15805_gshared (Object_t * __this /* static, unused */, IntPtr_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m15805(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t111  (*) (Object_t * /* static, unused */, IntPtr_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m15805_gshared)(__this /* static, unused */, ___key, ___value, method)
