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

// UIPanel/OnClippingMoved
struct OnClippingMoved_t474;
// System.Object
struct Object_t;
// UIPanel
struct UIPanel_t266;
// System.IAsyncResult
struct IAsyncResult_t39;
// System.AsyncCallback
struct AsyncCallback_t40;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void UIPanel/OnClippingMoved::.ctor(System.Object,System.IntPtr)
extern "C" void OnClippingMoved__ctor_m2658 (OnClippingMoved_t474 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel/OnClippingMoved::Invoke(UIPanel)
extern "C" void OnClippingMoved_Invoke_m2659 (OnClippingMoved_t474 * __this, UIPanel_t266 * ___panel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OnClippingMoved_t474(Il2CppObject* delegate, UIPanel_t266 * ___panel);
// System.IAsyncResult UIPanel/OnClippingMoved::BeginInvoke(UIPanel,System.AsyncCallback,System.Object)
extern "C" Object_t * OnClippingMoved_BeginInvoke_m2660 (OnClippingMoved_t474 * __this, UIPanel_t266 * ___panel, AsyncCallback_t40 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel/OnClippingMoved::EndInvoke(System.IAsyncResult)
extern "C" void OnClippingMoved_EndInvoke_m2661 (OnClippingMoved_t474 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
