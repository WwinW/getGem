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
#include "mscorlib_System_Array_InternalEnumerator_1_gen_4.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m14191_gshared (InternalEnumerator_1_t2253 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m14191(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2253 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m14191_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m14192_gshared (InternalEnumerator_1_t2253 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m14192(__this, method) (( void (*) (InternalEnumerator_1_t2253 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m14192_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14193_gshared (InternalEnumerator_1_t2253 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14193(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2253 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14193_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m14194_gshared (InternalEnumerator_1_t2253 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m14194(__this, method) (( void (*) (InternalEnumerator_1_t2253 *, const MethodInfo*))InternalEnumerator_1_Dispose_m14194_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m14195_gshared (InternalEnumerator_1_t2253 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m14195(__this, method) (( bool (*) (InternalEnumerator_1_t2253 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m14195_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::get_Current()
extern "C" DictionaryEntry_t111  InternalEnumerator_1_get_Current_m14196_gshared (InternalEnumerator_1_t2253 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m14196(__this, method) (( DictionaryEntry_t111  (*) (InternalEnumerator_1_t2253 *, const MethodInfo*))InternalEnumerator_1_get_Current_m14196_gshared)(__this, method)
