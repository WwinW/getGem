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

// UIInput/OnValidate
struct OnValidate_t461;
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

// System.Void UIInput/OnValidate::.ctor(System.Object,System.IntPtr)
extern "C" void OnValidate__ctor_m2483 (OnValidate_t461 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UIInput/OnValidate::Invoke(System.String,System.Int32,System.Char)
extern "C" uint16_t OnValidate_Invoke_m2484 (OnValidate_t461 * __this, String_t* ___text, int32_t ___charIndex, uint16_t ___addedChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" uint16_t pinvoke_delegate_wrapper_OnValidate_t461(Il2CppObject* delegate, String_t* ___text, int32_t ___charIndex, uint16_t ___addedChar);
// System.IAsyncResult UIInput/OnValidate::BeginInvoke(System.String,System.Int32,System.Char,System.AsyncCallback,System.Object)
extern "C" Object_t * OnValidate_BeginInvoke_m2485 (OnValidate_t461 * __this, String_t* ___text, int32_t ___charIndex, uint16_t ___addedChar, AsyncCallback_t40 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UIInput/OnValidate::EndInvoke(System.IAsyncResult)
extern "C" uint16_t OnValidate_EndInvoke_m2486 (OnValidate_t461 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
