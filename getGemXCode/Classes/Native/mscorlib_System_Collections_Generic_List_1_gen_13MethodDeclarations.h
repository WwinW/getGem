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

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t333;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t3108;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t3090;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t58;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t3109;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>
struct ReadOnlyCollection_1_t2469;
// System.Int32[]
struct Int32U5BU5D_t167;
// System.Predicate`1<System.Int32>
struct Predicate_1_t2472;
// System.Comparison`1<System.Int32>
struct Comparison_1_t2476;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_18.h"

// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C" void List_1__ctor_m3230_gshared (List_1_t333 * __this, const MethodInfo* method);
#define List_1__ctor_m3230(__this, method) (( void (*) (List_1_t333 *, const MethodInfo*))List_1__ctor_m3230_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m17112_gshared (List_1_t333 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m17112(__this, ___collection, method) (( void (*) (List_1_t333 *, Object_t*, const MethodInfo*))List_1__ctor_m17112_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m17113_gshared (List_1_t333 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m17113(__this, ___capacity, method) (( void (*) (List_1_t333 *, int32_t, const MethodInfo*))List_1__ctor_m17113_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.cctor()
extern "C" void List_1__cctor_m17114_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m17114(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m17114_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17115_gshared (List_1_t333 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17115(__this, method) (( Object_t* (*) (List_1_t333 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17115_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m17116_gshared (List_1_t333 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m17116(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t333 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m17116_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m17117_gshared (List_1_t333 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m17117(__this, method) (( Object_t * (*) (List_1_t333 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m17117_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m17118_gshared (List_1_t333 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m17118(__this, ___item, method) (( int32_t (*) (List_1_t333 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m17118_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m17119_gshared (List_1_t333 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m17119(__this, ___item, method) (( bool (*) (List_1_t333 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m17119_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m17120_gshared (List_1_t333 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m17120(__this, ___item, method) (( int32_t (*) (List_1_t333 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m17120_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m17121_gshared (List_1_t333 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m17121(__this, ___index, ___item, method) (( void (*) (List_1_t333 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m17121_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m17122_gshared (List_1_t333 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m17122(__this, ___item, method) (( void (*) (List_1_t333 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m17122_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17123_gshared (List_1_t333 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17123(__this, method) (( bool (*) (List_1_t333 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17123_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m17124_gshared (List_1_t333 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m17124(__this, method) (( bool (*) (List_1_t333 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m17124_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m17125_gshared (List_1_t333 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m17125(__this, method) (( Object_t * (*) (List_1_t333 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m17125_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m17126_gshared (List_1_t333 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m17126(__this, method) (( bool (*) (List_1_t333 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m17126_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m17127_gshared (List_1_t333 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m17127(__this, method) (( bool (*) (List_1_t333 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m17127_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m17128_gshared (List_1_t333 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m17128(__this, ___index, method) (( Object_t * (*) (List_1_t333 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m17128_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m17129_gshared (List_1_t333 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m17129(__this, ___index, ___value, method) (( void (*) (List_1_t333 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m17129_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
extern "C" void List_1_Add_m17130_gshared (List_1_t333 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Add_m17130(__this, ___item, method) (( void (*) (List_1_t333 *, int32_t, const MethodInfo*))List_1_Add_m17130_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m17131_gshared (List_1_t333 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m17131(__this, ___newCount, method) (( void (*) (List_1_t333 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m17131_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m17132_gshared (List_1_t333 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m17132(__this, ___collection, method) (( void (*) (List_1_t333 *, Object_t*, const MethodInfo*))List_1_AddCollection_m17132_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m17133_gshared (List_1_t333 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m17133(__this, ___enumerable, method) (( void (*) (List_1_t333 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m17133_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m5474_gshared (List_1_t333 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m5474(__this, ___collection, method) (( void (*) (List_1_t333 *, Object_t*, const MethodInfo*))List_1_AddRange_m5474_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Int32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2469 * List_1_AsReadOnly_m17134_gshared (List_1_t333 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m17134(__this, method) (( ReadOnlyCollection_1_t2469 * (*) (List_1_t333 *, const MethodInfo*))List_1_AsReadOnly_m17134_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
extern "C" void List_1_Clear_m17135_gshared (List_1_t333 * __this, const MethodInfo* method);
#define List_1_Clear_m17135(__this, method) (( void (*) (List_1_t333 *, const MethodInfo*))List_1_Clear_m17135_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T)
extern "C" bool List_1_Contains_m17136_gshared (List_1_t333 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Contains_m17136(__this, ___item, method) (( bool (*) (List_1_t333 *, int32_t, const MethodInfo*))List_1_Contains_m17136_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m17137_gshared (List_1_t333 * __this, Int32U5BU5D_t167* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m17137(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t333 *, Int32U5BU5D_t167*, int32_t, const MethodInfo*))List_1_CopyTo_m17137_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Int32>::Find(System.Predicate`1<T>)
extern "C" int32_t List_1_Find_m17138_gshared (List_1_t333 * __this, Predicate_1_t2472 * ___match, const MethodInfo* method);
#define List_1_Find_m17138(__this, ___match, method) (( int32_t (*) (List_1_t333 *, Predicate_1_t2472 *, const MethodInfo*))List_1_Find_m17138_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m17139_gshared (Object_t * __this /* static, unused */, Predicate_1_t2472 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m17139(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2472 *, const MethodInfo*))List_1_CheckMatch_m17139_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m17140_gshared (List_1_t333 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2472 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m17140(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t333 *, int32_t, int32_t, Predicate_1_t2472 *, const MethodInfo*))List_1_GetIndex_m17140_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t2468  List_1_GetEnumerator_m17141_gshared (List_1_t333 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m17141(__this, method) (( Enumerator_t2468  (*) (List_1_t333 *, const MethodInfo*))List_1_GetEnumerator_m17141_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m17142_gshared (List_1_t333 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m17142(__this, ___item, method) (( int32_t (*) (List_1_t333 *, int32_t, const MethodInfo*))List_1_IndexOf_m17142_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m17143_gshared (List_1_t333 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m17143(__this, ___start, ___delta, method) (( void (*) (List_1_t333 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m17143_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m17144_gshared (List_1_t333 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m17144(__this, ___index, method) (( void (*) (List_1_t333 *, int32_t, const MethodInfo*))List_1_CheckIndex_m17144_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m17145_gshared (List_1_t333 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define List_1_Insert_m17145(__this, ___index, ___item, method) (( void (*) (List_1_t333 *, int32_t, int32_t, const MethodInfo*))List_1_Insert_m17145_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m17146_gshared (List_1_t333 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m17146(__this, ___collection, method) (( void (*) (List_1_t333 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m17146_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(T)
extern "C" bool List_1_Remove_m17147_gshared (List_1_t333 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Remove_m17147(__this, ___item, method) (( bool (*) (List_1_t333 *, int32_t, const MethodInfo*))List_1_Remove_m17147_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m17148_gshared (List_1_t333 * __this, Predicate_1_t2472 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m17148(__this, ___match, method) (( int32_t (*) (List_1_t333 *, Predicate_1_t2472 *, const MethodInfo*))List_1_RemoveAll_m17148_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m17149_gshared (List_1_t333 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m17149(__this, ___index, method) (( void (*) (List_1_t333 *, int32_t, const MethodInfo*))List_1_RemoveAt_m17149_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Reverse()
extern "C" void List_1_Reverse_m17150_gshared (List_1_t333 * __this, const MethodInfo* method);
#define List_1_Reverse_m17150(__this, method) (( void (*) (List_1_t333 *, const MethodInfo*))List_1_Reverse_m17150_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort()
extern "C" void List_1_Sort_m17151_gshared (List_1_t333 * __this, const MethodInfo* method);
#define List_1_Sort_m17151(__this, method) (( void (*) (List_1_t333 *, const MethodInfo*))List_1_Sort_m17151_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m17152_gshared (List_1_t333 * __this, Comparison_1_t2476 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m17152(__this, ___comparison, method) (( void (*) (List_1_t333 *, Comparison_1_t2476 *, const MethodInfo*))List_1_Sort_m17152_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
extern "C" Int32U5BU5D_t167* List_1_ToArray_m17153_gshared (List_1_t333 * __this, const MethodInfo* method);
#define List_1_ToArray_m17153(__this, method) (( Int32U5BU5D_t167* (*) (List_1_t333 *, const MethodInfo*))List_1_ToArray_m17153_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::TrimExcess()
extern "C" void List_1_TrimExcess_m17154_gshared (List_1_t333 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m17154(__this, method) (( void (*) (List_1_t333 *, const MethodInfo*))List_1_TrimExcess_m17154_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m17155_gshared (List_1_t333 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m17155(__this, method) (( int32_t (*) (List_1_t333 *, const MethodInfo*))List_1_get_Capacity_m17155_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m17156_gshared (List_1_t333 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m17156(__this, ___value, method) (( void (*) (List_1_t333 *, int32_t, const MethodInfo*))List_1_set_Capacity_m17156_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C" int32_t List_1_get_Count_m17157_gshared (List_1_t333 * __this, const MethodInfo* method);
#define List_1_get_Count_m17157(__this, method) (( int32_t (*) (List_1_t333 *, const MethodInfo*))List_1_get_Count_m17157_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t List_1_get_Item_m17158_gshared (List_1_t333 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m17158(__this, ___index, method) (( int32_t (*) (List_1_t333 *, int32_t, const MethodInfo*))List_1_get_Item_m17158_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m17159_gshared (List_1_t333 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method);
#define List_1_set_Item_m17159(__this, ___index, ___value, method) (( void (*) (List_1_t333 *, int32_t, int32_t, const MethodInfo*))List_1_set_Item_m17159_gshared)(__this, ___index, ___value, method)
