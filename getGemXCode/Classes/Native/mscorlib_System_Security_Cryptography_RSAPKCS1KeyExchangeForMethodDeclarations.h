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

// System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter
struct RSAPKCS1KeyExchangeFormatter_t1331;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1280;
// System.Byte[]
struct ByteU5BU5D_t337;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSAPKCS1KeyExchangeFormatter__ctor_m7862 (RSAPKCS1KeyExchangeFormatter_t1331 * __this, AsymmetricAlgorithm_t1280 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::CreateKeyExchange(System.Byte[])
extern "C" ByteU5BU5D_t337* RSAPKCS1KeyExchangeFormatter_CreateKeyExchange_m12510 (RSAPKCS1KeyExchangeFormatter_t1331 * __this, ByteU5BU5D_t337* ___rgbData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::SetRSAKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSAPKCS1KeyExchangeFormatter_SetRSAKey_m12511 (RSAPKCS1KeyExchangeFormatter_t1331 * __this, AsymmetricAlgorithm_t1280 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
