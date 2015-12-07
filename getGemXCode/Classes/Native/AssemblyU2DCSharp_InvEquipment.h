#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// InvGameItem[]
struct InvGameItemU5BU5D_t189;
// InvAttachmentPoint[]
struct InvAttachmentPointU5BU5D_t190;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// InvEquipment
struct  InvEquipment_t169  : public MonoBehaviour_t6
{
	// InvGameItem[] InvEquipment::mItems
	InvGameItemU5BU5D_t189* ___mItems_2;
	// InvAttachmentPoint[] InvEquipment::mAttachments
	InvAttachmentPointU5BU5D_t190* ___mAttachments_3;
};
