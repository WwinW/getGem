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

// UICamera/MoveDelegate
struct MoveDelegate_t440;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t39;
// System.AsyncCallback
struct AsyncCallback_t40;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UICamera/MoveDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void MoveDelegate__ctor_m2353 (MoveDelegate_t440 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera/MoveDelegate::Invoke(UnityEngine.Vector2)
extern "C" void MoveDelegate_Invoke_m2354 (MoveDelegate_t440 * __this, Vector2_t54  ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_MoveDelegate_t440(Il2CppObject* delegate, Vector2_t54  ___delta);
// System.IAsyncResult UICamera/MoveDelegate::BeginInvoke(UnityEngine.Vector2,System.AsyncCallback,System.Object)
extern "C" Object_t * MoveDelegate_BeginInvoke_m2355 (MoveDelegate_t440 * __this, Vector2_t54  ___delta, AsyncCallback_t40 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera/MoveDelegate::EndInvoke(System.IAsyncResult)
extern "C" void MoveDelegate_EndInvoke_m2356 (MoveDelegate_t440 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
