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

// Localization/OnLocalizeNotification
struct OnLocalizeNotification_t344;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t39;
// System.AsyncCallback
struct AsyncCallback_t40;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void Localization/OnLocalizeNotification::.ctor(System.Object,System.IntPtr)
extern "C" void OnLocalizeNotification__ctor_m1623 (OnLocalizeNotification_t344 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Localization/OnLocalizeNotification::Invoke()
extern "C" void OnLocalizeNotification_Invoke_m1624 (OnLocalizeNotification_t344 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OnLocalizeNotification_t344(Il2CppObject* delegate);
// System.IAsyncResult Localization/OnLocalizeNotification::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * OnLocalizeNotification_BeginInvoke_m1625 (OnLocalizeNotification_t344 * __this, AsyncCallback_t40 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Localization/OnLocalizeNotification::EndInvoke(System.IAsyncResult)
extern "C" void OnLocalizeNotification_EndInvoke_m1626 (OnLocalizeNotification_t344 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
