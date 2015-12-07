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

// System.Comparison`1<UnityEngine.Color32>
struct Comparison_1_t2804;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t39;
// System.AsyncCallback
struct AsyncCallback_t40;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Color32.h"

// System.Void System.Comparison`1<UnityEngine.Color32>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m22026_gshared (Comparison_1_t2804 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m22026(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2804 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m22026_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Color32>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m22027_gshared (Comparison_1_t2804 * __this, Color32_t356  ___x, Color32_t356  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m22027(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2804 *, Color32_t356 , Color32_t356 , const MethodInfo*))Comparison_1_Invoke_m22027_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Color32>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m22028_gshared (Comparison_1_t2804 * __this, Color32_t356  ___x, Color32_t356  ___y, AsyncCallback_t40 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m22028(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2804 *, Color32_t356 , Color32_t356 , AsyncCallback_t40 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m22028_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Color32>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m22029_gshared (Comparison_1_t2804 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m22029(__this, ___result, method) (( int32_t (*) (Comparison_1_t2804 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m22029_gshared)(__this, ___result, method)
