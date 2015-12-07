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

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>
struct KeyCollection_t2285;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t18;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2771;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t58;
// System.Object[]
struct ObjectU5BU5D_t72;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_6.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m14757_gshared (KeyCollection_t2285 * __this, Dictionary_2_t18 * ___dictionary, const MethodInfo* method);
#define KeyCollection__ctor_m14757(__this, ___dictionary, method) (( void (*) (KeyCollection_t2285 *, Dictionary_2_t18 *, const MethodInfo*))KeyCollection__ctor_m14757_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m14758_gshared (KeyCollection_t2285 * __this, Object_t * ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m14758(__this, ___item, method) (( void (*) (KeyCollection_t2285 *, Object_t *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m14758_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>::System.Collections.Generic.ICollection<TKey>.Clear()
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m14759_gshared (KeyCollection_t2285 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m14759(__this, method) (( void (*) (KeyCollection_t2285 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m14759_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m14760_gshared (KeyCollection_t2285 * __this, Object_t * ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m14760(__this, ___item, method) (( bool (*) (KeyCollection_t2285 *, Object_t *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m14760_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m14761_gshared (KeyCollection_t2285 * __this, Object_t * ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m14761(__this, ___item, method) (( bool (*) (KeyCollection_t2285 *, Object_t *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m14761_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m14762_gshared (KeyCollection_t2285 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m14762(__this, method) (( Object_t* (*) (KeyCollection_t2285 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m14762_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m14763_gshared (KeyCollection_t2285 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_CopyTo_m14763(__this, ___array, ___index, method) (( void (*) (KeyCollection_t2285 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m14763_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m14764_gshared (KeyCollection_t2285 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m14764(__this, method) (( Object_t * (*) (KeyCollection_t2285 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m14764_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m14765_gshared (KeyCollection_t2285 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m14765(__this, method) (( bool (*) (KeyCollection_t2285 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m14765_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m14766_gshared (KeyCollection_t2285 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m14766(__this, method) (( bool (*) (KeyCollection_t2285 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m14766_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m14767_gshared (KeyCollection_t2285 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m14767(__this, method) (( Object_t * (*) (KeyCollection_t2285 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m14767_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m14768_gshared (KeyCollection_t2285 * __this, ObjectU5BU5D_t72* ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_CopyTo_m14768(__this, ___array, ___index, method) (( void (*) (KeyCollection_t2285 *, ObjectU5BU5D_t72*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m14768_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>::GetEnumerator()
extern "C" Enumerator_t2286  KeyCollection_GetEnumerator_m14769_gshared (KeyCollection_t2285 * __this, const MethodInfo* method);
#define KeyCollection_GetEnumerator_m14769(__this, method) (( Enumerator_t2286  (*) (KeyCollection_t2285 *, const MethodInfo*))KeyCollection_GetEnumerator_m14769_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m14770_gshared (KeyCollection_t2285 * __this, const MethodInfo* method);
#define KeyCollection_get_Count_m14770(__this, method) (( int32_t (*) (KeyCollection_t2285 *, const MethodInfo*))KeyCollection_get_Count_m14770_gshared)(__this, method)
