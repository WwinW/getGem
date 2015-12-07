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

// InvDatabase
struct InvDatabase_t186;
// InvDatabase[]
struct InvDatabaseU5BU5D_t188;
// InvBaseItem
struct InvBaseItem_t184;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void InvDatabase::.ctor()
extern "C" void InvDatabase__ctor_m939 (InvDatabase_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InvDatabase::.cctor()
extern "C" void InvDatabase__cctor_m940 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvDatabase[] InvDatabase::get_list()
extern "C" InvDatabaseU5BU5D_t188* InvDatabase_get_list_m941 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InvDatabase::OnEnable()
extern "C" void InvDatabase_OnEnable_m942 (InvDatabase_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InvDatabase::OnDisable()
extern "C" void InvDatabase_OnDisable_m943 (InvDatabase_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvBaseItem InvDatabase::GetItem(System.Int32)
extern "C" InvBaseItem_t184 * InvDatabase_GetItem_m944 (InvDatabase_t186 * __this, int32_t ___id16, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvDatabase InvDatabase::GetDatabase(System.Int32)
extern "C" InvDatabase_t186 * InvDatabase_GetDatabase_m945 (Object_t * __this /* static, unused */, int32_t ___dbID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvBaseItem InvDatabase::FindByID(System.Int32)
extern "C" InvBaseItem_t184 * InvDatabase_FindByID_m946 (Object_t * __this /* static, unused */, int32_t ___id32, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvBaseItem InvDatabase::FindByName(System.String)
extern "C" InvBaseItem_t184 * InvDatabase_FindByName_m947 (Object_t * __this /* static, unused */, String_t* ___exact, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 InvDatabase::FindItemID(InvBaseItem)
extern "C" int32_t InvDatabase_FindItemID_m948 (Object_t * __this /* static, unused */, InvBaseItem_t184 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
