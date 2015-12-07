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

// System.Reflection.EventInfo/AddEventAdapter
struct AddEventAdapter_t1755;
// System.Object
struct Object_t;
// System.Delegate
struct Delegate_t530;
// System.IAsyncResult
struct IAsyncResult_t39;
// System.AsyncCallback
struct AsyncCallback_t40;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.EventInfo/AddEventAdapter::.ctor(System.Object,System.IntPtr)
extern "C" void AddEventAdapter__ctor_m11422 (AddEventAdapter_t1755 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.EventInfo/AddEventAdapter::Invoke(System.Object,System.Delegate)
extern "C" void AddEventAdapter_Invoke_m11423 (AddEventAdapter_t1755 * __this, Object_t * ____this, Delegate_t530 * ___dele, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_AddEventAdapter_t1755(Il2CppObject* delegate, Object_t * ____this, Delegate_t530 * ___dele);
// System.IAsyncResult System.Reflection.EventInfo/AddEventAdapter::BeginInvoke(System.Object,System.Delegate,System.AsyncCallback,System.Object)
extern "C" Object_t * AddEventAdapter_BeginInvoke_m11424 (AddEventAdapter_t1755 * __this, Object_t * ____this, Delegate_t530 * ___dele, AsyncCallback_t40 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.EventInfo/AddEventAdapter::EndInvoke(System.IAsyncResult)
extern "C" void AddEventAdapter_EndInvoke_m11425 (AddEventAdapter_t1755 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
