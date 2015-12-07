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

// System.Collections.Generic.Dictionary`2/Transform`1<System.IntPtr,System.Object,System.IntPtr>
struct Transform_1_t2369;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t39;
// System.AsyncCallback
struct AsyncCallback_t40;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.IntPtr,System.Object,System.IntPtr>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m15858_gshared (Transform_1_t2369 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m15858(__this, ___object, ___method, method) (( void (*) (Transform_1_t2369 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m15858_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.IntPtr,System.Object,System.IntPtr>::Invoke(TKey,TValue)
extern "C" IntPtr_t Transform_1_Invoke_m15859_gshared (Transform_1_t2369 * __this, IntPtr_t ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m15859(__this, ___key, ___value, method) (( IntPtr_t (*) (Transform_1_t2369 *, IntPtr_t, Object_t *, const MethodInfo*))Transform_1_Invoke_m15859_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.IntPtr,System.Object,System.IntPtr>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m15860_gshared (Transform_1_t2369 * __this, IntPtr_t ___key, Object_t * ___value, AsyncCallback_t40 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m15860(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2369 *, IntPtr_t, Object_t *, AsyncCallback_t40 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m15860_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.IntPtr,System.Object,System.IntPtr>::EndInvoke(System.IAsyncResult)
extern "C" IntPtr_t Transform_1_EndInvoke_m15861_gshared (Transform_1_t2369 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m15861(__this, ___result, method) (( IntPtr_t (*) (Transform_1_t2369 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m15861_gshared)(__this, ___result, method)
