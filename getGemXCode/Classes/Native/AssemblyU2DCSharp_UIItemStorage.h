#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t24;
// UIWidget
struct UIWidget_t176;
// System.Collections.Generic.List`1<InvGameItem>
struct List_1_t180;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// UIItemStorage
struct  UIItemStorage_t179  : public MonoBehaviour_t6
{
	// System.Int32 UIItemStorage::maxItemCount
	int32_t ___maxItemCount_2;
	// System.Int32 UIItemStorage::maxRows
	int32_t ___maxRows_3;
	// System.Int32 UIItemStorage::maxColumns
	int32_t ___maxColumns_4;
	// UnityEngine.GameObject UIItemStorage::template
	GameObject_t24 * ___template_5;
	// UIWidget UIItemStorage::background
	UIWidget_t176 * ___background_6;
	// System.Int32 UIItemStorage::spacing
	int32_t ___spacing_7;
	// System.Int32 UIItemStorage::padding
	int32_t ___padding_8;
	// System.Collections.Generic.List`1<InvGameItem> UIItemStorage::mItems
	List_1_t180 * ___mItems_9;
};
