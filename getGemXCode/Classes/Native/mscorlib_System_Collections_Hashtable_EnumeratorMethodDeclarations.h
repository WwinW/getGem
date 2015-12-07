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

// System.Collections.Hashtable/Enumerator
struct Enumerator_t1622;
// System.Collections.Hashtable
struct Hashtable_t46;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Hashtable_EnumeratorMode.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Hashtable/Enumerator::.ctor(System.Collections.Hashtable,System.Collections.Hashtable/EnumeratorMode)
extern "C" void Enumerator__ctor_m10391 (Enumerator_t1622 * __this, Hashtable_t46 * ___host, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/Enumerator::.cctor()
extern "C" void Enumerator__cctor_m10392 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/Enumerator::FailFast()
extern "C" void Enumerator_FailFast_m10393 (Enumerator_t1622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/Enumerator::Reset()
extern "C" void Enumerator_Reset_m10394 (Enumerator_t1622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable/Enumerator::MoveNext()
extern "C" bool Enumerator_MoveNext_m10395 (Enumerator_t1622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Collections.Hashtable/Enumerator::get_Entry()
extern "C" DictionaryEntry_t111  Enumerator_get_Entry_m10396 (Enumerator_t1622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable/Enumerator::get_Key()
extern "C" Object_t * Enumerator_get_Key_m10397 (Enumerator_t1622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable/Enumerator::get_Value()
extern "C" Object_t * Enumerator_get_Value_m10398 (Enumerator_t1622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable/Enumerator::get_Current()
extern "C" Object_t * Enumerator_get_Current_m10399 (Enumerator_t1622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
