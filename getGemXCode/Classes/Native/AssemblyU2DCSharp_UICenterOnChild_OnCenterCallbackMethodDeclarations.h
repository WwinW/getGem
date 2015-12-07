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

// UICenterOnChild/OnCenterCallback
struct OnCenterCallback_t247;
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

// System.Void UICenterOnChild/OnCenterCallback::.ctor(System.Object,System.IntPtr)
extern "C" void OnCenterCallback__ctor_m1118 (OnCenterCallback_t247 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICenterOnChild/OnCenterCallback::Invoke(UnityEngine.GameObject)
extern "C" void OnCenterCallback_Invoke_m1119 (OnCenterCallback_t247 * __this, GameObject_t24 * ___centeredObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OnCenterCallback_t247(Il2CppObject* delegate, GameObject_t24 * ___centeredObject);
// System.IAsyncResult UICenterOnChild/OnCenterCallback::BeginInvoke(UnityEngine.GameObject,System.AsyncCallback,System.Object)
extern "C" Object_t * OnCenterCallback_BeginInvoke_m1120 (OnCenterCallback_t247 * __this, GameObject_t24 * ___centeredObject, AsyncCallback_t40 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICenterOnChild/OnCenterCallback::EndInvoke(System.IAsyncResult)
extern "C" void OnCenterCallback_EndInvoke_m1121 (OnCenterCallback_t247 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
