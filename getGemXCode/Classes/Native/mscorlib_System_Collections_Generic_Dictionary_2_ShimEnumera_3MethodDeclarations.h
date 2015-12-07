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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t2463;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2451;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m17053_gshared (ShimEnumerator_t2463 * __this, Dictionary_2_t2451 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m17053(__this, ___host, method) (( void (*) (ShimEnumerator_t2463 *, Dictionary_2_t2451 *, const MethodInfo*))ShimEnumerator__ctor_m17053_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m17054_gshared (ShimEnumerator_t2463 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m17054(__this, method) (( bool (*) (ShimEnumerator_t2463 *, const MethodInfo*))ShimEnumerator_MoveNext_m17054_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t111  ShimEnumerator_get_Entry_m17055_gshared (ShimEnumerator_t2463 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m17055(__this, method) (( DictionaryEntry_t111  (*) (ShimEnumerator_t2463 *, const MethodInfo*))ShimEnumerator_get_Entry_m17055_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m17056_gshared (ShimEnumerator_t2463 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m17056(__this, method) (( Object_t * (*) (ShimEnumerator_t2463 *, const MethodInfo*))ShimEnumerator_get_Key_m17056_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m17057_gshared (ShimEnumerator_t2463 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m17057(__this, method) (( Object_t * (*) (ShimEnumerator_t2463 *, const MethodInfo*))ShimEnumerator_get_Value_m17057_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m17058_gshared (ShimEnumerator_t2463 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m17058(__this, method) (( Object_t * (*) (ShimEnumerator_t2463 *, const MethodInfo*))ShimEnumerator_get_Current_m17058_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m17059_gshared (ShimEnumerator_t2463 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m17059(__this, method) (( void (*) (ShimEnumerator_t2463 *, const MethodInfo*))ShimEnumerator_Reset_m17059_gshared)(__this, method)
