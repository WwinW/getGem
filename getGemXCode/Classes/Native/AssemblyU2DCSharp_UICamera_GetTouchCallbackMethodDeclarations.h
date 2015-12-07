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

// UICamera/GetTouchCallback
struct GetTouchCallback_t448;
// System.Object
struct Object_t;
// UICamera/Touch
struct Touch_t435;
// System.IAsyncResult
struct IAsyncResult_t39;
// System.AsyncCallback
struct AsyncCallback_t40;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void UICamera/GetTouchCallback::.ctor(System.Object,System.IntPtr)
extern "C" void GetTouchCallback__ctor_m2385 (GetTouchCallback_t448 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UICamera/Touch UICamera/GetTouchCallback::Invoke(System.Int32)
extern "C" Touch_t435 * GetTouchCallback_Invoke_m2386 (GetTouchCallback_t448 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Touch_t435 * pinvoke_delegate_wrapper_GetTouchCallback_t448(Il2CppObject* delegate, int32_t ___index);
// System.IAsyncResult UICamera/GetTouchCallback::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * GetTouchCallback_BeginInvoke_m2387 (GetTouchCallback_t448 * __this, int32_t ___index, AsyncCallback_t40 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UICamera/Touch UICamera/GetTouchCallback::EndInvoke(System.IAsyncResult)
extern "C" Touch_t435 * GetTouchCallback_EndInvoke_m2388 (GetTouchCallback_t448 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
