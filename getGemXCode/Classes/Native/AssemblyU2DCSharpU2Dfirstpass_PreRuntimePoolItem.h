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

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// PreRuntimePoolItem
struct  PreRuntimePoolItem_t5  : public MonoBehaviour_t6
{
	// System.String PreRuntimePoolItem::poolName
	String_t* ___poolName_2;
	// System.String PreRuntimePoolItem::prefabName
	String_t* ___prefabName_3;
	// System.Boolean PreRuntimePoolItem::despawnOnStart
	bool ___despawnOnStart_4;
	// System.Boolean PreRuntimePoolItem::doNotReparent
	bool ___doNotReparent_5;
};
