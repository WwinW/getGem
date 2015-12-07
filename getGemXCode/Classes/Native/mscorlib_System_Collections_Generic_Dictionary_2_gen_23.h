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
// UnityEngine.Event[]
struct EventU5BU5D_t2917;
// UnityEngine.TextEditor/TextEditOp[]
struct TextEditOpU5BU5D_t2918;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Event>
struct IEqualityComparer_1_t2920;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1094;
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>
struct Transform_1_t2919;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>
struct  Dictionary_2_t1062  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::table
	Int32U5BU5D_t167* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::linkSlots
	LinkU5BU5D_t2238* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::keySlots
	EventU5BU5D_t2917* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::valueSlots
	TextEditOpU5BU5D_t2918* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::serialization_info
	SerializationInfo_t1094 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t1062_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::<>f__am$cacheB
	Transform_1_t2919 * ___U3CU3Ef__amU24cacheB_15;
};
