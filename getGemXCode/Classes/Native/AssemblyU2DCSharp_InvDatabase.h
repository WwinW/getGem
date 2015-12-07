#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// InvDatabase[]
struct InvDatabaseU5BU5D_t188;
// System.Collections.Generic.List`1<InvBaseItem>
struct List_1_t187;
// UIAtlas
struct UIAtlas_t173;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// InvDatabase
struct  InvDatabase_t186  : public MonoBehaviour_t6
{
	// System.Int32 InvDatabase::databaseID
	int32_t ___databaseID_4;
	// System.Collections.Generic.List`1<InvBaseItem> InvDatabase::items
	List_1_t187 * ___items_5;
	// UIAtlas InvDatabase::iconAtlas
	UIAtlas_t173 * ___iconAtlas_6;
};
struct InvDatabase_t186_StaticFields{
	// InvDatabase[] InvDatabase::mList
	InvDatabaseU5BU5D_t188* ___mList_2;
	// System.Boolean InvDatabase::mIsDirty
	bool ___mIsDirty_3;
};
