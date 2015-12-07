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

// UIToggle/Validate
struct Validate_t316;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t39;
// System.AsyncCallback
struct AsyncCallback_t40;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void UIToggle/Validate::.ctor(System.Object,System.IntPtr)
extern "C" void Validate__ctor_m1486 (Validate_t316 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIToggle/Validate::Invoke(System.Boolean)
extern "C" bool Validate_Invoke_m1487 (Validate_t316 * __this, bool ___choice, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool pinvoke_delegate_wrapper_Validate_t316(Il2CppObject* delegate, bool ___choice);
// System.IAsyncResult UIToggle/Validate::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
extern "C" Object_t * Validate_BeginInvoke_m1488 (Validate_t316 * __this, bool ___choice, AsyncCallback_t40 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIToggle/Validate::EndInvoke(System.IAsyncResult)
extern "C" bool Validate_EndInvoke_m1489 (Validate_t316 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
