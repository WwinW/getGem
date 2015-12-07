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

// UIScrollView/OnDragNotification
struct OnDragNotification_t309;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t39;
// System.AsyncCallback
struct AsyncCallback_t40;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void UIScrollView/OnDragNotification::.ctor(System.Object,System.IntPtr)
extern "C" void OnDragNotification__ctor_m1419 (OnDragNotification_t309 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView/OnDragNotification::Invoke()
extern "C" void OnDragNotification_Invoke_m1420 (OnDragNotification_t309 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OnDragNotification_t309(Il2CppObject* delegate);
// System.IAsyncResult UIScrollView/OnDragNotification::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * OnDragNotification_BeginInvoke_m1421 (OnDragNotification_t309 * __this, AsyncCallback_t40 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollView/OnDragNotification::EndInvoke(System.IAsyncResult)
extern "C" void OnDragNotification_EndInvoke_m1422 (OnDragNotification_t309 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
