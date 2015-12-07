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

// UIWidget/OnPostFillCallback
struct OnPostFillCallback_t399;
// System.Object
struct Object_t;
// UIWidget
struct UIWidget_t176;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t372;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t374;
// BetterList`1<UnityEngine.Color32>
struct BetterList_1_t375;
// System.IAsyncResult
struct IAsyncResult_t39;
// System.AsyncCallback
struct AsyncCallback_t40;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void UIWidget/OnPostFillCallback::.ctor(System.Object,System.IntPtr)
extern "C" void OnPostFillCallback__ctor_m2033 (OnPostFillCallback_t399 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget/OnPostFillCallback::Invoke(UIWidget,System.Int32,BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>)
extern "C" void OnPostFillCallback_Invoke_m2034 (OnPostFillCallback_t399 * __this, UIWidget_t176 * ___widget, int32_t ___bufferOffset, BetterList_1_t372 * ___verts, BetterList_1_t374 * ___uvs, BetterList_1_t375 * ___cols, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UIWidget/OnPostFillCallback::BeginInvoke(UIWidget,System.Int32,BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>,System.AsyncCallback,System.Object)
extern "C" Object_t * OnPostFillCallback_BeginInvoke_m2035 (OnPostFillCallback_t399 * __this, UIWidget_t176 * ___widget, int32_t ___bufferOffset, BetterList_1_t372 * ___verts, BetterList_1_t374 * ___uvs, BetterList_1_t375 * ___cols, AsyncCallback_t40 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget/OnPostFillCallback::EndInvoke(System.IAsyncResult)
extern "C" void OnPostFillCallback_EndInvoke_m2036 (OnPostFillCallback_t399 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
