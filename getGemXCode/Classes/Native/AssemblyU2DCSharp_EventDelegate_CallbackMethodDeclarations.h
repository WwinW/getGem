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

// EventDelegate/Callback
struct Callback_t227;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t39;
// System.AsyncCallback
struct AsyncCallback_t40;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void EventDelegate/Callback::.ctor(System.Object,System.IntPtr)
extern "C" void Callback__ctor_m1584 (Callback_t227 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate/Callback::Invoke()
extern "C" void Callback_Invoke_m1585 (Callback_t227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_Callback_t227(Il2CppObject* delegate);
// System.IAsyncResult EventDelegate/Callback::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * Callback_BeginInvoke_m1586 (Callback_t227 * __this, AsyncCallback_t40 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate/Callback::EndInvoke(System.IAsyncResult)
extern "C" void Callback_EndInvoke_m1587 (Callback_t227 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
