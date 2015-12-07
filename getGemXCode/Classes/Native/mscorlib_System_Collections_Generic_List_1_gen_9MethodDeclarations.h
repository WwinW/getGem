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

// System.Collections.Generic.List`1<System.Object>
struct List_1_t297;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t877;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2771;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t58;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t3082;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t2233;
// System.Object[]
struct ObjectU5BU5D_t72;
// System.Predicate`1<System.Object>
struct Predicate_1_t2270;
// System.Comparison`1<System.Object>
struct Comparison_1_t568;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_8.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m3167_gshared (List_1_t297 * __this, const MethodInfo* method);
#define List_1__ctor_m3167(__this, method) (( void (*) (List_1_t297 *, const MethodInfo*))List_1__ctor_m3167_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m14380_gshared (List_1_t297 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m14380(__this, ___collection, method) (( void (*) (List_1_t297 *, Object_t*, const MethodInfo*))List_1__ctor_m14380_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m14381_gshared (List_1_t297 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m14381(__this, ___capacity, method) (( void (*) (List_1_t297 *, int32_t, const MethodInfo*))List_1__ctor_m14381_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m14382_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m14382(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m14382_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14383_gshared (List_1_t297 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14383(__this, method) (( Object_t* (*) (List_1_t297 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14383_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m14384_gshared (List_1_t297 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m14384(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t297 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m14384_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m14385_gshared (List_1_t297 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m14385(__this, method) (( Object_t * (*) (List_1_t297 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m14385_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m14386_gshared (List_1_t297 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m14386(__this, ___item, method) (( int32_t (*) (List_1_t297 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m14386_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m14387_gshared (List_1_t297 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m14387(__this, ___item, method) (( bool (*) (List_1_t297 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m14387_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m14388_gshared (List_1_t297 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m14388(__this, ___item, method) (( int32_t (*) (List_1_t297 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m14388_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m14389_gshared (List_1_t297 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m14389(__this, ___index, ___item, method) (( void (*) (List_1_t297 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m14389_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m14390_gshared (List_1_t297 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m14390(__this, ___item, method) (( void (*) (List_1_t297 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m14390_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14391_gshared (List_1_t297 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14391(__this, method) (( bool (*) (List_1_t297 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14391_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m14392_gshared (List_1_t297 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m14392(__this, method) (( bool (*) (List_1_t297 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m14392_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m14393_gshared (List_1_t297 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m14393(__this, method) (( Object_t * (*) (List_1_t297 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m14393_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m14394_gshared (List_1_t297 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m14394(__this, method) (( bool (*) (List_1_t297 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m14394_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m14395_gshared (List_1_t297 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m14395(__this, method) (( bool (*) (List_1_t297 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m14395_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m14396_gshared (List_1_t297 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m14396(__this, ___index, method) (( Object_t * (*) (List_1_t297 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m14396_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m14397_gshared (List_1_t297 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m14397(__this, ___index, ___value, method) (( void (*) (List_1_t297 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m14397_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m14398_gshared (List_1_t297 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m14398(__this, ___item, method) (( void (*) (List_1_t297 *, Object_t *, const MethodInfo*))List_1_Add_m14398_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m14399_gshared (List_1_t297 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m14399(__this, ___newCount, method) (( void (*) (List_1_t297 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m14399_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m14400_gshared (List_1_t297 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m14400(__this, ___collection, method) (( void (*) (List_1_t297 *, Object_t*, const MethodInfo*))List_1_AddCollection_m14400_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m14401_gshared (List_1_t297 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m14401(__this, ___enumerable, method) (( void (*) (List_1_t297 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m14401_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m14402_gshared (List_1_t297 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m14402(__this, ___collection, method) (( void (*) (List_1_t297 *, Object_t*, const MethodInfo*))List_1_AddRange_m14402_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2233 * List_1_AsReadOnly_m14403_gshared (List_1_t297 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m14403(__this, method) (( ReadOnlyCollection_1_t2233 * (*) (List_1_t297 *, const MethodInfo*))List_1_AsReadOnly_m14403_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m14404_gshared (List_1_t297 * __this, const MethodInfo* method);
#define List_1_Clear_m14404(__this, method) (( void (*) (List_1_t297 *, const MethodInfo*))List_1_Clear_m14404_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m14405_gshared (List_1_t297 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m14405(__this, ___item, method) (( bool (*) (List_1_t297 *, Object_t *, const MethodInfo*))List_1_Contains_m14405_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m14406_gshared (List_1_t297 * __this, ObjectU5BU5D_t72* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m14406(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t297 *, ObjectU5BU5D_t72*, int32_t, const MethodInfo*))List_1_CopyTo_m14406_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m14407_gshared (List_1_t297 * __this, Predicate_1_t2270 * ___match, const MethodInfo* method);
#define List_1_Find_m14407(__this, ___match, method) (( Object_t * (*) (List_1_t297 *, Predicate_1_t2270 *, const MethodInfo*))List_1_Find_m14407_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m14408_gshared (Object_t * __this /* static, unused */, Predicate_1_t2270 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m14408(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2270 *, const MethodInfo*))List_1_CheckMatch_m14408_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m14409_gshared (List_1_t297 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2270 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m14409(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t297 *, int32_t, int32_t, Predicate_1_t2270 *, const MethodInfo*))List_1_GetIndex_m14409_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t2267  List_1_GetEnumerator_m14410_gshared (List_1_t297 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m14410(__this, method) (( Enumerator_t2267  (*) (List_1_t297 *, const MethodInfo*))List_1_GetEnumerator_m14410_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m14411_gshared (List_1_t297 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m14411(__this, ___item, method) (( int32_t (*) (List_1_t297 *, Object_t *, const MethodInfo*))List_1_IndexOf_m14411_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m14412_gshared (List_1_t297 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m14412(__this, ___start, ___delta, method) (( void (*) (List_1_t297 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m14412_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m14413_gshared (List_1_t297 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m14413(__this, ___index, method) (( void (*) (List_1_t297 *, int32_t, const MethodInfo*))List_1_CheckIndex_m14413_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m14414_gshared (List_1_t297 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m14414(__this, ___index, ___item, method) (( void (*) (List_1_t297 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m14414_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m14415_gshared (List_1_t297 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m14415(__this, ___collection, method) (( void (*) (List_1_t297 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m14415_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m14416_gshared (List_1_t297 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m14416(__this, ___item, method) (( bool (*) (List_1_t297 *, Object_t *, const MethodInfo*))List_1_Remove_m14416_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m14417_gshared (List_1_t297 * __this, Predicate_1_t2270 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m14417(__this, ___match, method) (( int32_t (*) (List_1_t297 *, Predicate_1_t2270 *, const MethodInfo*))List_1_RemoveAll_m14417_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m14418_gshared (List_1_t297 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m14418(__this, ___index, method) (( void (*) (List_1_t297 *, int32_t, const MethodInfo*))List_1_RemoveAt_m14418_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m14419_gshared (List_1_t297 * __this, const MethodInfo* method);
#define List_1_Reverse_m14419(__this, method) (( void (*) (List_1_t297 *, const MethodInfo*))List_1_Reverse_m14419_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m14420_gshared (List_1_t297 * __this, const MethodInfo* method);
#define List_1_Sort_m14420(__this, method) (( void (*) (List_1_t297 *, const MethodInfo*))List_1_Sort_m14420_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m14421_gshared (List_1_t297 * __this, Comparison_1_t568 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m14421(__this, ___comparison, method) (( void (*) (List_1_t297 *, Comparison_1_t568 *, const MethodInfo*))List_1_Sort_m14421_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t72* List_1_ToArray_m14422_gshared (List_1_t297 * __this, const MethodInfo* method);
#define List_1_ToArray_m14422(__this, method) (( ObjectU5BU5D_t72* (*) (List_1_t297 *, const MethodInfo*))List_1_ToArray_m14422_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m14423_gshared (List_1_t297 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m14423(__this, method) (( void (*) (List_1_t297 *, const MethodInfo*))List_1_TrimExcess_m14423_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m14424_gshared (List_1_t297 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m14424(__this, method) (( int32_t (*) (List_1_t297 *, const MethodInfo*))List_1_get_Capacity_m14424_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m14425_gshared (List_1_t297 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m14425(__this, ___value, method) (( void (*) (List_1_t297 *, int32_t, const MethodInfo*))List_1_set_Capacity_m14425_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m14426_gshared (List_1_t297 * __this, const MethodInfo* method);
#define List_1_get_Count_m14426(__this, method) (( int32_t (*) (List_1_t297 *, const MethodInfo*))List_1_get_Count_m14426_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m14427_gshared (List_1_t297 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m14427(__this, ___index, method) (( Object_t * (*) (List_1_t297 *, int32_t, const MethodInfo*))List_1_get_Item_m14427_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m14428_gshared (List_1_t297 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m14428(__this, ___index, ___value, method) (( void (*) (List_1_t297 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m14428_gshared)(__this, ___index, ___value, method)
