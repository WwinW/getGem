﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t167;
// System.Collections.Generic.HashSet`1/Link<System.String>[]
struct LinkU5BU5D_t2347;
// System.String[]
struct StringU5BU5D_t76;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t2241;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1094;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.HashSet`1<System.String>
struct  HashSet_1_t132  : public Object_t
{
	// System.Int32[] System.Collections.Generic.HashSet`1<System.String>::table
	Int32U5BU5D_t167* ___table_0;
	// System.Collections.Generic.HashSet`1/Link<T>[] System.Collections.Generic.HashSet`1<System.String>::links
	LinkU5BU5D_t2347* ___links_1;
	// T[] System.Collections.Generic.HashSet`1<System.String>::slots
	StringU5BU5D_t76* ___slots_2;
	// System.Int32 System.Collections.Generic.HashSet`1<System.String>::touched
	int32_t ___touched_3;
	// System.Int32 System.Collections.Generic.HashSet`1<System.String>::empty_slot
	int32_t ___empty_slot_4;
	// System.Int32 System.Collections.Generic.HashSet`1<System.String>::count
	int32_t ___count_5;
	// System.Int32 System.Collections.Generic.HashSet`1<System.String>::threshold
	int32_t ___threshold_6;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1<System.String>::comparer
	Object_t* ___comparer_7;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1<System.String>::si
	SerializationInfo_t1094 * ___si_8;
	// System.Int32 System.Collections.Generic.HashSet`1<System.String>::generation
	int32_t ___generation_9;
};
