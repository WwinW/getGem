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

// UICamera/OnScreenResize
struct OnScreenResize_t438;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t39;
// System.AsyncCallback
struct AsyncCallback_t40;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void UICamera/OnScreenResize::.ctor(System.Object,System.IntPtr)
extern "C" void OnScreenResize__ctor_m2345 (OnScreenResize_t438 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera/OnScreenResize::Invoke()
extern "C" void OnScreenResize_Invoke_m2346 (OnScreenResize_t438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OnScreenResize_t438(Il2CppObject* delegate);
// System.IAsyncResult UICamera/OnScreenResize::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * OnScreenResize_BeginInvoke_m2347 (OnScreenResize_t438 * __this, AsyncCallback_t40 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera/OnScreenResize::EndInvoke(System.IAsyncResult)
extern "C" void OnScreenResize_EndInvoke_m2348 (OnScreenResize_t438 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
