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

// UIPopupList/LegacyEvent
struct LegacyEvent_t291;
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

// System.Void UIPopupList/LegacyEvent::.ctor(System.Object,System.IntPtr)
extern "C" void LegacyEvent__ctor_m1315 (LegacyEvent_t291 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList/LegacyEvent::Invoke(System.String)
extern "C" void LegacyEvent_Invoke_m1316 (LegacyEvent_t291 * __this, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_LegacyEvent_t291(Il2CppObject* delegate, String_t* ___val);
// System.IAsyncResult UIPopupList/LegacyEvent::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C" Object_t * LegacyEvent_BeginInvoke_m1317 (LegacyEvent_t291 * __this, String_t* ___val, AsyncCallback_t40 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList/LegacyEvent::EndInvoke(System.IAsyncResult)
extern "C" void LegacyEvent_EndInvoke_m1318 (LegacyEvent_t291 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
