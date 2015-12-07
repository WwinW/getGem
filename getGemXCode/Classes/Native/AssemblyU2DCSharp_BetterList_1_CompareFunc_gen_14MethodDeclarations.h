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

// BetterList`1/CompareFunc<UnityEngine.Vector4>
struct CompareFunc_t2522;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t39;
// System.AsyncCallback
struct AsyncCallback_t40;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector4.h"

// System.Void BetterList`1/CompareFunc<UnityEngine.Vector4>::.ctor(System.Object,System.IntPtr)
extern "C" void CompareFunc__ctor_m17732_gshared (CompareFunc_t2522 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define CompareFunc__ctor_m17732(__this, ___object, ___method, method) (( void (*) (CompareFunc_t2522 *, Object_t *, IntPtr_t, const MethodInfo*))CompareFunc__ctor_m17732_gshared)(__this, ___object, ___method, method)
// System.Int32 BetterList`1/CompareFunc<UnityEngine.Vector4>::Invoke(T,T)
extern "C" int32_t CompareFunc_Invoke_m17733_gshared (CompareFunc_t2522 * __this, Vector4_t391  ___left, Vector4_t391  ___right, const MethodInfo* method);
#define CompareFunc_Invoke_m17733(__this, ___left, ___right, method) (( int32_t (*) (CompareFunc_t2522 *, Vector4_t391 , Vector4_t391 , const MethodInfo*))CompareFunc_Invoke_m17733_gshared)(__this, ___left, ___right, method)
// System.IAsyncResult BetterList`1/CompareFunc<UnityEngine.Vector4>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * CompareFunc_BeginInvoke_m17734_gshared (CompareFunc_t2522 * __this, Vector4_t391  ___left, Vector4_t391  ___right, AsyncCallback_t40 * ___callback, Object_t * ___object, const MethodInfo* method);
#define CompareFunc_BeginInvoke_m17734(__this, ___left, ___right, ___callback, ___object, method) (( Object_t * (*) (CompareFunc_t2522 *, Vector4_t391 , Vector4_t391 , AsyncCallback_t40 *, Object_t *, const MethodInfo*))CompareFunc_BeginInvoke_m17734_gshared)(__this, ___left, ___right, ___callback, ___object, method)
// System.Int32 BetterList`1/CompareFunc<UnityEngine.Vector4>::EndInvoke(System.IAsyncResult)
extern "C" int32_t CompareFunc_EndInvoke_m17735_gshared (CompareFunc_t2522 * __this, Object_t * ___result, const MethodInfo* method);
#define CompareFunc_EndInvoke_m17735(__this, ___result, method) (( int32_t (*) (CompareFunc_t2522 *, Object_t *, const MethodInfo*))CompareFunc_EndInvoke_m17735_gshared)(__this, ___result, method)
