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

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t1240;
// System.AsyncCallback
struct AsyncCallback_t40;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t337;
// System.IO.Stream
struct Stream_t1242;
// System.Exception
struct Exception_t75;
// System.Threading.WaitHandle
struct WaitHandle_t1294;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
extern "C" void ReceiveRecordAsyncResult__ctor_m7416 (ReceiveRecordAsyncResult_t1240 * __this, AsyncCallback_t40 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t337* ___initialBuffer, Stream_t1242 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
extern "C" Stream_t1242 * ReceiveRecordAsyncResult_get_Record_m7417 (ReceiveRecordAsyncResult_t1240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
extern "C" ByteU5BU5D_t337* ReceiveRecordAsyncResult_get_ResultingBuffer_m7418 (ReceiveRecordAsyncResult_t1240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
extern "C" ByteU5BU5D_t337* ReceiveRecordAsyncResult_get_InitialBuffer_m7419 (ReceiveRecordAsyncResult_t1240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
extern "C" Object_t * ReceiveRecordAsyncResult_get_AsyncState_m7420 (ReceiveRecordAsyncResult_t1240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
extern "C" Exception_t75 * ReceiveRecordAsyncResult_get_AsyncException_m7421 (ReceiveRecordAsyncResult_t1240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
extern "C" bool ReceiveRecordAsyncResult_get_CompletedWithError_m7422 (ReceiveRecordAsyncResult_t1240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t1294 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m7423 (ReceiveRecordAsyncResult_t1240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
extern "C" bool ReceiveRecordAsyncResult_get_IsCompleted_m7424 (ReceiveRecordAsyncResult_t1240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m7425 (ReceiveRecordAsyncResult_t1240 * __this, Exception_t75 * ___ex, ByteU5BU5D_t337* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
extern "C" void ReceiveRecordAsyncResult_SetComplete_m7426 (ReceiveRecordAsyncResult_t1240 * __this, Exception_t75 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m7427 (ReceiveRecordAsyncResult_t1240 * __this, ByteU5BU5D_t337* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
