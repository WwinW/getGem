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

// System.Net.ServicePointManager/SPKey
struct SPKey_t1373;
// System.Uri
struct Uri_t1321;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.ServicePointManager/SPKey::.ctor(System.Uri,System.Boolean)
extern "C" void SPKey__ctor_m8036 (SPKey_t1373 * __this, Uri_t1321 * ___uri, bool ___use_connect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ServicePointManager/SPKey::GetHashCode()
extern "C" int32_t SPKey_GetHashCode_m8037 (SPKey_t1373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePointManager/SPKey::Equals(System.Object)
extern "C" bool SPKey_Equals_m8038 (SPKey_t1373 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
