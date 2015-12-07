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

// System.Predicate`1<UnityEngine.Vector2>
struct Predicate_1_t2809;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t39;
// System.AsyncCallback
struct AsyncCallback_t40;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void System.Predicate`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m22152_gshared (Predicate_1_t2809 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m22152(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2809 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m22152_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector2>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m22153_gshared (Predicate_1_t2809 * __this, Vector2_t54  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m22153(__this, ___obj, method) (( bool (*) (Predicate_1_t2809 *, Vector2_t54 , const MethodInfo*))Predicate_1_Invoke_m22153_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Vector2>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m22154_gshared (Predicate_1_t2809 * __this, Vector2_t54  ___obj, AsyncCallback_t40 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m22154(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2809 *, Vector2_t54 , AsyncCallback_t40 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m22154_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m22155_gshared (Predicate_1_t2809 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m22155(__this, ___result, method) (( bool (*) (Predicate_1_t2809 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m22155_gshared)(__this, ___result, method)
