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

// UIWidget/HitCheck
struct HitCheck_t400;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t39;
// System.AsyncCallback
struct AsyncCallback_t40;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UIWidget/HitCheck::.ctor(System.Object,System.IntPtr)
extern "C" void HitCheck__ctor_m2037 (HitCheck_t400 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIWidget/HitCheck::Invoke(UnityEngine.Vector3)
extern "C" bool HitCheck_Invoke_m2038 (HitCheck_t400 * __this, Vector3_t34  ___worldPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool pinvoke_delegate_wrapper_HitCheck_t400(Il2CppObject* delegate, Vector3_t34  ___worldPos);
// System.IAsyncResult UIWidget/HitCheck::BeginInvoke(UnityEngine.Vector3,System.AsyncCallback,System.Object)
extern "C" Object_t * HitCheck_BeginInvoke_m2039 (HitCheck_t400 * __this, Vector3_t34  ___worldPos, AsyncCallback_t40 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIWidget/HitCheck::EndInvoke(System.IAsyncResult)
extern "C" bool HitCheck_EndInvoke_m2040 (HitCheck_t400 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
