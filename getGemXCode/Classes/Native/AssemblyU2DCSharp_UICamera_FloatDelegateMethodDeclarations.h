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

// UICamera/FloatDelegate
struct FloatDelegate_t443;
// System.Object
struct Object_t;
// UnityEngine.GameObject
struct GameObject_t24;
// System.IAsyncResult
struct IAsyncResult_t39;
// System.AsyncCallback
struct AsyncCallback_t40;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void UICamera/FloatDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void FloatDelegate__ctor_m2365 (FloatDelegate_t443 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera/FloatDelegate::Invoke(UnityEngine.GameObject,System.Single)
extern "C" void FloatDelegate_Invoke_m2366 (FloatDelegate_t443 * __this, GameObject_t24 * ___go, float ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_FloatDelegate_t443(Il2CppObject* delegate, GameObject_t24 * ___go, float ___delta);
// System.IAsyncResult UICamera/FloatDelegate::BeginInvoke(UnityEngine.GameObject,System.Single,System.AsyncCallback,System.Object)
extern "C" Object_t * FloatDelegate_BeginInvoke_m2367 (FloatDelegate_t443 * __this, GameObject_t24 * ___go, float ___delta, AsyncCallback_t40 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera/FloatDelegate::EndInvoke(System.IAsyncResult)
extern "C" void FloatDelegate_EndInvoke_m2368 (FloatDelegate_t443 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
