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

// UICamera/BoolDelegate
struct BoolDelegate_t442;
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

// System.Void UICamera/BoolDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void BoolDelegate__ctor_m2361 (BoolDelegate_t442 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera/BoolDelegate::Invoke(UnityEngine.GameObject,System.Boolean)
extern "C" void BoolDelegate_Invoke_m2362 (BoolDelegate_t442 * __this, GameObject_t24 * ___go, bool ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_BoolDelegate_t442(Il2CppObject* delegate, GameObject_t24 * ___go, bool ___state);
// System.IAsyncResult UICamera/BoolDelegate::BeginInvoke(UnityEngine.GameObject,System.Boolean,System.AsyncCallback,System.Object)
extern "C" Object_t * BoolDelegate_BeginInvoke_m2363 (BoolDelegate_t442 * __this, GameObject_t24 * ___go, bool ___state, AsyncCallback_t40 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera/BoolDelegate::EndInvoke(System.IAsyncResult)
extern "C" void BoolDelegate_EndInvoke_m2364 (BoolDelegate_t442 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
