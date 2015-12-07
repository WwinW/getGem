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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>
struct ShimEnumerator_t2293;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t18;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m14827_gshared (ShimEnumerator_t2293 * __this, Dictionary_2_t18 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m14827(__this, ___host, method) (( void (*) (ShimEnumerator_t2293 *, Dictionary_2_t18 *, const MethodInfo*))ShimEnumerator__ctor_m14827_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m14828_gshared (ShimEnumerator_t2293 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m14828(__this, method) (( bool (*) (ShimEnumerator_t2293 *, const MethodInfo*))ShimEnumerator_MoveNext_m14828_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Entry()
extern "C" DictionaryEntry_t111  ShimEnumerator_get_Entry_m14829_gshared (ShimEnumerator_t2293 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m14829(__this, method) (( DictionaryEntry_t111  (*) (ShimEnumerator_t2293 *, const MethodInfo*))ShimEnumerator_get_Entry_m14829_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m14830_gshared (ShimEnumerator_t2293 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m14830(__this, method) (( Object_t * (*) (ShimEnumerator_t2293 *, const MethodInfo*))ShimEnumerator_get_Key_m14830_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m14831_gshared (ShimEnumerator_t2293 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m14831(__this, method) (( Object_t * (*) (ShimEnumerator_t2293 *, const MethodInfo*))ShimEnumerator_get_Value_m14831_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m14832_gshared (ShimEnumerator_t2293 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m14832(__this, method) (( Object_t * (*) (ShimEnumerator_t2293 *, const MethodInfo*))ShimEnumerator_get_Current_m14832_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::Reset()
extern "C" void ShimEnumerator_Reset_m14833_gshared (ShimEnumerator_t2293 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m14833(__this, method) (( void (*) (ShimEnumerator_t2293 *, const MethodInfo*))ShimEnumerator_Reset_m14833_gshared)(__this, method)
