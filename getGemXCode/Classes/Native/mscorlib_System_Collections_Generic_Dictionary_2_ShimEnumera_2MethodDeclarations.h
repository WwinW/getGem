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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.IntPtr,System.Object>
struct ShimEnumerator_t2374;
// System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>
struct Dictionary_2_t2361;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.IntPtr,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m15894_gshared (ShimEnumerator_t2374 * __this, Dictionary_2_t2361 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m15894(__this, ___host, method) (( void (*) (ShimEnumerator_t2374 *, Dictionary_2_t2361 *, const MethodInfo*))ShimEnumerator__ctor_m15894_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.IntPtr,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m15895_gshared (ShimEnumerator_t2374 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m15895(__this, method) (( bool (*) (ShimEnumerator_t2374 *, const MethodInfo*))ShimEnumerator_MoveNext_m15895_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.IntPtr,System.Object>::get_Entry()
extern "C" DictionaryEntry_t111  ShimEnumerator_get_Entry_m15896_gshared (ShimEnumerator_t2374 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m15896(__this, method) (( DictionaryEntry_t111  (*) (ShimEnumerator_t2374 *, const MethodInfo*))ShimEnumerator_get_Entry_m15896_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.IntPtr,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m15897_gshared (ShimEnumerator_t2374 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m15897(__this, method) (( Object_t * (*) (ShimEnumerator_t2374 *, const MethodInfo*))ShimEnumerator_get_Key_m15897_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.IntPtr,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m15898_gshared (ShimEnumerator_t2374 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m15898(__this, method) (( Object_t * (*) (ShimEnumerator_t2374 *, const MethodInfo*))ShimEnumerator_get_Value_m15898_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.IntPtr,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m15899_gshared (ShimEnumerator_t2374 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m15899(__this, method) (( Object_t * (*) (ShimEnumerator_t2374 *, const MethodInfo*))ShimEnumerator_get_Current_m15899_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.IntPtr,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m15900_gshared (ShimEnumerator_t2374 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m15900(__this, method) (( void (*) (ShimEnumerator_t2374 *, const MethodInfo*))ShimEnumerator_Reset_m15900_gshared)(__this, method)
