﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>
struct Transform_1_t2922;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t39;
// System.AsyncCallback
struct AsyncCallback_t40;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m23692_gshared (Transform_1_t2922 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m23692(__this, ___object, ___method, method) (( void (*) (Transform_1_t2922 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m23692_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t111  Transform_1_Invoke_m23693_gshared (Transform_1_t2922 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m23693(__this, ___key, ___value, method) (( DictionaryEntry_t111  (*) (Transform_1_t2922 *, Object_t *, int32_t, const MethodInfo*))Transform_1_Invoke_m23693_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m23694_gshared (Transform_1_t2922 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t40 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m23694(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2922 *, Object_t *, int32_t, AsyncCallback_t40 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m23694_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t111  Transform_1_EndInvoke_m23695_gshared (Transform_1_t2922 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m23695(__this, ___result, method) (( DictionaryEntry_t111  (*) (Transform_1_t2922 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m23695_gshared)(__this, ___result, method)
