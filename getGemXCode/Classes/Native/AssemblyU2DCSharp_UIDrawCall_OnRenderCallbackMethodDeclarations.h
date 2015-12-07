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

// UIDrawCall/OnRenderCallback
struct OnRenderCallback_t370;
// System.Object
struct Object_t;
// UnityEngine.Material
struct Material_t89;
// System.IAsyncResult
struct IAsyncResult_t39;
// System.AsyncCallback
struct AsyncCallback_t40;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void UIDrawCall/OnRenderCallback::.ctor(System.Object,System.IntPtr)
extern "C" void OnRenderCallback__ctor_m1898 (OnRenderCallback_t370 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall/OnRenderCallback::Invoke(UnityEngine.Material)
extern "C" void OnRenderCallback_Invoke_m1899 (OnRenderCallback_t370 * __this, Material_t89 * ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OnRenderCallback_t370(Il2CppObject* delegate, Material_t89 * ___mat);
// System.IAsyncResult UIDrawCall/OnRenderCallback::BeginInvoke(UnityEngine.Material,System.AsyncCallback,System.Object)
extern "C" Object_t * OnRenderCallback_BeginInvoke_m1900 (OnRenderCallback_t370 * __this, Material_t89 * ___mat, AsyncCallback_t40 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall/OnRenderCallback::EndInvoke(System.IAsyncResult)
extern "C" void OnRenderCallback_EndInvoke_m1901 (OnRenderCallback_t370 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
