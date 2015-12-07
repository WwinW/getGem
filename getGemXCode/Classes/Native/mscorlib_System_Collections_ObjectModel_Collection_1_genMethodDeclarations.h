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

// System.Collections.ObjectModel.Collection`1<System.Object>
struct Collection_1_t2269;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t58;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t72;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2771;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t2268;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::.ctor()
extern "C" void Collection_1__ctor_m14459_gshared (Collection_1_t2269 * __this, const MethodInfo* method);
#define Collection_1__ctor_m14459(__this, method) (( void (*) (Collection_1_t2269 *, const MethodInfo*))Collection_1__ctor_m14459_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14460_gshared (Collection_1_t2269 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14460(__this, method) (( bool (*) (Collection_1_t2269 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14460_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m14461_gshared (Collection_1_t2269 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m14461(__this, ___array, ___index, method) (( void (*) (Collection_1_t2269 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m14461_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m14462_gshared (Collection_1_t2269 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m14462(__this, method) (( Object_t * (*) (Collection_1_t2269 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m14462_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m14463_gshared (Collection_1_t2269 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m14463(__this, ___value, method) (( int32_t (*) (Collection_1_t2269 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m14463_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m14464_gshared (Collection_1_t2269 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m14464(__this, ___value, method) (( bool (*) (Collection_1_t2269 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m14464_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m14465_gshared (Collection_1_t2269 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m14465(__this, ___value, method) (( int32_t (*) (Collection_1_t2269 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m14465_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m14466_gshared (Collection_1_t2269 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m14466(__this, ___index, ___value, method) (( void (*) (Collection_1_t2269 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m14466_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m14467_gshared (Collection_1_t2269 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m14467(__this, ___value, method) (( void (*) (Collection_1_t2269 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m14467_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m14468_gshared (Collection_1_t2269 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m14468(__this, method) (( bool (*) (Collection_1_t2269 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m14468_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m14469_gshared (Collection_1_t2269 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m14469(__this, method) (( Object_t * (*) (Collection_1_t2269 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m14469_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m14470_gshared (Collection_1_t2269 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m14470(__this, method) (( bool (*) (Collection_1_t2269 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m14470_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m14471_gshared (Collection_1_t2269 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m14471(__this, method) (( bool (*) (Collection_1_t2269 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m14471_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m14472_gshared (Collection_1_t2269 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m14472(__this, ___index, method) (( Object_t * (*) (Collection_1_t2269 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m14472_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m14473_gshared (Collection_1_t2269 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m14473(__this, ___index, ___value, method) (( void (*) (Collection_1_t2269 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m14473_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Add(T)
extern "C" void Collection_1_Add_m14474_gshared (Collection_1_t2269 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Add_m14474(__this, ___item, method) (( void (*) (Collection_1_t2269 *, Object_t *, const MethodInfo*))Collection_1_Add_m14474_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Clear()
extern "C" void Collection_1_Clear_m14475_gshared (Collection_1_t2269 * __this, const MethodInfo* method);
#define Collection_1_Clear_m14475(__this, method) (( void (*) (Collection_1_t2269 *, const MethodInfo*))Collection_1_Clear_m14475_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::ClearItems()
extern "C" void Collection_1_ClearItems_m14476_gshared (Collection_1_t2269 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m14476(__this, method) (( void (*) (Collection_1_t2269 *, const MethodInfo*))Collection_1_ClearItems_m14476_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Contains(T)
extern "C" bool Collection_1_Contains_m14477_gshared (Collection_1_t2269 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Contains_m14477(__this, ___item, method) (( bool (*) (Collection_1_t2269 *, Object_t *, const MethodInfo*))Collection_1_Contains_m14477_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m14478_gshared (Collection_1_t2269 * __this, ObjectU5BU5D_t72* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m14478(__this, ___array, ___index, method) (( void (*) (Collection_1_t2269 *, ObjectU5BU5D_t72*, int32_t, const MethodInfo*))Collection_1_CopyTo_m14478_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m14479_gshared (Collection_1_t2269 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m14479(__this, method) (( Object_t* (*) (Collection_1_t2269 *, const MethodInfo*))Collection_1_GetEnumerator_m14479_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m14480_gshared (Collection_1_t2269 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m14480(__this, ___item, method) (( int32_t (*) (Collection_1_t2269 *, Object_t *, const MethodInfo*))Collection_1_IndexOf_m14480_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m14481_gshared (Collection_1_t2269 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Insert_m14481(__this, ___index, ___item, method) (( void (*) (Collection_1_t2269 *, int32_t, Object_t *, const MethodInfo*))Collection_1_Insert_m14481_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m14482_gshared (Collection_1_t2269 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m14482(__this, ___index, ___item, method) (( void (*) (Collection_1_t2269 *, int32_t, Object_t *, const MethodInfo*))Collection_1_InsertItem_m14482_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Remove(T)
extern "C" bool Collection_1_Remove_m14483_gshared (Collection_1_t2269 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Remove_m14483(__this, ___item, method) (( bool (*) (Collection_1_t2269 *, Object_t *, const MethodInfo*))Collection_1_Remove_m14483_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m14484_gshared (Collection_1_t2269 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m14484(__this, ___index, method) (( void (*) (Collection_1_t2269 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m14484_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m14485_gshared (Collection_1_t2269 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m14485(__this, ___index, method) (( void (*) (Collection_1_t2269 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m14485_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::get_Count()
extern "C" int32_t Collection_1_get_Count_m14486_gshared (Collection_1_t2269 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m14486(__this, method) (( int32_t (*) (Collection_1_t2269 *, const MethodInfo*))Collection_1_get_Count_m14486_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * Collection_1_get_Item_m14487_gshared (Collection_1_t2269 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m14487(__this, ___index, method) (( Object_t * (*) (Collection_1_t2269 *, int32_t, const MethodInfo*))Collection_1_get_Item_m14487_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m14488_gshared (Collection_1_t2269 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_set_Item_m14488(__this, ___index, ___value, method) (( void (*) (Collection_1_t2269 *, int32_t, Object_t *, const MethodInfo*))Collection_1_set_Item_m14488_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m14489_gshared (Collection_1_t2269 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_SetItem_m14489(__this, ___index, ___item, method) (( void (*) (Collection_1_t2269 *, int32_t, Object_t *, const MethodInfo*))Collection_1_SetItem_m14489_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m14490_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m14490(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m14490_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::ConvertItem(System.Object)
extern "C" Object_t * Collection_1_ConvertItem_m14491_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m14491(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m14491_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m14492_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m14492(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m14492_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m14493_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m14493(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m14493_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m14494_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m14494(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m14494_gshared)(__this /* static, unused */, ___list, method)
