#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// InvEquipment
struct InvEquipment_t169;

#include "AssemblyU2DCSharp_UIItemSlot.h"
#include "AssemblyU2DCSharp_InvBaseItem_Slot.h"

// UIEquipmentSlot
struct  UIEquipmentSlot_t174  : public UIItemSlot_t175
{
	// InvEquipment UIEquipmentSlot::equipment
	InvEquipment_t169 * ___equipment_11;
	// InvBaseItem/Slot UIEquipmentSlot::slot
	int32_t ___slot_12;
};
