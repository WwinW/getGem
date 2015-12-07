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

// UICamera/GetTouchCountCallback
struct GetTouchCountCallback_t447;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t39;
// System.AsyncCallback
struct AsyncCallback_t40;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void UICamera/GetTouchCountCallback::.ctor(System.Object,System.IntPtr)
extern "C" void GetTouchCountCallback__ctor_m2381 (GetTouchCountCallback_t447 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera/GetTouchCountCallback::Invoke()
extern "C" int32_t GetTouchCountCallback_Invoke_m2382 (GetTouchCountCallback_t447 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t pinvoke_delegate_wrapper_GetTouchCountCallback_t447(Il2CppObject* delegate);
// System.IAsyncResult UICamera/GetTouchCountCallback::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * GetTouchCountCallback_BeginInvoke_m2383 (GetTouchCountCallback_t447 * __this, AsyncCallback_t40 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera/GetTouchCountCallback::EndInvoke(System.IAsyncResult)
extern "C" int32_t GetTouchCountCallback_EndInvoke_m2384 (GetTouchCountCallback_t447 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
