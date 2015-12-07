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

// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_t2745;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t39;
// System.AsyncCallback
struct AsyncCallback_t40;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m21087_gshared (UnityAction_1_t2745 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_1__ctor_m21087(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t2745 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m21087_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m21088_gshared (UnityAction_1_t2745 * __this, Vector2_t54  ___arg0, const MethodInfo* method);
#define UnityAction_1_Invoke_m21088(__this, ___arg0, method) (( void (*) (UnityAction_1_t2745 *, Vector2_t54 , const MethodInfo*))UnityAction_1_Invoke_m21088_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m21089_gshared (UnityAction_1_t2745 * __this, Vector2_t54  ___arg0, AsyncCallback_t40 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m21089(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t2745 *, Vector2_t54 , AsyncCallback_t40 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m21089_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m21090_gshared (UnityAction_1_t2745 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m21090(__this, ___result, method) (( void (*) (UnityAction_1_t2745 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m21090_gshared)(__this, ___result, method)
