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

// UICamera/VectorDelegate
struct VectorDelegate_t444;
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
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UICamera/VectorDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void VectorDelegate__ctor_m2369 (VectorDelegate_t444 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera/VectorDelegate::Invoke(UnityEngine.GameObject,UnityEngine.Vector2)
extern "C" void VectorDelegate_Invoke_m2370 (VectorDelegate_t444 * __this, GameObject_t24 * ___go, Vector2_t54  ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_VectorDelegate_t444(Il2CppObject* delegate, GameObject_t24 * ___go, Vector2_t54  ___delta);
// System.IAsyncResult UICamera/VectorDelegate::BeginInvoke(UnityEngine.GameObject,UnityEngine.Vector2,System.AsyncCallback,System.Object)
extern "C" Object_t * VectorDelegate_BeginInvoke_m2371 (VectorDelegate_t444 * __this, GameObject_t24 * ___go, Vector2_t54  ___delta, AsyncCallback_t40 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera/VectorDelegate::EndInvoke(System.IAsyncResult)
extern "C" void VectorDelegate_EndInvoke_m2372 (VectorDelegate_t444 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
