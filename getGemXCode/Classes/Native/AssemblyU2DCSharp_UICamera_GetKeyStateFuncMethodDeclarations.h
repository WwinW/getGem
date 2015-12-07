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

// UICamera/GetKeyStateFunc
struct GetKeyStateFunc_t436;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t39;
// System.AsyncCallback
struct AsyncCallback_t40;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_KeyCode.h"

// System.Void UICamera/GetKeyStateFunc::.ctor(System.Object,System.IntPtr)
extern "C" void GetKeyStateFunc__ctor_m2337 (GetKeyStateFunc_t436 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera/GetKeyStateFunc::Invoke(UnityEngine.KeyCode)
extern "C" bool GetKeyStateFunc_Invoke_m2338 (GetKeyStateFunc_t436 * __this, int32_t ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool pinvoke_delegate_wrapper_GetKeyStateFunc_t436(Il2CppObject* delegate, int32_t ___key);
// System.IAsyncResult UICamera/GetKeyStateFunc::BeginInvoke(UnityEngine.KeyCode,System.AsyncCallback,System.Object)
extern "C" Object_t * GetKeyStateFunc_BeginInvoke_m2339 (GetKeyStateFunc_t436 * __this, int32_t ___key, AsyncCallback_t40 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera/GetKeyStateFunc::EndInvoke(System.IAsyncResult)
extern "C" bool GetKeyStateFunc_EndInvoke_m2340 (GetKeyStateFunc_t436 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
