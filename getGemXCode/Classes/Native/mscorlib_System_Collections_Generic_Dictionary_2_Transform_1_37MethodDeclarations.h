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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,UnityEngine.TextEditor/TextEditOp>
struct Transform_1_t2932;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t39;
// System.AsyncCallback
struct AsyncCallback_t40;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m23688_gshared (Transform_1_t2932 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m23688(__this, ___object, ___method, method) (( void (*) (Transform_1_t2932 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m23688_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,UnityEngine.TextEditor/TextEditOp>::Invoke(TKey,TValue)
extern "C" int32_t Transform_1_Invoke_m23689_gshared (Transform_1_t2932 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m23689(__this, ___key, ___value, method) (( int32_t (*) (Transform_1_t2932 *, Object_t *, int32_t, const MethodInfo*))Transform_1_Invoke_m23689_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,UnityEngine.TextEditor/TextEditOp>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m23690_gshared (Transform_1_t2932 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t40 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m23690(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2932 *, Object_t *, int32_t, AsyncCallback_t40 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m23690_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,UnityEngine.TextEditor/TextEditOp>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Transform_1_EndInvoke_m23691_gshared (Transform_1_t2932 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m23691(__this, ___result, method) (( int32_t (*) (Transform_1_t2932 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m23691_gshared)(__this, ___result, method)
