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

// UICamera/KeyCodeDelegate
struct KeyCodeDelegate_t446;
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

// System.Void UICamera/KeyCodeDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void KeyCodeDelegate__ctor_m2377 (KeyCodeDelegate_t446 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera/KeyCodeDelegate::Invoke(UnityEngine.GameObject,UnityEngine.KeyCode)
extern "C" void KeyCodeDelegate_Invoke_m2378 (KeyCodeDelegate_t446 * __this, GameObject_t24 * ___go, int32_t ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_KeyCodeDelegate_t446(Il2CppObject* delegate, GameObject_t24 * ___go, int32_t ___key);
// System.IAsyncResult UICamera/KeyCodeDelegate::BeginInvoke(UnityEngine.GameObject,UnityEngine.KeyCode,System.AsyncCallback,System.Object)
extern "C" Object_t * KeyCodeDelegate_BeginInvoke_m2379 (KeyCodeDelegate_t446 * __this, GameObject_t24 * ___go, int32_t ___key, AsyncCallback_t40 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera/KeyCodeDelegate::EndInvoke(System.IAsyncResult)
extern "C" void KeyCodeDelegate_EndInvoke_m2380 (KeyCodeDelegate_t446 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
