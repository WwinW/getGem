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

// SpringPanel/OnFinished
struct OnFinished_t249;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t39;
// System.AsyncCallback
struct AsyncCallback_t40;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void SpringPanel/OnFinished::.ctor(System.Object,System.IntPtr)
extern "C" void OnFinished__ctor_m1861 (OnFinished_t249 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpringPanel/OnFinished::Invoke()
extern "C" void OnFinished_Invoke_m1862 (OnFinished_t249 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OnFinished_t249(Il2CppObject* delegate);
// System.IAsyncResult SpringPanel/OnFinished::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * OnFinished_BeginInvoke_m1863 (OnFinished_t249 * __this, AsyncCallback_t40 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpringPanel/OnFinished::EndInvoke(System.IAsyncResult)
extern "C" void OnFinished_EndInvoke_m1864 (OnFinished_t249 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
