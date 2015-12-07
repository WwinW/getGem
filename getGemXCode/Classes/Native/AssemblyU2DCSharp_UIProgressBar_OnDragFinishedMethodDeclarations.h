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

// UIProgressBar/OnDragFinished
struct OnDragFinished_t300;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t39;
// System.AsyncCallback
struct AsyncCallback_t40;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void UIProgressBar/OnDragFinished::.ctor(System.Object,System.IntPtr)
extern "C" void OnDragFinished__ctor_m1374 (OnDragFinished_t300 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIProgressBar/OnDragFinished::Invoke()
extern "C" void OnDragFinished_Invoke_m1375 (OnDragFinished_t300 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OnDragFinished_t300(Il2CppObject* delegate);
// System.IAsyncResult UIProgressBar/OnDragFinished::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * OnDragFinished_BeginInvoke_m1376 (OnDragFinished_t300 * __this, AsyncCallback_t40 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIProgressBar/OnDragFinished::EndInvoke(System.IAsyncResult)
extern "C" void OnDragFinished_EndInvoke_m1377 (OnDragFinished_t300 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
