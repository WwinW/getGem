#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t167;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t2238;
// System.IntPtr[]
struct IntPtrU5BU5D_t1086;
// System.Object[]
struct ObjectU5BU5D_t72;
// System.Collections.Generic.IEqualityComparer`1<System.IntPtr>
struct IEqualityComparer_1_t2360;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1094;
// System.Collections.Generic.Dictionary`2/Transform`1<System.IntPtr,System.Object,System.Collections.DictionaryEntry>
struct Transform_1_t2362;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>
struct  Dictionary_2_t2361  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::table
	Int32U5BU5D_t167* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::linkSlots
	LinkU5BU5D_t2238* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::keySlots
	IntPtrU5BU5D_t1086* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::valueSlots
	ObjectU5BU5D_t72* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::serialization_info
	SerializationInfo_t1094 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t2361_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::<>f__am$cacheB
	Transform_1_t2362 * ___U3CU3Ef__amU24cacheB_15;
};
