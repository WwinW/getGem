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

// System.Threading.WaitHandle
struct WaitHandle_t1294;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Threading.WaitHandle::.ctor()
extern "C" void WaitHandle__ctor_m13082 (WaitHandle_t1294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::.cctor()
extern "C" void WaitHandle__cctor_m13083 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::System.IDisposable.Dispose()
extern "C" void WaitHandle_System_IDisposable_Dispose_m13084 (WaitHandle_t1294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Threading.WaitHandle::get_Handle()
extern "C" IntPtr_t WaitHandle_get_Handle_m13085 (WaitHandle_t1294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::set_Handle(System.IntPtr)
extern "C" void WaitHandle_set_Handle_m13086 (WaitHandle_t1294 * __this, IntPtr_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.WaitHandle::WaitOne_internal(System.IntPtr,System.Int32,System.Boolean)
extern "C" bool WaitHandle_WaitOne_internal_m13087 (WaitHandle_t1294 * __this, IntPtr_t ___handle, int32_t ___ms, bool ___exitContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::Dispose(System.Boolean)
extern "C" void WaitHandle_Dispose_m13088 (WaitHandle_t1294 * __this, bool ___explicitDisposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.WaitHandle::WaitOne()
extern "C" bool WaitHandle_WaitOne_m13089 (WaitHandle_t1294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.WaitHandle::WaitOne(System.Int32,System.Boolean)
extern "C" bool WaitHandle_WaitOne_m13090 (WaitHandle_t1294 * __this, int32_t ___millisecondsTimeout, bool ___exitContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::CheckDisposed()
extern "C" void WaitHandle_CheckDisposed_m13091 (WaitHandle_t1294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::Finalize()
extern "C" void WaitHandle_Finalize_m13092 (WaitHandle_t1294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
