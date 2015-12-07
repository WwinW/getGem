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

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t2233;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t2268;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t58;
// System.Object[]
struct ObjectU5BU5D_t72;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2771;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::.ctor(System.Collections.Generic.IList`1<T>)
extern "C" void ReadOnlyCollection_1__ctor_m14429_gshared (ReadOnlyCollection_1_t2233 * __this, Object_t* ___list, const MethodInfo* method);
#define ReadOnlyCollection_1__ctor_m14429(__this, ___list, method) (( void (*) (ReadOnlyCollection_1_t2233 *, Object_t*, const MethodInfo*))ReadOnlyCollection_1__ctor_m14429_gshared)(__this, ___list, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m14430_gshared (ReadOnlyCollection_1_t2233 * __this, Object_t * ___item, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m14430(__this, ___item, method) (( void (*) (ReadOnlyCollection_1_t2233 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m14430_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.ICollection<T>.Clear()
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m14431_gshared (ReadOnlyCollection_1_t2233 * __this, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m14431(__this, method) (( void (*) (ReadOnlyCollection_1_t2233 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m14431_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m14432_gshared (ReadOnlyCollection_1_t2233 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m14432(__this, ___index, ___item, method) (( void (*) (ReadOnlyCollection_1_t2233 *, int32_t, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m14432_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.ICollection<T>.Remove(T)
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m14433_gshared (ReadOnlyCollection_1_t2233 * __this, Object_t * ___item, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m14433(__this, ___item, method) (( bool (*) (ReadOnlyCollection_1_t2233 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m14433_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m14434_gshared (ReadOnlyCollection_1_t2233 * __this, int32_t ___index, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m14434(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t2233 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m14434_gshared)(__this, ___index, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m14435_gshared (ReadOnlyCollection_1_t2233 * __this, int32_t ___index, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m14435(__this, ___index, method) (( Object_t * (*) (ReadOnlyCollection_1_t2233 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m14435_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m14436_gshared (ReadOnlyCollection_1_t2233 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m14436(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t2233 *, int32_t, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m14436_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14437_gshared (ReadOnlyCollection_1_t2233 * __this, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14437(__this, method) (( bool (*) (ReadOnlyCollection_1_t2233 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14437_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m14438_gshared (ReadOnlyCollection_1_t2233 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m14438(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t2233 *, Array_t *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m14438_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m14439_gshared (ReadOnlyCollection_1_t2233 * __this, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m14439(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t2233 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m14439_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_Add_m14440_gshared (ReadOnlyCollection_1_t2233 * __this, Object_t * ___value, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_Add_m14440(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t2233 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Add_m14440_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Clear()
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Clear_m14441_gshared (ReadOnlyCollection_1_t2233 * __this, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_Clear_m14441(__this, method) (( void (*) (ReadOnlyCollection_1_t2233 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Clear_m14441_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_Contains_m14442_gshared (ReadOnlyCollection_1_t2233 * __this, Object_t * ___value, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_Contains_m14442(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t2233 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Contains_m14442_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m14443_gshared (ReadOnlyCollection_1_t2233 * __this, Object_t * ___value, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_IndexOf_m14443(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t2233 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_IndexOf_m14443_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Insert_m14444_gshared (ReadOnlyCollection_1_t2233 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_Insert_m14444(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t2233 *, int32_t, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Insert_m14444_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Remove_m14445_gshared (ReadOnlyCollection_1_t2233 * __this, Object_t * ___value, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_Remove_m14445(__this, ___value, method) (( void (*) (ReadOnlyCollection_1_t2233 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Remove_m14445_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.RemoveAt(System.Int32)
extern "C" void ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m14446_gshared (ReadOnlyCollection_1_t2233 * __this, int32_t ___index, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m14446(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t2233 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m14446_gshared)(__this, ___index, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m14447_gshared (ReadOnlyCollection_1_t2233 * __this, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m14447(__this, method) (( bool (*) (ReadOnlyCollection_1_t2233 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m14447_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m14448_gshared (ReadOnlyCollection_1_t2233 * __this, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m14448(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t2233 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m14448_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m14449_gshared (ReadOnlyCollection_1_t2233 * __this, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m14449(__this, method) (( bool (*) (ReadOnlyCollection_1_t2233 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m14449_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m14450_gshared (ReadOnlyCollection_1_t2233 * __this, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m14450(__this, method) (( bool (*) (ReadOnlyCollection_1_t2233 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m14450_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IList_get_Item_m14451_gshared (ReadOnlyCollection_1_t2233 * __this, int32_t ___index, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_get_Item_m14451(__this, ___index, method) (( Object_t * (*) (ReadOnlyCollection_1_t2233 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_Item_m14451_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void ReadOnlyCollection_1_System_Collections_IList_set_Item_m14452_gshared (ReadOnlyCollection_1_t2233 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_set_Item_m14452(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t2233 *, int32_t, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_set_Item_m14452_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::Contains(T)
extern "C" bool ReadOnlyCollection_1_Contains_m14453_gshared (ReadOnlyCollection_1_t2233 * __this, Object_t * ___value, const MethodInfo* method);
#define ReadOnlyCollection_1_Contains_m14453(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t2233 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_Contains_m14453_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void ReadOnlyCollection_1_CopyTo_m14454_gshared (ReadOnlyCollection_1_t2233 * __this, ObjectU5BU5D_t72* ___array, int32_t ___index, const MethodInfo* method);
#define ReadOnlyCollection_1_CopyTo_m14454(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t2233 *, ObjectU5BU5D_t72*, int32_t, const MethodInfo*))ReadOnlyCollection_1_CopyTo_m14454_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::GetEnumerator()
extern "C" Object_t* ReadOnlyCollection_1_GetEnumerator_m14455_gshared (ReadOnlyCollection_1_t2233 * __this, const MethodInfo* method);
#define ReadOnlyCollection_1_GetEnumerator_m14455(__this, method) (( Object_t* (*) (ReadOnlyCollection_1_t2233 *, const MethodInfo*))ReadOnlyCollection_1_GetEnumerator_m14455_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::IndexOf(T)
extern "C" int32_t ReadOnlyCollection_1_IndexOf_m14456_gshared (ReadOnlyCollection_1_t2233 * __this, Object_t * ___value, const MethodInfo* method);
#define ReadOnlyCollection_1_IndexOf_m14456(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t2233 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_IndexOf_m14456_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::get_Count()
extern "C" int32_t ReadOnlyCollection_1_get_Count_m14457_gshared (ReadOnlyCollection_1_t2233 * __this, const MethodInfo* method);
#define ReadOnlyCollection_1_get_Count_m14457(__this, method) (( int32_t (*) (ReadOnlyCollection_1_t2233 *, const MethodInfo*))ReadOnlyCollection_1_get_Count_m14457_gshared)(__this, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * ReadOnlyCollection_1_get_Item_m14458_gshared (ReadOnlyCollection_1_t2233 * __this, int32_t ___index, const MethodInfo* method);
#define ReadOnlyCollection_1_get_Item_m14458(__this, ___index, method) (( Object_t * (*) (ReadOnlyCollection_1_t2233 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_get_Item_m14458_gshared)(__this, ___index, method)
