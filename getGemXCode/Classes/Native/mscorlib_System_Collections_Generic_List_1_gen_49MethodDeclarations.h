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

// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
struct List_1_t978;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UICharInfo>
struct IEnumerable_1_t3166;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UICharInfo>
struct IEnumerator_1_t3167;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t58;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>
struct ICollection_1_t3168;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>
struct ReadOnlyCollection_1_t2873;
// UnityEngine.UICharInfo[]
struct UICharInfoU5BU5D_t1090;
// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t2877;
// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t2880;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_UICharInfo.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_51.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor()
extern "C" void List_1__ctor_m22800_gshared (List_1_t978 * __this, const MethodInfo* method);
#define List_1__ctor_m22800(__this, method) (( void (*) (List_1_t978 *, const MethodInfo*))List_1__ctor_m22800_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m22801_gshared (List_1_t978 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m22801(__this, ___collection, method) (( void (*) (List_1_t978 *, Object_t*, const MethodInfo*))List_1__ctor_m22801_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m6737_gshared (List_1_t978 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m6737(__this, ___capacity, method) (( void (*) (List_1_t978 *, int32_t, const MethodInfo*))List_1__ctor_m6737_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.cctor()
extern "C" void List_1__cctor_m22802_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m22802(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m22802_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m22803_gshared (List_1_t978 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m22803(__this, method) (( Object_t* (*) (List_1_t978 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m22803_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m22804_gshared (List_1_t978 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m22804(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t978 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m22804_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m22805_gshared (List_1_t978 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m22805(__this, method) (( Object_t * (*) (List_1_t978 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m22805_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m22806_gshared (List_1_t978 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m22806(__this, ___item, method) (( int32_t (*) (List_1_t978 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m22806_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m22807_gshared (List_1_t978 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m22807(__this, ___item, method) (( bool (*) (List_1_t978 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m22807_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m22808_gshared (List_1_t978 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m22808(__this, ___item, method) (( int32_t (*) (List_1_t978 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m22808_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m22809_gshared (List_1_t978 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m22809(__this, ___index, ___item, method) (( void (*) (List_1_t978 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m22809_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m22810_gshared (List_1_t978 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m22810(__this, ___item, method) (( void (*) (List_1_t978 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m22810_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m22811_gshared (List_1_t978 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m22811(__this, method) (( bool (*) (List_1_t978 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m22811_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m22812_gshared (List_1_t978 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m22812(__this, method) (( bool (*) (List_1_t978 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m22812_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m22813_gshared (List_1_t978 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m22813(__this, method) (( Object_t * (*) (List_1_t978 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m22813_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m22814_gshared (List_1_t978 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m22814(__this, method) (( bool (*) (List_1_t978 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m22814_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m22815_gshared (List_1_t978 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m22815(__this, method) (( bool (*) (List_1_t978 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m22815_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m22816_gshared (List_1_t978 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m22816(__this, ___index, method) (( Object_t * (*) (List_1_t978 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m22816_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m22817_gshared (List_1_t978 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m22817(__this, ___index, ___value, method) (( void (*) (List_1_t978 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m22817_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Add(T)
extern "C" void List_1_Add_m22818_gshared (List_1_t978 * __this, UICharInfo_t854  ___item, const MethodInfo* method);
#define List_1_Add_m22818(__this, ___item, method) (( void (*) (List_1_t978 *, UICharInfo_t854 , const MethodInfo*))List_1_Add_m22818_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m22819_gshared (List_1_t978 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m22819(__this, ___newCount, method) (( void (*) (List_1_t978 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m22819_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m22820_gshared (List_1_t978 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m22820(__this, ___collection, method) (( void (*) (List_1_t978 *, Object_t*, const MethodInfo*))List_1_AddCollection_m22820_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m22821_gshared (List_1_t978 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m22821(__this, ___enumerable, method) (( void (*) (List_1_t978 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m22821_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m22822_gshared (List_1_t978 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m22822(__this, ___collection, method) (( void (*) (List_1_t978 *, Object_t*, const MethodInfo*))List_1_AddRange_m22822_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2873 * List_1_AsReadOnly_m22823_gshared (List_1_t978 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m22823(__this, method) (( ReadOnlyCollection_1_t2873 * (*) (List_1_t978 *, const MethodInfo*))List_1_AsReadOnly_m22823_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Clear()
extern "C" void List_1_Clear_m22824_gshared (List_1_t978 * __this, const MethodInfo* method);
#define List_1_Clear_m22824(__this, method) (( void (*) (List_1_t978 *, const MethodInfo*))List_1_Clear_m22824_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Contains(T)
extern "C" bool List_1_Contains_m22825_gshared (List_1_t978 * __this, UICharInfo_t854  ___item, const MethodInfo* method);
#define List_1_Contains_m22825(__this, ___item, method) (( bool (*) (List_1_t978 *, UICharInfo_t854 , const MethodInfo*))List_1_Contains_m22825_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m22826_gshared (List_1_t978 * __this, UICharInfoU5BU5D_t1090* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m22826(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t978 *, UICharInfoU5BU5D_t1090*, int32_t, const MethodInfo*))List_1_CopyTo_m22826_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Find(System.Predicate`1<T>)
extern "C" UICharInfo_t854  List_1_Find_m22827_gshared (List_1_t978 * __this, Predicate_1_t2877 * ___match, const MethodInfo* method);
#define List_1_Find_m22827(__this, ___match, method) (( UICharInfo_t854  (*) (List_1_t978 *, Predicate_1_t2877 *, const MethodInfo*))List_1_Find_m22827_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m22828_gshared (Object_t * __this /* static, unused */, Predicate_1_t2877 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m22828(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2877 *, const MethodInfo*))List_1_CheckMatch_m22828_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m22829_gshared (List_1_t978 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2877 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m22829(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t978 *, int32_t, int32_t, Predicate_1_t2877 *, const MethodInfo*))List_1_GetIndex_m22829_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetEnumerator()
extern "C" Enumerator_t2872  List_1_GetEnumerator_m22830_gshared (List_1_t978 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m22830(__this, method) (( Enumerator_t2872  (*) (List_1_t978 *, const MethodInfo*))List_1_GetEnumerator_m22830_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m22831_gshared (List_1_t978 * __this, UICharInfo_t854  ___item, const MethodInfo* method);
#define List_1_IndexOf_m22831(__this, ___item, method) (( int32_t (*) (List_1_t978 *, UICharInfo_t854 , const MethodInfo*))List_1_IndexOf_m22831_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m22832_gshared (List_1_t978 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m22832(__this, ___start, ___delta, method) (( void (*) (List_1_t978 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m22832_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m22833_gshared (List_1_t978 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m22833(__this, ___index, method) (( void (*) (List_1_t978 *, int32_t, const MethodInfo*))List_1_CheckIndex_m22833_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m22834_gshared (List_1_t978 * __this, int32_t ___index, UICharInfo_t854  ___item, const MethodInfo* method);
#define List_1_Insert_m22834(__this, ___index, ___item, method) (( void (*) (List_1_t978 *, int32_t, UICharInfo_t854 , const MethodInfo*))List_1_Insert_m22834_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m22835_gshared (List_1_t978 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m22835(__this, ___collection, method) (( void (*) (List_1_t978 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m22835_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Remove(T)
extern "C" bool List_1_Remove_m22836_gshared (List_1_t978 * __this, UICharInfo_t854  ___item, const MethodInfo* method);
#define List_1_Remove_m22836(__this, ___item, method) (( bool (*) (List_1_t978 *, UICharInfo_t854 , const MethodInfo*))List_1_Remove_m22836_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m22837_gshared (List_1_t978 * __this, Predicate_1_t2877 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m22837(__this, ___match, method) (( int32_t (*) (List_1_t978 *, Predicate_1_t2877 *, const MethodInfo*))List_1_RemoveAll_m22837_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m22838_gshared (List_1_t978 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m22838(__this, ___index, method) (( void (*) (List_1_t978 *, int32_t, const MethodInfo*))List_1_RemoveAt_m22838_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Reverse()
extern "C" void List_1_Reverse_m22839_gshared (List_1_t978 * __this, const MethodInfo* method);
#define List_1_Reverse_m22839(__this, method) (( void (*) (List_1_t978 *, const MethodInfo*))List_1_Reverse_m22839_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort()
extern "C" void List_1_Sort_m22840_gshared (List_1_t978 * __this, const MethodInfo* method);
#define List_1_Sort_m22840(__this, method) (( void (*) (List_1_t978 *, const MethodInfo*))List_1_Sort_m22840_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m22841_gshared (List_1_t978 * __this, Comparison_1_t2880 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m22841(__this, ___comparison, method) (( void (*) (List_1_t978 *, Comparison_1_t2880 *, const MethodInfo*))List_1_Sort_m22841_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UICharInfo>::ToArray()
extern "C" UICharInfoU5BU5D_t1090* List_1_ToArray_m22842_gshared (List_1_t978 * __this, const MethodInfo* method);
#define List_1_ToArray_m22842(__this, method) (( UICharInfoU5BU5D_t1090* (*) (List_1_t978 *, const MethodInfo*))List_1_ToArray_m22842_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m22843_gshared (List_1_t978 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m22843(__this, method) (( void (*) (List_1_t978 *, const MethodInfo*))List_1_TrimExcess_m22843_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m22844_gshared (List_1_t978 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m22844(__this, method) (( int32_t (*) (List_1_t978 *, const MethodInfo*))List_1_get_Capacity_m22844_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m22845_gshared (List_1_t978 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m22845(__this, ___value, method) (( void (*) (List_1_t978 *, int32_t, const MethodInfo*))List_1_set_Capacity_m22845_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m22846_gshared (List_1_t978 * __this, const MethodInfo* method);
#define List_1_get_Count_m22846(__this, method) (( int32_t (*) (List_1_t978 *, const MethodInfo*))List_1_get_Count_m22846_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Item(System.Int32)
extern "C" UICharInfo_t854  List_1_get_Item_m22847_gshared (List_1_t978 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m22847(__this, ___index, method) (( UICharInfo_t854  (*) (List_1_t978 *, int32_t, const MethodInfo*))List_1_get_Item_m22847_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m22848_gshared (List_1_t978 * __this, int32_t ___index, UICharInfo_t854  ___value, const MethodInfo* method);
#define List_1_set_Item_m22848(__this, ___index, ___value, method) (( void (*) (List_1_t978 *, int32_t, UICharInfo_t854 , const MethodInfo*))List_1_set_Item_m22848_gshared)(__this, ___index, ___value, method)
