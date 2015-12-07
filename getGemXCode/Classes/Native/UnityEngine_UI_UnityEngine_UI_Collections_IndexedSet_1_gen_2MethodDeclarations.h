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

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t2655;
// System.Collections.IEnumerator
struct IEnumerator_t58;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2771;
// System.Object[]
struct ObjectU5BU5D_t72;
// System.Predicate`1<System.Object>
struct Predicate_1_t2270;
// System.Comparison`1<System.Object>
struct Comparison_1_t568;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m19707_gshared (IndexedSet_1_t2655 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m19707(__this, method) (( void (*) (IndexedSet_1_t2655 *, const MethodInfo*))IndexedSet_1__ctor_m19707_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m19709_gshared (IndexedSet_1_t2655 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m19709(__this, method) (( Object_t * (*) (IndexedSet_1_t2655 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m19709_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m19711_gshared (IndexedSet_1_t2655 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m19711(__this, ___item, method) (( void (*) (IndexedSet_1_t2655 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m19711_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m19713_gshared (IndexedSet_1_t2655 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m19713(__this, ___item, method) (( bool (*) (IndexedSet_1_t2655 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m19713_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m19715_gshared (IndexedSet_1_t2655 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m19715(__this, method) (( Object_t* (*) (IndexedSet_1_t2655 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m19715_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m19717_gshared (IndexedSet_1_t2655 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m19717(__this, method) (( void (*) (IndexedSet_1_t2655 *, const MethodInfo*))IndexedSet_1_Clear_m19717_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m19719_gshared (IndexedSet_1_t2655 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m19719(__this, ___item, method) (( bool (*) (IndexedSet_1_t2655 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m19719_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m19721_gshared (IndexedSet_1_t2655 * __this, ObjectU5BU5D_t72* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m19721(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t2655 *, ObjectU5BU5D_t72*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m19721_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m19723_gshared (IndexedSet_1_t2655 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m19723(__this, method) (( int32_t (*) (IndexedSet_1_t2655 *, const MethodInfo*))IndexedSet_1_get_Count_m19723_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m19725_gshared (IndexedSet_1_t2655 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m19725(__this, method) (( bool (*) (IndexedSet_1_t2655 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m19725_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m19727_gshared (IndexedSet_1_t2655 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m19727(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t2655 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m19727_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m19729_gshared (IndexedSet_1_t2655 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m19729(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t2655 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m19729_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m19731_gshared (IndexedSet_1_t2655 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m19731(__this, ___index, method) (( void (*) (IndexedSet_1_t2655 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m19731_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m19733_gshared (IndexedSet_1_t2655 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m19733(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t2655 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m19733_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m19735_gshared (IndexedSet_1_t2655 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m19735(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t2655 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m19735_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m19736_gshared (IndexedSet_1_t2655 * __this, Predicate_1_t2270 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m19736(__this, ___match, method) (( void (*) (IndexedSet_1_t2655 *, Predicate_1_t2270 *, const MethodInfo*))IndexedSet_1_RemoveAll_m19736_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m19737_gshared (IndexedSet_1_t2655 * __this, Comparison_1_t568 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m19737(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t2655 *, Comparison_1_t568 *, const MethodInfo*))IndexedSet_1_Sort_m19737_gshared)(__this, ___sortLayoutFunction, method)
