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

// System.UnhandledExceptionEventArgs
struct UnhandledExceptionEventArgs_t1081;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.UnhandledExceptionEventArgs::.ctor(System.Object,System.Boolean)
extern "C" void UnhandledExceptionEventArgs__ctor_m13892 (UnhandledExceptionEventArgs_t1081 * __this, Object_t * ___exception, bool ___isTerminating, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.UnhandledExceptionEventArgs::get_ExceptionObject()
extern "C" Object_t * UnhandledExceptionEventArgs_get_ExceptionObject_m6709 (UnhandledExceptionEventArgs_t1081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UnhandledExceptionEventArgs::get_IsTerminating()
extern "C" bool UnhandledExceptionEventArgs_get_IsTerminating_m13893 (UnhandledExceptionEventArgs_t1081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
