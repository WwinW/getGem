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

// System.Reflection.MethodBase
struct MethodBase_t1116;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t1895;
// System.Runtime.Remoting.Proxies.RealProxy
struct RealProxy_t1880;
// System.Runtime.Remoting.Messaging.IMethodMessage
struct IMethodMessage_t1870;
// System.Type[]
struct TypeU5BU5D_t1092;
// System.Runtime.Remoting.ActivatedClientTypeEntry
struct ActivatedClientTypeEntry_t1891;
// System.Object[]
struct ObjectU5BU5D_t72;
// System.Runtime.Remoting.Identity
struct Identity_t1888;
// System.Runtime.Remoting.ClientIdentity
struct ClientIdentity_t1896;
// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t1838;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t1535;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Remoting_WellKnownObjectMode.h"

// System.Void System.Runtime.Remoting.RemotingServices::.cctor()
extern "C" void RemotingServices__cctor_m12110 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::GetVirtualMethod(System.Type,System.Reflection.MethodBase)
extern "C" MethodBase_t1116 * RemotingServices_GetVirtualMethod_m12111 (Object_t * __this /* static, unused */, Type_t * ___type, MethodBase_t1116 * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.RemotingServices::IsTransparentProxy(System.Object)
extern "C" bool RemotingServices_IsTransparentProxy_m12112 (Object_t * __this /* static, unused */, Object_t * ___proxy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.RemotingServices::GetServerTypeForUri(System.String)
extern "C" Type_t * RemotingServices_GetServerTypeForUri_m12113 (Object_t * __this /* static, unused */, String_t* ___URI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::Unmarshal(System.Runtime.Remoting.ObjRef)
extern "C" Object_t * RemotingServices_Unmarshal_m12114 (Object_t * __this /* static, unused */, ObjRef_t1895 * ___objectRef, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::Unmarshal(System.Runtime.Remoting.ObjRef,System.Boolean)
extern "C" Object_t * RemotingServices_Unmarshal_m12115 (Object_t * __this /* static, unused */, ObjRef_t1895 * ___objectRef, bool ___fRefine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Proxies.RealProxy System.Runtime.Remoting.RemotingServices::GetRealProxy(System.Object)
extern "C" RealProxy_t1880 * RemotingServices_GetRealProxy_m12116 (Object_t * __this /* static, unused */, Object_t * ___proxy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::GetMethodBaseFromMethodMessage(System.Runtime.Remoting.Messaging.IMethodMessage)
extern "C" MethodBase_t1116 * RemotingServices_GetMethodBaseFromMethodMessage_m12117 (Object_t * __this /* static, unused */, Object_t * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::GetMethodBaseFromName(System.Type,System.String,System.Type[])
extern "C" MethodBase_t1116 * RemotingServices_GetMethodBaseFromName_m12118 (Object_t * __this /* static, unused */, Type_t * ___type, String_t* ___methodName, TypeU5BU5D_t1092* ___signature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::FindInterfaceMethod(System.Type,System.String,System.Type[])
extern "C" MethodBase_t1116 * RemotingServices_FindInterfaceMethod_m12119 (Object_t * __this /* static, unused */, Type_t * ___type, String_t* ___methodName, TypeU5BU5D_t1092* ___signature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::CreateClientProxy(System.Runtime.Remoting.ActivatedClientTypeEntry,System.Object[])
extern "C" Object_t * RemotingServices_CreateClientProxy_m12120 (Object_t * __this /* static, unused */, ActivatedClientTypeEntry_t1891 * ___entry, ObjectU5BU5D_t72* ___activationAttributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::CreateClientProxy(System.Type,System.String,System.Object[])
extern "C" Object_t * RemotingServices_CreateClientProxy_m12121 (Object_t * __this /* static, unused */, Type_t * ___objectType, String_t* ___url, ObjectU5BU5D_t72* ___activationAttributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::CreateClientProxyForContextBound(System.Type,System.Object[])
extern "C" Object_t * RemotingServices_CreateClientProxyForContextBound_m12122 (Object_t * __this /* static, unused */, Type_t * ___type, ObjectU5BU5D_t72* ___activationAttributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Identity System.Runtime.Remoting.RemotingServices::GetIdentityForUri(System.String)
extern "C" Identity_t1888 * RemotingServices_GetIdentityForUri_m12123 (Object_t * __this /* static, unused */, String_t* ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.RemotingServices::RemoveAppNameFromUri(System.String)
extern "C" String_t* RemotingServices_RemoveAppNameFromUri_m12124 (Object_t * __this /* static, unused */, String_t* ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ClientIdentity System.Runtime.Remoting.RemotingServices::GetOrCreateClientIdentity(System.Runtime.Remoting.ObjRef,System.Type,System.Object&)
extern "C" ClientIdentity_t1896 * RemotingServices_GetOrCreateClientIdentity_m12125 (Object_t * __this /* static, unused */, ObjRef_t1895 * ___objRef, Type_t * ___proxyType, Object_t ** ___clientProxy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.RemotingServices::GetClientChannelSinkChain(System.String,System.Object,System.String&)
extern "C" Object_t * RemotingServices_GetClientChannelSinkChain_m12126 (Object_t * __this /* static, unused */, String_t* ___url, Object_t * ___channelData, String_t** ___objectUri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ServerIdentity System.Runtime.Remoting.RemotingServices::CreateWellKnownServerIdentity(System.Type,System.String,System.Runtime.Remoting.WellKnownObjectMode)
extern "C" ServerIdentity_t1535 * RemotingServices_CreateWellKnownServerIdentity_m12127 (Object_t * __this /* static, unused */, Type_t * ___objectType, String_t* ___objectUri, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingServices::RegisterServerIdentity(System.Runtime.Remoting.ServerIdentity)
extern "C" void RemotingServices_RegisterServerIdentity_m12128 (Object_t * __this /* static, unused */, ServerIdentity_t1535 * ___identity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::GetProxyForRemoteObject(System.Runtime.Remoting.ObjRef,System.Type)
extern "C" Object_t * RemotingServices_GetProxyForRemoteObject_m12129 (Object_t * __this /* static, unused */, ObjRef_t1895 * ___objref, Type_t * ___classToProxy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::GetRemoteObject(System.Runtime.Remoting.ObjRef,System.Type)
extern "C" Object_t * RemotingServices_GetRemoteObject_m12130 (Object_t * __this /* static, unused */, ObjRef_t1895 * ___objRef, Type_t * ___proxyType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingServices::RegisterInternalChannels()
extern "C" void RemotingServices_RegisterInternalChannels_m12131 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingServices::DisposeIdentity(System.Runtime.Remoting.Identity)
extern "C" void RemotingServices_DisposeIdentity_m12132 (Object_t * __this /* static, unused */, Identity_t1888 * ___ident, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.RemotingServices::GetNormalizedUri(System.String)
extern "C" String_t* RemotingServices_GetNormalizedUri_m12133 (Object_t * __this /* static, unused */, String_t* ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
