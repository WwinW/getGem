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

// Mono.Security.Protocol.Tls.CipherSuite
struct CipherSuite_t1218;
// System.String
struct String_t;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t1146;
// System.Security.Cryptography.KeyedHashAlgorithm
struct KeyedHashAlgorithm_t1212;
// Mono.Security.Protocol.Tls.Context
struct Context_t1219;
// System.Byte[]
struct ByteU5BU5D_t337;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherAlgorithmType.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_HashAlgorithmType.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ExchangeAlgorithmTy.h"
#include "mscorlib_System_Security_Cryptography_CipherMode.h"

// System.Void Mono.Security.Protocol.Tls.CipherSuite::.ctor(System.Int16,System.String,Mono.Security.Protocol.Tls.CipherAlgorithmType,Mono.Security.Protocol.Tls.HashAlgorithmType,Mono.Security.Protocol.Tls.ExchangeAlgorithmType,System.Boolean,System.Boolean,System.Byte,System.Byte,System.Int16,System.Byte,System.Byte)
extern "C" void CipherSuite__ctor_m7259 (CipherSuite_t1218 * __this, int16_t ___code, String_t* ___name, int32_t ___cipherAlgorithmType, int32_t ___hashAlgorithmType, int32_t ___exchangeAlgorithmType, bool ___exportable, bool ___blockMode, uint8_t ___keyMaterialSize, uint8_t ___expandedKeyMaterialSize, int16_t ___effectiveKeyBits, uint8_t ___ivSize, uint8_t ___blockSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::.cctor()
extern "C" void CipherSuite__cctor_m7260 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform Mono.Security.Protocol.Tls.CipherSuite::get_EncryptionCipher()
extern "C" Object_t * CipherSuite_get_EncryptionCipher_m7261 (CipherSuite_t1218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform Mono.Security.Protocol.Tls.CipherSuite::get_DecryptionCipher()
extern "C" Object_t * CipherSuite_get_DecryptionCipher_m7262 (CipherSuite_t1218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.KeyedHashAlgorithm Mono.Security.Protocol.Tls.CipherSuite::get_ClientHMAC()
extern "C" KeyedHashAlgorithm_t1212 * CipherSuite_get_ClientHMAC_m7263 (CipherSuite_t1218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.KeyedHashAlgorithm Mono.Security.Protocol.Tls.CipherSuite::get_ServerHMAC()
extern "C" KeyedHashAlgorithm_t1212 * CipherSuite_get_ServerHMAC_m7264 (CipherSuite_t1218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherAlgorithmType Mono.Security.Protocol.Tls.CipherSuite::get_CipherAlgorithmType()
extern "C" int32_t CipherSuite_get_CipherAlgorithmType_m7265 (CipherSuite_t1218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Protocol.Tls.CipherSuite::get_HashAlgorithmName()
extern "C" String_t* CipherSuite_get_HashAlgorithmName_m7266 (CipherSuite_t1218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.HashAlgorithmType Mono.Security.Protocol.Tls.CipherSuite::get_HashAlgorithmType()
extern "C" int32_t CipherSuite_get_HashAlgorithmType_m7267 (CipherSuite_t1218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.CipherSuite::get_HashSize()
extern "C" int32_t CipherSuite_get_HashSize_m7268 (CipherSuite_t1218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ExchangeAlgorithmType Mono.Security.Protocol.Tls.CipherSuite::get_ExchangeAlgorithmType()
extern "C" int32_t CipherSuite_get_ExchangeAlgorithmType_m7269 (CipherSuite_t1218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.CipherMode Mono.Security.Protocol.Tls.CipherSuite::get_CipherMode()
extern "C" int32_t CipherSuite_get_CipherMode_m7270 (CipherSuite_t1218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Mono.Security.Protocol.Tls.CipherSuite::get_Code()
extern "C" int16_t CipherSuite_get_Code_m7271 (CipherSuite_t1218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Protocol.Tls.CipherSuite::get_Name()
extern "C" String_t* CipherSuite_get_Name_m7272 (CipherSuite_t1218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.CipherSuite::get_IsExportable()
extern "C" bool CipherSuite_get_IsExportable_m7273 (CipherSuite_t1218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.Protocol.Tls.CipherSuite::get_KeyMaterialSize()
extern "C" uint8_t CipherSuite_get_KeyMaterialSize_m7274 (CipherSuite_t1218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.CipherSuite::get_KeyBlockSize()
extern "C" int32_t CipherSuite_get_KeyBlockSize_m7275 (CipherSuite_t1218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.Protocol.Tls.CipherSuite::get_ExpandedKeyMaterialSize()
extern "C" uint8_t CipherSuite_get_ExpandedKeyMaterialSize_m7276 (CipherSuite_t1218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Mono.Security.Protocol.Tls.CipherSuite::get_EffectiveKeyBits()
extern "C" int16_t CipherSuite_get_EffectiveKeyBits_m7277 (CipherSuite_t1218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.Protocol.Tls.CipherSuite::get_IvSize()
extern "C" uint8_t CipherSuite_get_IvSize_m7278 (CipherSuite_t1218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.CipherSuite::get_Context()
extern "C" Context_t1219 * CipherSuite_get_Context_m7279 (CipherSuite_t1218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::set_Context(Mono.Security.Protocol.Tls.Context)
extern "C" void CipherSuite_set_Context_m7280 (CipherSuite_t1218 * __this, Context_t1219 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::Write(System.Byte[],System.Int32,System.Int16)
extern "C" void CipherSuite_Write_m7281 (CipherSuite_t1218 * __this, ByteU5BU5D_t337* ___array, int32_t ___offset, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::Write(System.Byte[],System.Int32,System.UInt64)
extern "C" void CipherSuite_Write_m7282 (CipherSuite_t1218 * __this, ByteU5BU5D_t337* ___array, int32_t ___offset, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::InitializeCipher()
extern "C" void CipherSuite_InitializeCipher_m7283 (CipherSuite_t1218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.CipherSuite::EncryptRecord(System.Byte[],System.Byte[])
extern "C" ByteU5BU5D_t337* CipherSuite_EncryptRecord_m7284 (CipherSuite_t1218 * __this, ByteU5BU5D_t337* ___fragment, ByteU5BU5D_t337* ___mac, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::DecryptRecord(System.Byte[],System.Byte[]&,System.Byte[]&)
extern "C" void CipherSuite_DecryptRecord_m7285 (CipherSuite_t1218 * __this, ByteU5BU5D_t337* ___fragment, ByteU5BU5D_t337** ___dcrFragment, ByteU5BU5D_t337** ___dcrMAC, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.CipherSuite::CreatePremasterSecret()
extern "C" ByteU5BU5D_t337* CipherSuite_CreatePremasterSecret_m7286 (CipherSuite_t1218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.CipherSuite::PRF(System.Byte[],System.String,System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t337* CipherSuite_PRF_m7287 (CipherSuite_t1218 * __this, ByteU5BU5D_t337* ___secret, String_t* ___label, ByteU5BU5D_t337* ___data, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.CipherSuite::Expand(System.String,System.Byte[],System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t337* CipherSuite_Expand_m7288 (CipherSuite_t1218 * __this, String_t* ___hashName, ByteU5BU5D_t337* ___secret, ByteU5BU5D_t337* ___seed, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::createEncryptionCipher()
extern "C" void CipherSuite_createEncryptionCipher_m7289 (CipherSuite_t1218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::createDecryptionCipher()
extern "C" void CipherSuite_createDecryptionCipher_m7290 (CipherSuite_t1218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
