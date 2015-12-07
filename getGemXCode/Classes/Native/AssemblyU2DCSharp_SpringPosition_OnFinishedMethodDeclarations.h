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

// SpringPosition/OnFinished
struct OnFinished_t405;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t39;
// System.AsyncCallback
struct AsyncCallback_t40;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void SpringPosition/OnFinished::.ctor(System.Object,System.IntPtr)
extern "C" void OnFinished__ctor_m2124 (OnFinished_t405 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpringPosition/OnFinished::Invoke()
extern "C" void OnFinished_Invoke_m2125 (OnFinished_t405 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OnFinished_t405(Il2CppObject* delegate);
// System.IAsyncResult SpringPosition/OnFinished::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * OnFinished_BeginInvoke_m2126 (OnFinished_t405 * __this, AsyncCallback_t40 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpringPosition/OnFinished::EndInvoke(System.IAsyncResult)
extern "C" void OnFinished_EndInvoke_m2127 (OnFinished_t405 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
