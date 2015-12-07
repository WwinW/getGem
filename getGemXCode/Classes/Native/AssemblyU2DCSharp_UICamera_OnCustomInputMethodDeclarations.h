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

// UICamera/OnCustomInput
struct OnCustomInput_t439;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t39;
// System.AsyncCallback
struct AsyncCallback_t40;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void UICamera/OnCustomInput::.ctor(System.Object,System.IntPtr)
extern "C" void OnCustomInput__ctor_m2349 (OnCustomInput_t439 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera/OnCustomInput::Invoke()
extern "C" void OnCustomInput_Invoke_m2350 (OnCustomInput_t439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OnCustomInput_t439(Il2CppObject* delegate);
// System.IAsyncResult UICamera/OnCustomInput::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * OnCustomInput_BeginInvoke_m2351 (OnCustomInput_t439 * __this, AsyncCallback_t40 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera/OnCustomInput::EndInvoke(System.IAsyncResult)
extern "C" void OnCustomInput_EndInvoke_m2352 (OnCustomInput_t439 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
