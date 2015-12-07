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

// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2349;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1094;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2771;
// System.Object[]
struct ObjectU5BU5D_t72;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t58;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2244;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "System_Core_System_Collections_Generic_HashSet_1_Enumerator__0.h"

// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
extern "C" void HashSet_1__ctor_m15542_gshared (HashSet_1_t2349 * __this, const MethodInfo* method);
#define HashSet_1__ctor_m15542(__this, method) (( void (*) (HashSet_1_t2349 *, const MethodInfo*))HashSet_1__ctor_m15542_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1__ctor_m15544_gshared (HashSet_1_t2349 * __this, SerializationInfo_t1094 * ___info, StreamingContext_t1095  ___context, const MethodInfo* method);
#define HashSet_1__ctor_m15544(__this, ___info, ___context, method) (( void (*) (HashSet_1_t2349 *, SerializationInfo_t1094 *, StreamingContext_t1095 , const MethodInfo*))HashSet_1__ctor_m15544_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15546_gshared (HashSet_1_t2349 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15546(__this, method) (( Object_t* (*) (HashSet_1_t2349 *, const MethodInfo*))HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15546_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15548_gshared (HashSet_1_t2349 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15548(__this, method) (( bool (*) (HashSet_1_t2349 *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15548_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.CopyTo(T[],System.Int32)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m15550_gshared (HashSet_1_t2349 * __this, ObjectU5BU5D_t72* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m15550(__this, ___array, ___index, method) (( void (*) (HashSet_1_t2349 *, ObjectU5BU5D_t72*, int32_t, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m15550_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m15552_gshared (HashSet_1_t2349 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m15552(__this, ___item, method) (( void (*) (HashSet_1_t2349 *, Object_t *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m15552_gshared)(__this, ___item, method)
// System.Collections.IEnumerator System.Collections.Generic.HashSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * HashSet_1_System_Collections_IEnumerable_GetEnumerator_m15554_gshared (HashSet_1_t2349 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_IEnumerable_GetEnumerator_m15554(__this, method) (( Object_t * (*) (HashSet_1_t2349 *, const MethodInfo*))HashSet_1_System_Collections_IEnumerable_GetEnumerator_m15554_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
extern "C" int32_t HashSet_1_get_Count_m15556_gshared (HashSet_1_t2349 * __this, const MethodInfo* method);
#define HashSet_1_get_Count_m15556(__this, method) (( int32_t (*) (HashSet_1_t2349 *, const MethodInfo*))HashSet_1_get_Count_m15556_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1_Init_m15558_gshared (HashSet_1_t2349 * __this, int32_t ___capacity, Object_t* ___comparer, const MethodInfo* method);
#define HashSet_1_Init_m15558(__this, ___capacity, ___comparer, method) (( void (*) (HashSet_1_t2349 *, int32_t, Object_t*, const MethodInfo*))HashSet_1_Init_m15558_gshared)(__this, ___capacity, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::InitArrays(System.Int32)
extern "C" void HashSet_1_InitArrays_m15560_gshared (HashSet_1_t2349 * __this, int32_t ___size, const MethodInfo* method);
#define HashSet_1_InitArrays_m15560(__this, ___size, method) (( void (*) (HashSet_1_t2349 *, int32_t, const MethodInfo*))HashSet_1_InitArrays_m15560_gshared)(__this, ___size, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::SlotsContainsAt(System.Int32,System.Int32,T)
extern "C" bool HashSet_1_SlotsContainsAt_m15562_gshared (HashSet_1_t2349 * __this, int32_t ___index, int32_t ___hash, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_SlotsContainsAt_m15562(__this, ___index, ___hash, ___item, method) (( bool (*) (HashSet_1_t2349 *, int32_t, int32_t, Object_t *, const MethodInfo*))HashSet_1_SlotsContainsAt_m15562_gshared)(__this, ___index, ___hash, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void HashSet_1_CopyTo_m15564_gshared (HashSet_1_t2349 * __this, ObjectU5BU5D_t72* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_CopyTo_m15564(__this, ___array, ___index, method) (( void (*) (HashSet_1_t2349 *, ObjectU5BU5D_t72*, int32_t, const MethodInfo*))HashSet_1_CopyTo_m15564_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32,System.Int32)
extern "C" void HashSet_1_CopyTo_m15566_gshared (HashSet_1_t2349 * __this, ObjectU5BU5D_t72* ___array, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define HashSet_1_CopyTo_m15566(__this, ___array, ___index, ___count, method) (( void (*) (HashSet_1_t2349 *, ObjectU5BU5D_t72*, int32_t, int32_t, const MethodInfo*))HashSet_1_CopyTo_m15566_gshared)(__this, ___array, ___index, ___count, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Resize()
extern "C" void HashSet_1_Resize_m15568_gshared (HashSet_1_t2349 * __this, const MethodInfo* method);
#define HashSet_1_Resize_m15568(__this, method) (( void (*) (HashSet_1_t2349 *, const MethodInfo*))HashSet_1_Resize_m15568_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetLinkHashCode(System.Int32)
extern "C" int32_t HashSet_1_GetLinkHashCode_m15570_gshared (HashSet_1_t2349 * __this, int32_t ___index, const MethodInfo* method);
#define HashSet_1_GetLinkHashCode_m15570(__this, ___index, method) (( int32_t (*) (HashSet_1_t2349 *, int32_t, const MethodInfo*))HashSet_1_GetLinkHashCode_m15570_gshared)(__this, ___index, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetItemHashCode(T)
extern "C" int32_t HashSet_1_GetItemHashCode_m15572_gshared (HashSet_1_t2349 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_GetItemHashCode_m15572(__this, ___item, method) (( int32_t (*) (HashSet_1_t2349 *, Object_t *, const MethodInfo*))HashSet_1_GetItemHashCode_m15572_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
extern "C" bool HashSet_1_Add_m15573_gshared (HashSet_1_t2349 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Add_m15573(__this, ___item, method) (( bool (*) (HashSet_1_t2349 *, Object_t *, const MethodInfo*))HashSet_1_Add_m15573_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Clear()
extern "C" void HashSet_1_Clear_m15575_gshared (HashSet_1_t2349 * __this, const MethodInfo* method);
#define HashSet_1_Clear_m15575(__this, method) (( void (*) (HashSet_1_t2349 *, const MethodInfo*))HashSet_1_Clear_m15575_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T)
extern "C" bool HashSet_1_Contains_m15577_gshared (HashSet_1_t2349 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Contains_m15577(__this, ___item, method) (( bool (*) (HashSet_1_t2349 *, Object_t *, const MethodInfo*))HashSet_1_Contains_m15577_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(T)
extern "C" bool HashSet_1_Remove_m15579_gshared (HashSet_1_t2349 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Remove_m15579(__this, ___item, method) (( bool (*) (HashSet_1_t2349 *, Object_t *, const MethodInfo*))HashSet_1_Remove_m15579_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1_GetObjectData_m15581_gshared (HashSet_1_t2349 * __this, SerializationInfo_t1094 * ___info, StreamingContext_t1095  ___context, const MethodInfo* method);
#define HashSet_1_GetObjectData_m15581(__this, ___info, ___context, method) (( void (*) (HashSet_1_t2349 *, SerializationInfo_t1094 *, StreamingContext_t1095 , const MethodInfo*))HashSet_1_GetObjectData_m15581_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::OnDeserialization(System.Object)
extern "C" void HashSet_1_OnDeserialization_m15583_gshared (HashSet_1_t2349 * __this, Object_t * ___sender, const MethodInfo* method);
#define HashSet_1_OnDeserialization_m15583(__this, ___sender, method) (( void (*) (HashSet_1_t2349 *, Object_t *, const MethodInfo*))HashSet_1_OnDeserialization_m15583_gshared)(__this, ___sender, method)
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t2353  HashSet_1_GetEnumerator_m15584_gshared (HashSet_1_t2349 * __this, const MethodInfo* method);
#define HashSet_1_GetEnumerator_m15584(__this, method) (( Enumerator_t2353  (*) (HashSet_1_t2349 *, const MethodInfo*))HashSet_1_GetEnumerator_m15584_gshared)(__this, method)
