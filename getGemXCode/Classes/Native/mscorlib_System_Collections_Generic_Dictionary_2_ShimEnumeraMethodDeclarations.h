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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t2255;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2242;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m14201_gshared (ShimEnumerator_t2255 * __this, Dictionary_2_t2242 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m14201(__this, ___host, method) (( void (*) (ShimEnumerator_t2255 *, Dictionary_2_t2242 *, const MethodInfo*))ShimEnumerator__ctor_m14201_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m14202_gshared (ShimEnumerator_t2255 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m14202(__this, method) (( bool (*) (ShimEnumerator_t2255 *, const MethodInfo*))ShimEnumerator_MoveNext_m14202_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t111  ShimEnumerator_get_Entry_m14203_gshared (ShimEnumerator_t2255 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m14203(__this, method) (( DictionaryEntry_t111  (*) (ShimEnumerator_t2255 *, const MethodInfo*))ShimEnumerator_get_Entry_m14203_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m14204_gshared (ShimEnumerator_t2255 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m14204(__this, method) (( Object_t * (*) (ShimEnumerator_t2255 *, const MethodInfo*))ShimEnumerator_get_Key_m14204_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m14205_gshared (ShimEnumerator_t2255 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m14205(__this, method) (( Object_t * (*) (ShimEnumerator_t2255 *, const MethodInfo*))ShimEnumerator_get_Value_m14205_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m14206_gshared (ShimEnumerator_t2255 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m14206(__this, method) (( Object_t * (*) (ShimEnumerator_t2255 *, const MethodInfo*))ShimEnumerator_get_Current_m14206_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m14207_gshared (ShimEnumerator_t2255 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m14207(__this, method) (( void (*) (ShimEnumerator_t2255 *, const MethodInfo*))ShimEnumerator_Reset_m14207_gshared)(__this, method)
