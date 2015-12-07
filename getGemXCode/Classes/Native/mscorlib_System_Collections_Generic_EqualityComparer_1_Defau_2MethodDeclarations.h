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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.IntPtr>
struct DefaultComparer_t2376;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.IntPtr>::.ctor()
extern "C" void DefaultComparer__ctor_m15906_gshared (DefaultComparer_t2376 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m15906(__this, method) (( void (*) (DefaultComparer_t2376 *, const MethodInfo*))DefaultComparer__ctor_m15906_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.IntPtr>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m15907_gshared (DefaultComparer_t2376 * __this, IntPtr_t ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m15907(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2376 *, IntPtr_t, const MethodInfo*))DefaultComparer_GetHashCode_m15907_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.IntPtr>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m15908_gshared (DefaultComparer_t2376 * __this, IntPtr_t ___x, IntPtr_t ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m15908(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2376 *, IntPtr_t, IntPtr_t, const MethodInfo*))DefaultComparer_Equals_m15908_gshared)(__this, ___x, ___y, method)
