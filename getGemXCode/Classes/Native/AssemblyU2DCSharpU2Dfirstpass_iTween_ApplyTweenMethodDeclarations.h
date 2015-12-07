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

// iTween/ApplyTween
struct ApplyTween_t41;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t39;
// System.AsyncCallback
struct AsyncCallback_t40;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void iTween/ApplyTween::.ctor(System.Object,System.IntPtr)
extern "C" void ApplyTween__ctor_m170 (ApplyTween_t41 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween/ApplyTween::Invoke()
extern "C" void ApplyTween_Invoke_m171 (ApplyTween_t41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ApplyTween_t41(Il2CppObject* delegate);
// System.IAsyncResult iTween/ApplyTween::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * ApplyTween_BeginInvoke_m172 (ApplyTween_t41 * __this, AsyncCallback_t40 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween/ApplyTween::EndInvoke(System.IAsyncResult)
extern "C" void ApplyTween_EndInvoke_m173 (ApplyTween_t41 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
