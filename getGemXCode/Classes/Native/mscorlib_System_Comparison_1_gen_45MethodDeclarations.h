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

// System.Comparison`1<UnityEngine.Vector3>
struct Comparison_1_t2796;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t39;
// System.AsyncCallback
struct AsyncCallback_t40;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void System.Comparison`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m21890_gshared (Comparison_1_t2796 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m21890(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2796 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m21890_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector3>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m21891_gshared (Comparison_1_t2796 * __this, Vector3_t34  ___x, Vector3_t34  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m21891(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2796 *, Vector3_t34 , Vector3_t34 , const MethodInfo*))Comparison_1_Invoke_m21891_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Vector3>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m21892_gshared (Comparison_1_t2796 * __this, Vector3_t34  ___x, Vector3_t34  ___y, AsyncCallback_t40 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m21892(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2796 *, Vector3_t34 , Vector3_t34 , AsyncCallback_t40 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m21892_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector3>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m21893_gshared (Comparison_1_t2796 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m21893(__this, ___result, method) (( int32_t (*) (Comparison_1_t2796 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m21893_gshared)(__this, ___result, method)
