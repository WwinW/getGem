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

// System.Byte[]
struct ByteU5BU5D_t337;
// System.Security.Cryptography.RSA
struct RSA_t1183;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t1175;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Cryptography.PKCS1::.cctor()
extern "C" void PKCS1__cctor_m7002 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Compare(System.Byte[],System.Byte[])
extern "C" bool PKCS1_Compare_m7003 (Object_t * __this /* static, unused */, ByteU5BU5D_t337* ___array1, ByteU5BU5D_t337* ___array2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::I2OSP(System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t337* PKCS1_I2OSP_m7004 (Object_t * __this /* static, unused */, ByteU5BU5D_t337* ___x, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::OS2IP(System.Byte[])
extern "C" ByteU5BU5D_t337* PKCS1_OS2IP_m7005 (Object_t * __this /* static, unused */, ByteU5BU5D_t337* ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSASP1(System.Security.Cryptography.RSA,System.Byte[])
extern "C" ByteU5BU5D_t337* PKCS1_RSASP1_m7006 (Object_t * __this /* static, unused */, RSA_t1183 * ___rsa, ByteU5BU5D_t337* ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSAVP1(System.Security.Cryptography.RSA,System.Byte[])
extern "C" ByteU5BU5D_t337* PKCS1_RSAVP1_m7007 (Object_t * __this /* static, unused */, RSA_t1183 * ___rsa, ByteU5BU5D_t337* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Sign_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[])
extern "C" ByteU5BU5D_t337* PKCS1_Sign_v15_m7008 (Object_t * __this /* static, unused */, RSA_t1183 * ___rsa, HashAlgorithm_t1175 * ___hash, ByteU5BU5D_t337* ___hashValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[])
extern "C" bool PKCS1_Verify_v15_m7009 (Object_t * __this /* static, unused */, RSA_t1183 * ___rsa, HashAlgorithm_t1175 * ___hash, ByteU5BU5D_t337* ___hashValue, ByteU5BU5D_t337* ___signature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[],System.Boolean)
extern "C" bool PKCS1_Verify_v15_m7010 (Object_t * __this /* static, unused */, RSA_t1183 * ___rsa, HashAlgorithm_t1175 * ___hash, ByteU5BU5D_t337* ___hashValue, ByteU5BU5D_t337* ___signature, bool ___tryNonStandardEncoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Encode_v15(System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t337* PKCS1_Encode_v15_m7011 (Object_t * __this /* static, unused */, HashAlgorithm_t1175 * ___hash, ByteU5BU5D_t337* ___hashValue, int32_t ___emLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
