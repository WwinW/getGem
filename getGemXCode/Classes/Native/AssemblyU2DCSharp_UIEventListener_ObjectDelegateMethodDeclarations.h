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

// UIEventListener/ObjectDelegate
struct ObjectDelegate_t387;
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

// System.Void UIEventListener/ObjectDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void ObjectDelegate__ctor_m1957 (ObjectDelegate_t387 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener/ObjectDelegate::Invoke(UnityEngine.GameObject,UnityEngine.GameObject)
extern "C" void ObjectDelegate_Invoke_m1958 (ObjectDelegate_t387 * __this, GameObject_t24 * ___go, GameObject_t24 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ObjectDelegate_t387(Il2CppObject* delegate, GameObject_t24 * ___go, GameObject_t24 * ___obj);
// System.IAsyncResult UIEventListener/ObjectDelegate::BeginInvoke(UnityEngine.GameObject,UnityEngine.GameObject,System.AsyncCallback,System.Object)
extern "C" Object_t * ObjectDelegate_BeginInvoke_m1959 (ObjectDelegate_t387 * __this, GameObject_t24 * ___go, GameObject_t24 * ___obj, AsyncCallback_t40 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener/ObjectDelegate::EndInvoke(System.IAsyncResult)
extern "C" void ObjectDelegate_EndInvoke_m1960 (ObjectDelegate_t387 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
