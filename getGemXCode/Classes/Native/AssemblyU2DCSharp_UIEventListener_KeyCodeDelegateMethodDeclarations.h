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

// UIEventListener/KeyCodeDelegate
struct KeyCodeDelegate_t388;
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
#include "UnityEngine_UnityEngine_KeyCode.h"

// System.Void UIEventListener/KeyCodeDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void KeyCodeDelegate__ctor_m1961 (KeyCodeDelegate_t388 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener/KeyCodeDelegate::Invoke(UnityEngine.GameObject,UnityEngine.KeyCode)
extern "C" void KeyCodeDelegate_Invoke_m1962 (KeyCodeDelegate_t388 * __this, GameObject_t24 * ___go, int32_t ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_KeyCodeDelegate_t388(Il2CppObject* delegate, GameObject_t24 * ___go, int32_t ___key);
// System.IAsyncResult UIEventListener/KeyCodeDelegate::BeginInvoke(UnityEngine.GameObject,UnityEngine.KeyCode,System.AsyncCallback,System.Object)
extern "C" Object_t * KeyCodeDelegate_BeginInvoke_m1963 (KeyCodeDelegate_t388 * __this, GameObject_t24 * ___go, int32_t ___key, AsyncCallback_t40 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener/KeyCodeDelegate::EndInvoke(System.IAsyncResult)
extern "C" void KeyCodeDelegate_EndInvoke_m1964 (KeyCodeDelegate_t388 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
