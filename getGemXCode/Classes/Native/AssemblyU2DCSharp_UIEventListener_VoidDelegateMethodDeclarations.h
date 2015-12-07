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

// UIEventListener/VoidDelegate
struct VoidDelegate_t383;
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

// System.Void UIEventListener/VoidDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void VoidDelegate__ctor_m1941 (VoidDelegate_t383 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener/VoidDelegate::Invoke(UnityEngine.GameObject)
extern "C" void VoidDelegate_Invoke_m1942 (VoidDelegate_t383 * __this, GameObject_t24 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_VoidDelegate_t383(Il2CppObject* delegate, GameObject_t24 * ___go);
// System.IAsyncResult UIEventListener/VoidDelegate::BeginInvoke(UnityEngine.GameObject,System.AsyncCallback,System.Object)
extern "C" Object_t * VoidDelegate_BeginInvoke_m1943 (VoidDelegate_t383 * __this, GameObject_t24 * ___go, AsyncCallback_t40 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener/VoidDelegate::EndInvoke(System.IAsyncResult)
extern "C" void VoidDelegate_EndInvoke_m1944 (VoidDelegate_t383 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
