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

// System.String
struct String_t;
// System.Reflection.MethodBase
struct MethodBase_t1116;
// System.Type
struct Type_t;
// System.Reflection.Assembly
struct Assembly_t1496;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Runtime.Remoting.SoapServices::.cctor()
extern "C" void SoapServices__cctor_m12141 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.SoapServices::get_XmlNsForClrTypeWithAssembly()
extern "C" String_t* SoapServices_get_XmlNsForClrTypeWithAssembly_m12142 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.SoapServices::get_XmlNsForClrTypeWithNs()
extern "C" String_t* SoapServices_get_XmlNsForClrTypeWithNs_m12143 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.SoapServices::get_XmlNsForClrTypeWithNsAndAssembly()
extern "C" String_t* SoapServices_get_XmlNsForClrTypeWithNsAndAssembly_m12144 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.SoapServices::CodeXmlNamespaceForClrTypeNamespace(System.String,System.String)
extern "C" String_t* SoapServices_CodeXmlNamespaceForClrTypeNamespace_m12145 (Object_t * __this /* static, unused */, String_t* ___typeNamespace, String_t* ___assemblyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.SoapServices::GetNameKey(System.String,System.String)
extern "C" String_t* SoapServices_GetNameKey_m12146 (Object_t * __this /* static, unused */, String_t* ___name, String_t* ___namspace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.SoapServices::GetAssemblyName(System.Reflection.MethodBase)
extern "C" String_t* SoapServices_GetAssemblyName_m12147 (Object_t * __this /* static, unused */, MethodBase_t1116 * ___mb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.SoapServices::GetXmlElementForInteropType(System.Type,System.String&,System.String&)
extern "C" bool SoapServices_GetXmlElementForInteropType_m12148 (Object_t * __this /* static, unused */, Type_t * ___type, String_t** ___xmlElement, String_t** ___xmlNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.SoapServices::GetXmlNamespaceForMethodCall(System.Reflection.MethodBase)
extern "C" String_t* SoapServices_GetXmlNamespaceForMethodCall_m12149 (Object_t * __this /* static, unused */, MethodBase_t1116 * ___mb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.SoapServices::GetXmlNamespaceForMethodResponse(System.Reflection.MethodBase)
extern "C" String_t* SoapServices_GetXmlNamespaceForMethodResponse_m12150 (Object_t * __this /* static, unused */, MethodBase_t1116 * ___mb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.SoapServices::GetXmlTypeForInteropType(System.Type,System.String&,System.String&)
extern "C" bool SoapServices_GetXmlTypeForInteropType_m12151 (Object_t * __this /* static, unused */, Type_t * ___type, String_t** ___xmlType, String_t** ___xmlTypeNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.SoapServices::PreLoad(System.Reflection.Assembly)
extern "C" void SoapServices_PreLoad_m12152 (Object_t * __this /* static, unused */, Assembly_t1496 * ___assembly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.SoapServices::PreLoad(System.Type)
extern "C" void SoapServices_PreLoad_m12153 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.SoapServices::RegisterInteropXmlElement(System.String,System.String,System.Type)
extern "C" void SoapServices_RegisterInteropXmlElement_m12154 (Object_t * __this /* static, unused */, String_t* ___xmlElement, String_t* ___xmlNamespace, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.SoapServices::RegisterInteropXmlType(System.String,System.String,System.Type)
extern "C" void SoapServices_RegisterInteropXmlType_m12155 (Object_t * __this /* static, unused */, String_t* ___xmlType, String_t* ___xmlTypeNamespace, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.SoapServices::EncodeNs(System.String)
extern "C" String_t* SoapServices_EncodeNs_m12156 (Object_t * __this /* static, unused */, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
