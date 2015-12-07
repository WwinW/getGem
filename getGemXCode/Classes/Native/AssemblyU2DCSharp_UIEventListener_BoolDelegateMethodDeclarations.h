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

// UIEventListener/BoolDelegate
struct BoolDelegate_t384;
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

// System.Void UIEventListener/BoolDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void BoolDelegate__ctor_m1945 (BoolDelegate_t384 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener/BoolDelegate::Invoke(UnityEngine.GameObject,System.Boolean)
extern "C" void BoolDelegate_Invoke_m1946 (BoolDelegate_t384 * __this, GameObject_t24 * ___go, bool ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_BoolDelegate_t384(Il2CppObject* delegate, GameObject_t24 * ___go, bool ___state);
// System.IAsyncResult UIEventListener/BoolDelegate::BeginInvoke(UnityEngine.GameObject,System.Boolean,System.AsyncCallback,System.Object)
extern "C" Object_t * BoolDelegate_BeginInvoke_m1947 (BoolDelegate_t384 * __this, GameObject_t24 * ___go, bool ___state, AsyncCallback_t40 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener/BoolDelegate::EndInvoke(System.IAsyncResult)
extern "C" void BoolDelegate_EndInvoke_m1948 (BoolDelegate_t384 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
