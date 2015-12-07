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

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t1380;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1189;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t1381;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1280;
// System.Security.Cryptography.Oid
struct Oid_t1382;
// System.Byte[]
struct ByteU5BU5D_t337;
// System.Security.Cryptography.DSA
struct DSA_t1190;
// System.Security.Cryptography.RSA
struct RSA_t1183;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m8079 (PublicKey_t1380 * __this, X509Certificate_t1189 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t1381 * PublicKey_get_EncodedKeyValue_m8080 (PublicKey_t1380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t1381 * PublicKey_get_EncodedParameters_m8081 (PublicKey_t1380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t1280 * PublicKey_get_Key_m8082 (PublicKey_t1380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t1382 * PublicKey_get_Oid_m8083 (PublicKey_t1380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t337* PublicKey_GetUnsignedBigInteger_m8084 (Object_t * __this /* static, unused */, ByteU5BU5D_t337* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t1190 * PublicKey_DecodeDSA_m8085 (Object_t * __this /* static, unused */, ByteU5BU5D_t337* ___rawPublicKey, ByteU5BU5D_t337* ___rawParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t1183 * PublicKey_DecodeRSA_m8086 (Object_t * __this /* static, unused */, ByteU5BU5D_t337* ___rawPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
