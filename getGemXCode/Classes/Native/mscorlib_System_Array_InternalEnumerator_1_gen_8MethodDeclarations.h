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

// System.Array
struct Array_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array_InternalEnumerator_1_gen_8.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m14739_gshared (InternalEnumerator_1_t2283 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m14739(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2283 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m14739_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m14740_gshared (InternalEnumerator_1_t2283 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m14740(__this, method) (( void (*) (InternalEnumerator_1_t2283 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m14740_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14741_gshared (InternalEnumerator_1_t2283 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14741(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2283 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14741_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m14742_gshared (InternalEnumerator_1_t2283 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m14742(__this, method) (( void (*) (InternalEnumerator_1_t2283 *, const MethodInfo*))InternalEnumerator_1_Dispose_m14742_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m14743_gshared (InternalEnumerator_1_t2283 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m14743(__this, method) (( bool (*) (InternalEnumerator_1_t2283 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m14743_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::get_Current()
extern "C" KeyValuePair_2_t2282  InternalEnumerator_1_get_Current_m14744_gshared (InternalEnumerator_1_t2283 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m14744(__this, method) (( KeyValuePair_2_t2282  (*) (InternalEnumerator_1_t2283 *, const MethodInfo*))InternalEnumerator_1_get_Current_m14744_gshared)(__this, method)
