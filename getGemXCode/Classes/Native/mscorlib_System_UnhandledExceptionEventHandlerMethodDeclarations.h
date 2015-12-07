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

// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_t1098;
// System.Object
struct Object_t;
// System.UnhandledExceptionEventArgs
struct UnhandledExceptionEventArgs_t1081;
// System.IAsyncResult
struct IAsyncResult_t39;
// System.AsyncCallback
struct AsyncCallback_t40;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.UnhandledExceptionEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void UnhandledExceptionEventHandler__ctor_m6707 (UnhandledExceptionEventHandler_t1098 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnhandledExceptionEventHandler::Invoke(System.Object,System.UnhandledExceptionEventArgs)
extern "C" void UnhandledExceptionEventHandler_Invoke_m13974 (UnhandledExceptionEventHandler_t1098 * __this, Object_t * ___sender, UnhandledExceptionEventArgs_t1081 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_UnhandledExceptionEventHandler_t1098(Il2CppObject* delegate, Object_t * ___sender, UnhandledExceptionEventArgs_t1081 * ___e);
// System.IAsyncResult System.UnhandledExceptionEventHandler::BeginInvoke(System.Object,System.UnhandledExceptionEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * UnhandledExceptionEventHandler_BeginInvoke_m13975 (UnhandledExceptionEventHandler_t1098 * __this, Object_t * ___sender, UnhandledExceptionEventArgs_t1081 * ___e, AsyncCallback_t40 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnhandledExceptionEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void UnhandledExceptionEventHandler_EndInvoke_m13976 (UnhandledExceptionEventHandler_t1098 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
