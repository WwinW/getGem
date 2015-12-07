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

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t1569;
// Mono.Math.BigInteger
struct BigInteger_t1570;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m9827 (ModulusRing_t1569 * __this, BigInteger_t1570 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m9828 (ModulusRing_t1569 * __this, BigInteger_t1570 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1570 * ModulusRing_Multiply_m9829 (ModulusRing_t1569 * __this, BigInteger_t1570 * ___a, BigInteger_t1570 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1570 * ModulusRing_Difference_m9830 (ModulusRing_t1569 * __this, BigInteger_t1570 * ___a, BigInteger_t1570 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1570 * ModulusRing_Pow_m9831 (ModulusRing_t1569 * __this, BigInteger_t1570 * ___a, BigInteger_t1570 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t1570 * ModulusRing_Pow_m9832 (ModulusRing_t1569 * __this, uint32_t ___b, BigInteger_t1570 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
