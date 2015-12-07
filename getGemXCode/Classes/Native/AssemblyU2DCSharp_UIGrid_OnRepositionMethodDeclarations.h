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

// UIGrid/OnReposition
struct OnReposition_t275;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t39;
// System.AsyncCallback
struct AsyncCallback_t40;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void UIGrid/OnReposition::.ctor(System.Object,System.IntPtr)
extern "C" void OnReposition__ctor_m1220 (OnReposition_t275 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid/OnReposition::Invoke()
extern "C" void OnReposition_Invoke_m1221 (OnReposition_t275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OnReposition_t275(Il2CppObject* delegate);
// System.IAsyncResult UIGrid/OnReposition::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * OnReposition_BeginInvoke_m1222 (OnReposition_t275 * __this, AsyncCallback_t40 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid/OnReposition::EndInvoke(System.IAsyncResult)
extern "C" void OnReposition_EndInvoke_m1223 (OnReposition_t275 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
