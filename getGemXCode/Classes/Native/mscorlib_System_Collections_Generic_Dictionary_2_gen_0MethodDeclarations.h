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

// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t18;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2244;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1094;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t3083;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t58;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct IEnumerator_1_t3084;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1301;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>
struct KeyCollection_t2285;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>
struct ValueCollection_t2289;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__7.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
extern "C" void Dictionary_2__ctor_m489_gshared (Dictionary_2_t18 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m489(__this, method) (( void (*) (Dictionary_2_t18 *, const MethodInfo*))Dictionary_2__ctor_m489_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m14694_gshared (Dictionary_2_t18 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m14694(__this, ___comparer, method) (( void (*) (Dictionary_2_t18 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m14694_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m14695_gshared (Dictionary_2_t18 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m14695(__this, ___capacity, method) (( void (*) (Dictionary_2_t18 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m14695_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m14696_gshared (Dictionary_2_t18 * __this, SerializationInfo_t1094 * ___info, StreamingContext_t1095  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m14696(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t18 *, SerializationInfo_t1094 *, StreamingContext_t1095 , const MethodInfo*))Dictionary_2__ctor_m14696_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m14697_gshared (Dictionary_2_t18 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m14697(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t18 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m14697_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m14698_gshared (Dictionary_2_t18 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m14698(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t18 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m14698_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m14699_gshared (Dictionary_2_t18 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m14699(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t18 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m14699_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m14700_gshared (Dictionary_2_t18 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m14700(__this, ___key, method) (( bool (*) (Dictionary_2_t18 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m14700_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m14701_gshared (Dictionary_2_t18 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m14701(__this, ___key, method) (( void (*) (Dictionary_2_t18 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m14701_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14702_gshared (Dictionary_2_t18 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14702(__this, method) (( bool (*) (Dictionary_2_t18 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14702_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14703_gshared (Dictionary_2_t18 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14703(__this, method) (( Object_t * (*) (Dictionary_2_t18 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14703_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14704_gshared (Dictionary_2_t18 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14704(__this, method) (( bool (*) (Dictionary_2_t18 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14704_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14705_gshared (Dictionary_2_t18 * __this, KeyValuePair_2_t2282  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14705(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t18 *, KeyValuePair_2_t2282 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14705_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14706_gshared (Dictionary_2_t18 * __this, KeyValuePair_2_t2282  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14706(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t18 *, KeyValuePair_2_t2282 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14706_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14707_gshared (Dictionary_2_t18 * __this, KeyValuePair_2U5BU5D_t3083* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14707(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t18 *, KeyValuePair_2U5BU5D_t3083*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14707_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14708_gshared (Dictionary_2_t18 * __this, KeyValuePair_2_t2282  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14708(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t18 *, KeyValuePair_2_t2282 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14708_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m14709_gshared (Dictionary_2_t18 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m14709(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t18 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m14709_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14710_gshared (Dictionary_2_t18 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14710(__this, method) (( Object_t * (*) (Dictionary_2_t18 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14710_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14711_gshared (Dictionary_2_t18 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14711(__this, method) (( Object_t* (*) (Dictionary_2_t18 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14711_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14712_gshared (Dictionary_2_t18 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14712(__this, method) (( Object_t * (*) (Dictionary_2_t18 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14712_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m14713_gshared (Dictionary_2_t18 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m14713(__this, method) (( int32_t (*) (Dictionary_2_t18 *, const MethodInfo*))Dictionary_2_get_Count_m14713_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(TKey)
extern "C" bool Dictionary_2_get_Item_m14714_gshared (Dictionary_2_t18 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m14714(__this, ___key, method) (( bool (*) (Dictionary_2_t18 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m14714_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m14715_gshared (Dictionary_2_t18 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m14715(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t18 *, Object_t *, bool, const MethodInfo*))Dictionary_2_set_Item_m14715_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m14716_gshared (Dictionary_2_t18 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m14716(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t18 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m14716_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m14717_gshared (Dictionary_2_t18 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m14717(__this, ___size, method) (( void (*) (Dictionary_2_t18 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m14717_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m14718_gshared (Dictionary_2_t18 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m14718(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t18 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m14718_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2282  Dictionary_2_make_pair_m14719_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m14719(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2282  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_make_pair_m14719_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m14720_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m14720(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_key_m14720_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_value(TKey,TValue)
extern "C" bool Dictionary_2_pick_value_m14721_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m14721(__this /* static, unused */, ___key, ___value, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_value_m14721_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m14722_gshared (Dictionary_2_t18 * __this, KeyValuePair_2U5BU5D_t3083* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m14722(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t18 *, KeyValuePair_2U5BU5D_t3083*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m14722_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Resize()
extern "C" void Dictionary_2_Resize_m14723_gshared (Dictionary_2_t18 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m14723(__this, method) (( void (*) (Dictionary_2_t18 *, const MethodInfo*))Dictionary_2_Resize_m14723_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m14724_gshared (Dictionary_2_t18 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_Add_m14724(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t18 *, Object_t *, bool, const MethodInfo*))Dictionary_2_Add_m14724_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Clear()
extern "C" void Dictionary_2_Clear_m14725_gshared (Dictionary_2_t18 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m14725(__this, method) (( void (*) (Dictionary_2_t18 *, const MethodInfo*))Dictionary_2_Clear_m14725_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m14726_gshared (Dictionary_2_t18 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m14726(__this, ___key, method) (( bool (*) (Dictionary_2_t18 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m14726_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m14727_gshared (Dictionary_2_t18 * __this, bool ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m14727(__this, ___value, method) (( bool (*) (Dictionary_2_t18 *, bool, const MethodInfo*))Dictionary_2_ContainsValue_m14727_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m14728_gshared (Dictionary_2_t18 * __this, SerializationInfo_t1094 * ___info, StreamingContext_t1095  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m14728(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t18 *, SerializationInfo_t1094 *, StreamingContext_t1095 , const MethodInfo*))Dictionary_2_GetObjectData_m14728_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m14729_gshared (Dictionary_2_t18 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m14729(__this, ___sender, method) (( void (*) (Dictionary_2_t18 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m14729_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m14730_gshared (Dictionary_2_t18 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m14730(__this, ___key, method) (( bool (*) (Dictionary_2_t18 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m14730_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m14731_gshared (Dictionary_2_t18 * __this, Object_t * ___key, bool* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m14731(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t18 *, Object_t *, bool*, const MethodInfo*))Dictionary_2_TryGetValue_m14731_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Keys()
extern "C" KeyCollection_t2285 * Dictionary_2_get_Keys_m14732_gshared (Dictionary_2_t18 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m14732(__this, method) (( KeyCollection_t2285 * (*) (Dictionary_2_t18 *, const MethodInfo*))Dictionary_2_get_Keys_m14732_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Values()
extern "C" ValueCollection_t2289 * Dictionary_2_get_Values_m14733_gshared (Dictionary_2_t18 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m14733(__this, method) (( ValueCollection_t2289 * (*) (Dictionary_2_t18 *, const MethodInfo*))Dictionary_2_get_Values_m14733_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m14734_gshared (Dictionary_2_t18 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m14734(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t18 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m14734_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTValue(System.Object)
extern "C" bool Dictionary_2_ToTValue_m14735_gshared (Dictionary_2_t18 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m14735(__this, ___value, method) (( bool (*) (Dictionary_2_t18 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m14735_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m14736_gshared (Dictionary_2_t18 * __this, KeyValuePair_2_t2282  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m14736(__this, ___pair, method) (( bool (*) (Dictionary_2_t18 *, KeyValuePair_2_t2282 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m14736_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetEnumerator()
extern "C" Enumerator_t2287  Dictionary_2_GetEnumerator_m14737_gshared (Dictionary_2_t18 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m14737(__this, method) (( Enumerator_t2287  (*) (Dictionary_2_t18 *, const MethodInfo*))Dictionary_2_GetEnumerator_m14737_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t111  Dictionary_2_U3CCopyToU3Em__0_m14738_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m14738(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t111  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m14738_gshared)(__this /* static, unused */, ___key, ___value, method)
