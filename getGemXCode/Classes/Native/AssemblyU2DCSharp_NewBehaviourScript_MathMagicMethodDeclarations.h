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

// NewBehaviourScript/MathMagic
struct MathMagic_t493;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t39;
// System.AsyncCallback
struct AsyncCallback_t40;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void NewBehaviourScript/MathMagic::.ctor(System.Object,System.IntPtr)
extern "C" void MathMagic__ctor_m2868 (MathMagic_t493 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NewBehaviourScript/MathMagic::Invoke(System.Int32,System.Int32)
extern "C" int32_t MathMagic_Invoke_m2869 (MathMagic_t493 * __this, int32_t ___value1, int32_t ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t pinvoke_delegate_wrapper_MathMagic_t493(Il2CppObject* delegate, int32_t ___value1, int32_t ___value2);
// System.IAsyncResult NewBehaviourScript/MathMagic::BeginInvoke(System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * MathMagic_BeginInvoke_m2870 (MathMagic_t493 * __this, int32_t ___value1, int32_t ___value2, AsyncCallback_t40 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NewBehaviourScript/MathMagic::EndInvoke(System.IAsyncResult)
extern "C" int32_t MathMagic_EndInvoke_m2871 (MathMagic_t493 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
