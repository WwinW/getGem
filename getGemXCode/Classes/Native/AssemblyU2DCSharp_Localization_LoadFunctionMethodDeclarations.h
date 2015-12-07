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

// Localization/LoadFunction
struct LoadFunction_t343;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t337;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t39;
// System.AsyncCallback
struct AsyncCallback_t40;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_String.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Byte.h"

// System.Void Localization/LoadFunction::.ctor(System.Object,System.IntPtr)
extern "C" void LoadFunction__ctor_m1619 (LoadFunction_t343 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Localization/LoadFunction::Invoke(System.String)
extern "C" ByteU5BU5D_t337* LoadFunction_Invoke_m1620 (LoadFunction_t343 * __this, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" ByteU5BU5D_t337* pinvoke_delegate_wrapper_LoadFunction_t343(Il2CppObject* delegate, String_t* ___path);
// System.IAsyncResult Localization/LoadFunction::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C" Object_t * LoadFunction_BeginInvoke_m1621 (LoadFunction_t343 * __this, String_t* ___path, AsyncCallback_t40 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Localization/LoadFunction::EndInvoke(System.IAsyncResult)
extern "C" ByteU5BU5D_t337* LoadFunction_EndInvoke_m1622 (LoadFunction_t343 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
