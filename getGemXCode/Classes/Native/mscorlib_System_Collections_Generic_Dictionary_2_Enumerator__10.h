#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>
struct Dictionary_2_t2361;

#include "mscorlib_System_ValueType.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.IntPtr,System.Object>
struct  Enumerator_t2368 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.IntPtr,System.Object>::dictionary
	Dictionary_2_t2361 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator<System.IntPtr,System.Object>::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator<System.IntPtr,System.Object>::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.IntPtr,System.Object>::current
	KeyValuePair_2_t2363  ___current_3;
};
