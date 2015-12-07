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

// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
struct List_1_t979;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UILineInfo>
struct IEnumerable_1_t3169;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UILineInfo>
struct IEnumerator_1_t3170;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t58;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>
struct ICollection_1_t856;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>
struct ReadOnlyCollection_1_t2882;
// UnityEngine.UILineInfo[]
struct UILineInfoU5BU5D_t1091;
// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t2886;
// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t2889;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_UILineInfo.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_52.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor()
extern "C" void List_1__ctor_m22944_gshared (List_1_t979 * __this, const MethodInfo* method);
#define List_1__ctor_m22944(__this, method) (( void (*) (List_1_t979 *, const MethodInfo*))List_1__ctor_m22944_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m22945_gshared (List_1_t979 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m22945(__this, ___collection, method) (( void (*) (List_1_t979 *, Object_t*, const MethodInfo*))List_1__ctor_m22945_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m6738_gshared (List_1_t979 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m6738(__this, ___capacity, method) (( void (*) (List_1_t979 *, int32_t, const MethodInfo*))List_1__ctor_m6738_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.cctor()
extern "C" void List_1__cctor_m22946_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m22946(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m22946_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m22947_gshared (List_1_t979 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m22947(__this, method) (( Object_t* (*) (List_1_t979 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m22947_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m22948_gshared (List_1_t979 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m22948(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t979 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m22948_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m22949_gshared (List_1_t979 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m22949(__this, method) (( Object_t * (*) (List_1_t979 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m22949_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m22950_gshared (List_1_t979 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m22950(__this, ___item, method) (( int32_t (*) (List_1_t979 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m22950_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m22951_gshared (List_1_t979 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m22951(__this, ___item, method) (( bool (*) (List_1_t979 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m22951_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m22952_gshared (List_1_t979 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m22952(__this, ___item, method) (( int32_t (*) (List_1_t979 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m22952_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m22953_gshared (List_1_t979 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m22953(__this, ___index, ___item, method) (( void (*) (List_1_t979 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m22953_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m22954_gshared (List_1_t979 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m22954(__this, ___item, method) (( void (*) (List_1_t979 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m22954_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m22955_gshared (List_1_t979 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m22955(__this, method) (( bool (*) (List_1_t979 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m22955_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m22956_gshared (List_1_t979 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m22956(__this, method) (( bool (*) (List_1_t979 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m22956_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m22957_gshared (List_1_t979 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m22957(__this, method) (( Object_t * (*) (List_1_t979 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m22957_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m22958_gshared (List_1_t979 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m22958(__this, method) (( bool (*) (List_1_t979 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m22958_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m22959_gshared (List_1_t979 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m22959(__this, method) (( bool (*) (List_1_t979 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m22959_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m22960_gshared (List_1_t979 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m22960(__this, ___index, method) (( Object_t * (*) (List_1_t979 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m22960_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m22961_gshared (List_1_t979 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m22961(__this, ___index, ___value, method) (( void (*) (List_1_t979 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m22961_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Add(T)
extern "C" void List_1_Add_m22962_gshared (List_1_t979 * __this, UILineInfo_t852  ___item, const MethodInfo* method);
#define List_1_Add_m22962(__this, ___item, method) (( void (*) (List_1_t979 *, UILineInfo_t852 , const MethodInfo*))List_1_Add_m22962_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m22963_gshared (List_1_t979 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m22963(__this, ___newCount, method) (( void (*) (List_1_t979 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m22963_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m22964_gshared (List_1_t979 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m22964(__this, ___collection, method) (( void (*) (List_1_t979 *, Object_t*, const MethodInfo*))List_1_AddCollection_m22964_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m22965_gshared (List_1_t979 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m22965(__this, ___enumerable, method) (( void (*) (List_1_t979 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m22965_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m22966_gshared (List_1_t979 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m22966(__this, ___collection, method) (( void (*) (List_1_t979 *, Object_t*, const MethodInfo*))List_1_AddRange_m22966_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2882 * List_1_AsReadOnly_m22967_gshared (List_1_t979 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m22967(__this, method) (( ReadOnlyCollection_1_t2882 * (*) (List_1_t979 *, const MethodInfo*))List_1_AsReadOnly_m22967_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Clear()
extern "C" void List_1_Clear_m22968_gshared (List_1_t979 * __this, const MethodInfo* method);
#define List_1_Clear_m22968(__this, method) (( void (*) (List_1_t979 *, const MethodInfo*))List_1_Clear_m22968_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Contains(T)
extern "C" bool List_1_Contains_m22969_gshared (List_1_t979 * __this, UILineInfo_t852  ___item, const MethodInfo* method);
#define List_1_Contains_m22969(__this, ___item, method) (( bool (*) (List_1_t979 *, UILineInfo_t852 , const MethodInfo*))List_1_Contains_m22969_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m22970_gshared (List_1_t979 * __this, UILineInfoU5BU5D_t1091* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m22970(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t979 *, UILineInfoU5BU5D_t1091*, int32_t, const MethodInfo*))List_1_CopyTo_m22970_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Find(System.Predicate`1<T>)
extern "C" UILineInfo_t852  List_1_Find_m22971_gshared (List_1_t979 * __this, Predicate_1_t2886 * ___match, const MethodInfo* method);
#define List_1_Find_m22971(__this, ___match, method) (( UILineInfo_t852  (*) (List_1_t979 *, Predicate_1_t2886 *, const MethodInfo*))List_1_Find_m22971_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m22972_gshared (Object_t * __this /* static, unused */, Predicate_1_t2886 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m22972(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2886 *, const MethodInfo*))List_1_CheckMatch_m22972_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m22973_gshared (List_1_t979 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2886 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m22973(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t979 *, int32_t, int32_t, Predicate_1_t2886 *, const MethodInfo*))List_1_GetIndex_m22973_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetEnumerator()
extern "C" Enumerator_t2881  List_1_GetEnumerator_m22974_gshared (List_1_t979 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m22974(__this, method) (( Enumerator_t2881  (*) (List_1_t979 *, const MethodInfo*))List_1_GetEnumerator_m22974_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m22975_gshared (List_1_t979 * __this, UILineInfo_t852  ___item, const MethodInfo* method);
#define List_1_IndexOf_m22975(__this, ___item, method) (( int32_t (*) (List_1_t979 *, UILineInfo_t852 , const MethodInfo*))List_1_IndexOf_m22975_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m22976_gshared (List_1_t979 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m22976(__this, ___start, ___delta, method) (( void (*) (List_1_t979 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m22976_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m22977_gshared (List_1_t979 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m22977(__this, ___index, method) (( void (*) (List_1_t979 *, int32_t, const MethodInfo*))List_1_CheckIndex_m22977_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m22978_gshared (List_1_t979 * __this, int32_t ___index, UILineInfo_t852  ___item, const MethodInfo* method);
#define List_1_Insert_m22978(__this, ___index, ___item, method) (( void (*) (List_1_t979 *, int32_t, UILineInfo_t852 , const MethodInfo*))List_1_Insert_m22978_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m22979_gshared (List_1_t979 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m22979(__this, ___collection, method) (( void (*) (List_1_t979 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m22979_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Remove(T)
extern "C" bool List_1_Remove_m22980_gshared (List_1_t979 * __this, UILineInfo_t852  ___item, const MethodInfo* method);
#define List_1_Remove_m22980(__this, ___item, method) (( bool (*) (List_1_t979 *, UILineInfo_t852 , const MethodInfo*))List_1_Remove_m22980_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m22981_gshared (List_1_t979 * __this, Predicate_1_t2886 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m22981(__this, ___match, method) (( int32_t (*) (List_1_t979 *, Predicate_1_t2886 *, const MethodInfo*))List_1_RemoveAll_m22981_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m22982_gshared (List_1_t979 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m22982(__this, ___index, method) (( void (*) (List_1_t979 *, int32_t, const MethodInfo*))List_1_RemoveAt_m22982_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Reverse()
extern "C" void List_1_Reverse_m22983_gshared (List_1_t979 * __this, const MethodInfo* method);
#define List_1_Reverse_m22983(__this, method) (( void (*) (List_1_t979 *, const MethodInfo*))List_1_Reverse_m22983_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort()
extern "C" void List_1_Sort_m22984_gshared (List_1_t979 * __this, const MethodInfo* method);
#define List_1_Sort_m22984(__this, method) (( void (*) (List_1_t979 *, const MethodInfo*))List_1_Sort_m22984_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m22985_gshared (List_1_t979 * __this, Comparison_1_t2889 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m22985(__this, ___comparison, method) (( void (*) (List_1_t979 *, Comparison_1_t2889 *, const MethodInfo*))List_1_Sort_m22985_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UILineInfo>::ToArray()
extern "C" UILineInfoU5BU5D_t1091* List_1_ToArray_m22986_gshared (List_1_t979 * __this, const MethodInfo* method);
#define List_1_ToArray_m22986(__this, method) (( UILineInfoU5BU5D_t1091* (*) (List_1_t979 *, const MethodInfo*))List_1_ToArray_m22986_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m22987_gshared (List_1_t979 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m22987(__this, method) (( void (*) (List_1_t979 *, const MethodInfo*))List_1_TrimExcess_m22987_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m22988_gshared (List_1_t979 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m22988(__this, method) (( int32_t (*) (List_1_t979 *, const MethodInfo*))List_1_get_Capacity_m22988_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m22989_gshared (List_1_t979 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m22989(__this, ___value, method) (( void (*) (List_1_t979 *, int32_t, const MethodInfo*))List_1_set_Capacity_m22989_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m22990_gshared (List_1_t979 * __this, const MethodInfo* method);
#define List_1_get_Count_m22990(__this, method) (( int32_t (*) (List_1_t979 *, const MethodInfo*))List_1_get_Count_m22990_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Item(System.Int32)
extern "C" UILineInfo_t852  List_1_get_Item_m22991_gshared (List_1_t979 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m22991(__this, ___index, method) (( UILineInfo_t852  (*) (List_1_t979 *, int32_t, const MethodInfo*))List_1_get_Item_m22991_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m22992_gshared (List_1_t979 * __this, int32_t ___index, UILineInfo_t852  ___value, const MethodInfo* method);
#define List_1_set_Item_m22992(__this, ___index, ___value, method) (( void (*) (List_1_t979 *, int32_t, UILineInfo_t852 , const MethodInfo*))List_1_set_Item_m22992_gshared)(__this, ___index, ___value, method)
