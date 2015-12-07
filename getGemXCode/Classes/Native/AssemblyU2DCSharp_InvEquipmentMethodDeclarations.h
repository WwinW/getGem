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

// InvEquipment
struct InvEquipment_t169;
// InvGameItem[]
struct InvGameItemU5BU5D_t189;
// InvGameItem
struct InvGameItem_t178;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_InvBaseItem_Slot.h"

// System.Void InvEquipment::.ctor()
extern "C" void InvEquipment__ctor_m949 (InvEquipment_t169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvGameItem[] InvEquipment::get_equippedItems()
extern "C" InvGameItemU5BU5D_t189* InvEquipment_get_equippedItems_m950 (InvEquipment_t169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvGameItem InvEquipment::Replace(InvBaseItem/Slot,InvGameItem)
extern "C" InvGameItem_t178 * InvEquipment_Replace_m951 (InvEquipment_t169 * __this, int32_t ___slot, InvGameItem_t178 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvGameItem InvEquipment::Equip(InvGameItem)
extern "C" InvGameItem_t178 * InvEquipment_Equip_m952 (InvEquipment_t169 * __this, InvGameItem_t178 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvGameItem InvEquipment::Unequip(InvGameItem)
extern "C" InvGameItem_t178 * InvEquipment_Unequip_m953 (InvEquipment_t169 * __this, InvGameItem_t178 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvGameItem InvEquipment::Unequip(InvBaseItem/Slot)
extern "C" InvGameItem_t178 * InvEquipment_Unequip_m954 (InvEquipment_t169 * __this, int32_t ___slot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InvEquipment::HasEquipped(InvGameItem)
extern "C" bool InvEquipment_HasEquipped_m955 (InvEquipment_t169 * __this, InvGameItem_t178 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InvEquipment::HasEquipped(InvBaseItem/Slot)
extern "C" bool InvEquipment_HasEquipped_m956 (InvEquipment_t169 * __this, int32_t ___slot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvGameItem InvEquipment::GetItem(InvBaseItem/Slot)
extern "C" InvGameItem_t178 * InvEquipment_GetItem_m957 (InvEquipment_t169 * __this, int32_t ___slot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
