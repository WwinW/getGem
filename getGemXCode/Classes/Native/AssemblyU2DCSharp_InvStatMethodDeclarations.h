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

// InvStat
struct InvStat_t194;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_InvStat_Identifier.h"

// System.Void InvStat::.ctor()
extern "C" void InvStat__ctor_m966 (InvStat_t194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String InvStat::GetName(InvStat/Identifier)
extern "C" String_t* InvStat_GetName_m967 (Object_t * __this /* static, unused */, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String InvStat::GetDescription(InvStat/Identifier)
extern "C" String_t* InvStat_GetDescription_m968 (Object_t * __this /* static, unused */, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 InvStat::CompareArmor(InvStat,InvStat)
extern "C" int32_t InvStat_CompareArmor_m969 (Object_t * __this /* static, unused */, InvStat_t194 * ___a, InvStat_t194 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 InvStat::CompareWeapon(InvStat,InvStat)
extern "C" int32_t InvStat_CompareWeapon_m970 (Object_t * __this /* static, unused */, InvStat_t194 * ___a, InvStat_t194 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
