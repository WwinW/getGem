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

// UnityEngine.UnhandledExceptionHandler
struct UnhandledExceptionHandler_t892;
// System.Object
struct Object_t;
// System.UnhandledExceptionEventArgs
struct UnhandledExceptionEventArgs_t1081;
// System.String
struct String_t;
// System.Exception
struct Exception_t75;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UnhandledExceptionHandler::.ctor()
extern "C" void UnhandledExceptionHandler__ctor_m5511 (UnhandledExceptionHandler_t892 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UnhandledExceptionHandler::RegisterUECatcher()
extern "C" void UnhandledExceptionHandler_RegisterUECatcher_m5512 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UnhandledExceptionHandler::HandleUnhandledException(System.Object,System.UnhandledExceptionEventArgs)
extern "C" void UnhandledExceptionHandler_HandleUnhandledException_m5513 (Object_t * __this /* static, unused */, Object_t * ___sender, UnhandledExceptionEventArgs_t1081 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UnhandledExceptionHandler::PrintException(System.String,System.Exception)
extern "C" void UnhandledExceptionHandler_PrintException_m5514 (Object_t * __this /* static, unused */, String_t* ___title, Exception_t75 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UnhandledExceptionHandler::NativeUnhandledExceptionHandler()
extern "C" void UnhandledExceptionHandler_NativeUnhandledExceptionHandler_m5515 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
