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

// UIWrapContent/OnInitializeItem
struct OnInitializeItem_t322;
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

// System.Void UIWrapContent/OnInitializeItem::.ctor(System.Object,System.IntPtr)
extern "C" void OnInitializeItem__ctor_m1510 (OnInitializeItem_t322 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWrapContent/OnInitializeItem::Invoke(UnityEngine.GameObject,System.Int32,System.Int32)
extern "C" void OnInitializeItem_Invoke_m1511 (OnInitializeItem_t322 * __this, GameObject_t24 * ___go, int32_t ___wrapIndex, int32_t ___realIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OnInitializeItem_t322(Il2CppObject* delegate, GameObject_t24 * ___go, int32_t ___wrapIndex, int32_t ___realIndex);
// System.IAsyncResult UIWrapContent/OnInitializeItem::BeginInvoke(UnityEngine.GameObject,System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * OnInitializeItem_BeginInvoke_m1512 (OnInitializeItem_t322 * __this, GameObject_t24 * ___go, int32_t ___wrapIndex, int32_t ___realIndex, AsyncCallback_t40 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWrapContent/OnInitializeItem::EndInvoke(System.IAsyncResult)
extern "C" void OnInitializeItem_EndInvoke_m1513 (OnInitializeItem_t322 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
