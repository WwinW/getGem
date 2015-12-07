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

// System.Uri
struct Uri_t1321;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1094;
// System.Object
struct Object_t;
// System.UriParser
struct UriParser_t1475;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "System_System_UriHostNameType.h"
#include "System_System_UriPartial.h"
#include "System_System_UriKind.h"

// System.Void System.Uri::.ctor(System.String)
extern "C" void Uri__ctor_m8686 (Uri_t1321 * __this, String_t* ___uriString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Uri__ctor_m8687 (Uri_t1321 * __this, SerializationInfo_t1094 * ___serializationInfo, StreamingContext_t1095  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::.ctor(System.String,System.Boolean)
extern "C" void Uri__ctor_m8688 (Uri_t1321 * __this, String_t* ___uriString, bool ___dontEscape, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::.cctor()
extern "C" void Uri__cctor_m8689 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Uri_System_Runtime_Serialization_ISerializable_GetObjectData_m8690 (Uri_t1321 * __this, SerializationInfo_t1094 * ___info, StreamingContext_t1095  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_AbsoluteUri()
extern "C" String_t* Uri_get_AbsoluteUri_m8691 (Uri_t1321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_Authority()
extern "C" String_t* Uri_get_Authority_m8692 (Uri_t1321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_Host()
extern "C" String_t* Uri_get_Host_m7831 (Uri_t1321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::get_IsFile()
extern "C" bool Uri_get_IsFile_m8693 (Uri_t1321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::get_IsLoopback()
extern "C" bool Uri_get_IsLoopback_m8694 (Uri_t1321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::get_IsUnc()
extern "C" bool Uri_get_IsUnc_m8695 (Uri_t1321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_Scheme()
extern "C" String_t* Uri_get_Scheme_m8696 (Uri_t1321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::get_IsAbsoluteUri()
extern "C" bool Uri_get_IsAbsoluteUri_m8697 (Uri_t1321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UriHostNameType System.Uri::CheckHostName(System.String)
extern "C" int32_t Uri_CheckHostName_m8698 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsIPv4Address(System.String)
extern "C" bool Uri_IsIPv4Address_m8699 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsDomainAddress(System.String)
extern "C" bool Uri_IsDomainAddress_m8700 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::CheckSchemeName(System.String)
extern "C" bool Uri_CheckSchemeName_m8701 (Object_t * __this /* static, unused */, String_t* ___schemeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsAlpha(System.Char)
extern "C" bool Uri_IsAlpha_m8702 (Object_t * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::Equals(System.Object)
extern "C" bool Uri_Equals_m8703 (Uri_t1321 * __this, Object_t * ___comparant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::InternalEquals(System.Uri)
extern "C" bool Uri_InternalEquals_m8704 (Uri_t1321 * __this, Uri_t1321 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Uri::GetHashCode()
extern "C" int32_t Uri_GetHashCode_m8705 (Uri_t1321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::GetLeftPart(System.UriPartial)
extern "C" String_t* Uri_GetLeftPart_m8706 (Uri_t1321 * __this, int32_t ___part, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Uri::FromHex(System.Char)
extern "C" int32_t Uri_FromHex_m8707 (Object_t * __this /* static, unused */, uint16_t ___digit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::HexEscape(System.Char)
extern "C" String_t* Uri_HexEscape_m8708 (Object_t * __this /* static, unused */, uint16_t ___character, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsHexDigit(System.Char)
extern "C" bool Uri_IsHexDigit_m8709 (Object_t * __this /* static, unused */, uint16_t ___digit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsHexEncoding(System.String,System.Int32)
extern "C" bool Uri_IsHexEncoding_m8710 (Object_t * __this /* static, unused */, String_t* ___pattern, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::AppendQueryAndFragment(System.String&)
extern "C" void Uri_AppendQueryAndFragment_m8711 (Uri_t1321 * __this, String_t** ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::ToString()
extern "C" String_t* Uri_ToString_m8712 (Uri_t1321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::EscapeString(System.String)
extern "C" String_t* Uri_EscapeString_m8713 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::EscapeString(System.String,System.Boolean,System.Boolean,System.Boolean)
extern "C" String_t* Uri_EscapeString_m8714 (Object_t * __this /* static, unused */, String_t* ___str, bool ___escapeReserved, bool ___escapeHex, bool ___escapeBrackets, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::ParseUri(System.UriKind)
extern "C" void Uri_ParseUri_m8715 (Uri_t1321 * __this, int32_t ___kind, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::Unescape(System.String)
extern "C" String_t* Uri_Unescape_m8716 (Uri_t1321 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::Unescape(System.String,System.Boolean)
extern "C" String_t* Uri_Unescape_m8717 (Object_t * __this /* static, unused */, String_t* ___str, bool ___excludeSpecial, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::ParseAsWindowsUNC(System.String)
extern "C" void Uri_ParseAsWindowsUNC_m8718 (Uri_t1321 * __this, String_t* ___uriString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::ParseAsWindowsAbsoluteFilePath(System.String)
extern "C" String_t* Uri_ParseAsWindowsAbsoluteFilePath_m8719 (Uri_t1321 * __this, String_t* ___uriString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::ParseAsUnixAbsoluteFilePath(System.String)
extern "C" void Uri_ParseAsUnixAbsoluteFilePath_m8720 (Uri_t1321 * __this, String_t* ___uriString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::Parse(System.UriKind,System.String)
extern "C" void Uri_Parse_m8721 (Uri_t1321 * __this, int32_t ___kind, String_t* ___uriString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::ParseNoExceptions(System.UriKind,System.String)
extern "C" String_t* Uri_ParseNoExceptions_m8722 (Uri_t1321 * __this, int32_t ___kind, String_t* ___uriString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::CompactEscaped(System.String)
extern "C" bool Uri_CompactEscaped_m8723 (Object_t * __this /* static, unused */, String_t* ___scheme, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::Reduce(System.String,System.Boolean)
extern "C" String_t* Uri_Reduce_m8724 (Object_t * __this /* static, unused */, String_t* ___path, bool ___compact_escaped, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Uri::HexUnescapeMultiByte(System.String,System.Int32&,System.Char&)
extern "C" uint16_t Uri_HexUnescapeMultiByte_m8725 (Object_t * __this /* static, unused */, String_t* ___pattern, int32_t* ___index, uint16_t* ___surrogate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::GetSchemeDelimiter(System.String)
extern "C" String_t* Uri_GetSchemeDelimiter_m8726 (Object_t * __this /* static, unused */, String_t* ___scheme, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Uri::GetDefaultPort(System.String)
extern "C" int32_t Uri_GetDefaultPort_m8727 (Object_t * __this /* static, unused */, String_t* ___scheme, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::GetOpaqueWiseSchemeDelimiter()
extern "C" String_t* Uri_GetOpaqueWiseSchemeDelimiter_m8728 (Uri_t1321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsPredefinedScheme(System.String)
extern "C" bool Uri_IsPredefinedScheme_m8729 (Object_t * __this /* static, unused */, String_t* ___scheme, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UriParser System.Uri::get_Parser()
extern "C" UriParser_t1475 * Uri_get_Parser_m8730 (Uri_t1321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::EnsureAbsoluteUri()
extern "C" void Uri_EnsureAbsoluteUri_m8731 (Uri_t1321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::op_Equality(System.Uri,System.Uri)
extern "C" bool Uri_op_Equality_m8732 (Object_t * __this /* static, unused */, Uri_t1321 * ___u1, Uri_t1321 * ___u2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
