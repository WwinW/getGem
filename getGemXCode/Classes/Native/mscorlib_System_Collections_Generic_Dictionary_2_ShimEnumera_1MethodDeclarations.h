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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t2328;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2316;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m15332_gshared (ShimEnumerator_t2328 * __this, Dictionary_2_t2316 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m15332(__this, ___host, method) (( void (*) (ShimEnumerator_t2328 *, Dictionary_2_t2316 *, const MethodInfo*))ShimEnumerator__ctor_m15332_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m15333_gshared (ShimEnumerator_t2328 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m15333(__this, method) (( bool (*) (ShimEnumerator_t2328 *, const MethodInfo*))ShimEnumerator_MoveNext_m15333_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t111  ShimEnumerator_get_Entry_m15334_gshared (ShimEnumerator_t2328 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m15334(__this, method) (( DictionaryEntry_t111  (*) (ShimEnumerator_t2328 *, const MethodInfo*))ShimEnumerator_get_Entry_m15334_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m15335_gshared (ShimEnumerator_t2328 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m15335(__this, method) (( Object_t * (*) (ShimEnumerator_t2328 *, const MethodInfo*))ShimEnumerator_get_Key_m15335_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m15336_gshared (ShimEnumerator_t2328 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m15336(__this, method) (( Object_t * (*) (ShimEnumerator_t2328 *, const MethodInfo*))ShimEnumerator_get_Value_m15336_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m15337_gshared (ShimEnumerator_t2328 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m15337(__this, method) (( Object_t * (*) (ShimEnumerator_t2328 *, const MethodInfo*))ShimEnumerator_get_Current_m15337_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::Reset()
extern "C" void ShimEnumerator_Reset_m15338_gshared (ShimEnumerator_t2328 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m15338(__this, method) (( void (*) (ShimEnumerator_t2328 *, const MethodInfo*))ShimEnumerator_Reset_m15338_gshared)(__this, method)
