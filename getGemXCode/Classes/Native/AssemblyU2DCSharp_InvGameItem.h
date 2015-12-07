#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// InvBaseItem
struct InvBaseItem_t184;

#include "mscorlib_System_Object.h"
#include "AssemblyU2DCSharp_InvGameItem_Quality.h"

// InvGameItem
struct  InvGameItem_t178  : public Object_t
{
	// System.Int32 InvGameItem::mBaseItemID
	int32_t ___mBaseItemID_0;
	// InvGameItem/Quality InvGameItem::quality
	int32_t ___quality_1;
	// System.Int32 InvGameItem::itemLevel
	int32_t ___itemLevel_2;
	// InvBaseItem InvGameItem::mBaseItem
	InvBaseItem_t184 * ___mBaseItem_3;
};
