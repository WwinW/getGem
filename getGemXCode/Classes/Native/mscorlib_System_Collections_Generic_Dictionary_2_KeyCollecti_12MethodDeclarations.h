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

// System.Collections.Generic.Dictionary`2/KeyCollection<System.IntPtr,System.Object>
struct KeyCollection_t2366;
// System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>
struct Dictionary_2_t2361;
// System.Collections.Generic.IEnumerator`1<System.IntPtr>
struct IEnumerator_1_t3099;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t58;
// System.Object
struct Object_t;
// System.IntPtr[]
struct IntPtrU5BU5D_t1086;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_13.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.IntPtr,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m15824_gshared (KeyCollection_t2366 * __this, Dictionary_2_t2361 * ___dictionary, const MethodInfo* method);
#define KeyCollection__ctor_m15824(__this, ___dictionary, method) (( void (*) (KeyCollection_t2366 *, Dictionary_2_t2361 *, const MethodInfo*))KeyCollection__ctor_m15824_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.IntPtr,System.Object>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m15825_gshared (KeyCollection_t2366 * __this, IntPtr_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m15825(__this, ___item, method) (( void (*) (KeyCollection_t2366 *, IntPtr_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m15825_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.IntPtr,System.Object>::System.Collections.Generic.ICollection<TKey>.Clear()
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m15826_gshared (KeyCollection_t2366 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m15826(__this, method) (( void (*) (KeyCollection_t2366 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m15826_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.IntPtr,System.Object>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m15827_gshared (KeyCollection_t2366 * __this, IntPtr_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m15827(__this, ___item, method) (( bool (*) (KeyCollection_t2366 *, IntPtr_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m15827_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.IntPtr,System.Object>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m15828_gshared (KeyCollection_t2366 * __this, IntPtr_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m15828(__this, ___item, method) (( bool (*) (KeyCollection_t2366 *, IntPtr_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m15828_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.IntPtr,System.Object>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m15829_gshared (KeyCollection_t2366 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m15829(__this, method) (( Object_t* (*) (KeyCollection_t2366 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m15829_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.IntPtr,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m15830_gshared (KeyCollection_t2366 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_CopyTo_m15830(__this, ___array, ___index, method) (( void (*) (KeyCollection_t2366 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m15830_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.IntPtr,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m15831_gshared (KeyCollection_t2366 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m15831(__this, method) (( Object_t * (*) (KeyCollection_t2366 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m15831_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.IntPtr,System.Object>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m15832_gshared (KeyCollection_t2366 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m15832(__this, method) (( bool (*) (KeyCollection_t2366 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m15832_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.IntPtr,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m15833_gshared (KeyCollection_t2366 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m15833(__this, method) (( bool (*) (KeyCollection_t2366 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m15833_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.IntPtr,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m15834_gshared (KeyCollection_t2366 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m15834(__this, method) (( Object_t * (*) (KeyCollection_t2366 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m15834_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.IntPtr,System.Object>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m15835_gshared (KeyCollection_t2366 * __this, IntPtrU5BU5D_t1086* ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_CopyTo_m15835(__this, ___array, ___index, method) (( void (*) (KeyCollection_t2366 *, IntPtrU5BU5D_t1086*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m15835_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.IntPtr,System.Object>::GetEnumerator()
extern "C" Enumerator_t2367  KeyCollection_GetEnumerator_m15836_gshared (KeyCollection_t2366 * __this, const MethodInfo* method);
#define KeyCollection_GetEnumerator_m15836(__this, method) (( Enumerator_t2367  (*) (KeyCollection_t2366 *, const MethodInfo*))KeyCollection_GetEnumerator_m15836_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.IntPtr,System.Object>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m15837_gshared (KeyCollection_t2366 * __this, const MethodInfo* method);
#define KeyCollection_get_Count_m15837(__this, method) (( int32_t (*) (KeyCollection_t2366 *, const MethodInfo*))KeyCollection_get_Count_m15837_gshared)(__this, method)
