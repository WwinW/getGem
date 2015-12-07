#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t132;
// System.String
struct String_t;

#include "mscorlib_System_ValueType.h"

// System.Collections.Generic.HashSet`1/Enumerator<System.String>
struct  Enumerator_t532 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator<System.String>::hashset
	HashSet_1_t132 * ___hashset_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator<System.String>::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator<System.String>::stamp
	int32_t ___stamp_2;
	// T System.Collections.Generic.HashSet`1/Enumerator<System.String>::current
	String_t* ___current_3;
};
