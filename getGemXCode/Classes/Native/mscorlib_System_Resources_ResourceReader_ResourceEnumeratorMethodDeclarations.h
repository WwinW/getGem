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

// System.Resources.ResourceReader/ResourceEnumerator
struct ResourceEnumerator_t1785;
// System.Resources.ResourceReader
struct ResourceReader_t1786;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Resources.ResourceReader/ResourceEnumerator::.ctor(System.Resources.ResourceReader)
extern "C" void ResourceEnumerator__ctor_m11643 (ResourceEnumerator_t1785 * __this, ResourceReader_t1786 * ___readerToEnumerate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Resources.ResourceReader/ResourceEnumerator::get_Entry()
extern "C" DictionaryEntry_t111  ResourceEnumerator_get_Entry_m11644 (ResourceEnumerator_t1785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Resources.ResourceReader/ResourceEnumerator::get_Key()
extern "C" Object_t * ResourceEnumerator_get_Key_m11645 (ResourceEnumerator_t1785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Resources.ResourceReader/ResourceEnumerator::get_Value()
extern "C" Object_t * ResourceEnumerator_get_Value_m11646 (ResourceEnumerator_t1785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Resources.ResourceReader/ResourceEnumerator::get_Current()
extern "C" Object_t * ResourceEnumerator_get_Current_m11647 (ResourceEnumerator_t1785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Resources.ResourceReader/ResourceEnumerator::MoveNext()
extern "C" bool ResourceEnumerator_MoveNext_m11648 (ResourceEnumerator_t1785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceReader/ResourceEnumerator::Reset()
extern "C" void ResourceEnumerator_Reset_m11649 (ResourceEnumerator_t1785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceReader/ResourceEnumerator::FillCache()
extern "C" void ResourceEnumerator_FillCache_m11650 (ResourceEnumerator_t1785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
