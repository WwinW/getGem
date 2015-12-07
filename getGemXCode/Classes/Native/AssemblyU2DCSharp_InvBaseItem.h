#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Collections.Generic.List`1<InvStat>
struct List_1_t185;
// UnityEngine.GameObject
struct GameObject_t24;
// UIAtlas
struct UIAtlas_t173;

#include "mscorlib_System_Object.h"
#include "AssemblyU2DCSharp_InvBaseItem_Slot.h"
#include "UnityEngine_UnityEngine_Color.h"

// InvBaseItem
struct  InvBaseItem_t184  : public Object_t
{
	// System.Int32 InvBaseItem::id16
	int32_t ___id16_0;
	// System.String InvBaseItem::name
	String_t* ___name_1;
	// System.String InvBaseItem::description
	String_t* ___description_2;
	// InvBaseItem/Slot InvBaseItem::slot
	int32_t ___slot_3;
	// System.Int32 InvBaseItem::minItemLevel
	int32_t ___minItemLevel_4;
	// System.Int32 InvBaseItem::maxItemLevel
	int32_t ___maxItemLevel_5;
	// System.Collections.Generic.List`1<InvStat> InvBaseItem::stats
	List_1_t185 * ___stats_6;
	// UnityEngine.GameObject InvBaseItem::attachment
	GameObject_t24 * ___attachment_7;
	// UnityEngine.Color InvBaseItem::color
	Color_t33  ___color_8;
	// UIAtlas InvBaseItem::iconAtlas
	UIAtlas_t173 * ___iconAtlas_9;
	// System.String InvBaseItem::iconName
	String_t* ___iconName_10;
};
