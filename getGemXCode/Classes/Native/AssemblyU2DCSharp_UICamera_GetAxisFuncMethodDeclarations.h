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

// UICamera/GetAxisFunc
struct GetAxisFunc_t437;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t39;
// System.AsyncCallback
struct AsyncCallback_t40;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_String.h"

// System.Void UICamera/GetAxisFunc::.ctor(System.Object,System.IntPtr)
extern "C" void GetAxisFunc__ctor_m2341 (GetAxisFunc_t437 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UICamera/GetAxisFunc::Invoke(System.String)
extern "C" float GetAxisFunc_Invoke_m2342 (GetAxisFunc_t437 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" float pinvoke_delegate_wrapper_GetAxisFunc_t437(Il2CppObject* delegate, String_t* ___name);
// System.IAsyncResult UICamera/GetAxisFunc::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C" Object_t * GetAxisFunc_BeginInvoke_m2343 (GetAxisFunc_t437 * __this, String_t* ___name, AsyncCallback_t40 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UICamera/GetAxisFunc::EndInvoke(System.IAsyncResult)
extern "C" float GetAxisFunc_EndInvoke_m2344 (GetAxisFunc_t437 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
