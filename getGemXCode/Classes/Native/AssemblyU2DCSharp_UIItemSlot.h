#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UISprite
struct UISprite_t172;
// UIWidget
struct UIWidget_t176;
// UILabel
struct UILabel_t177;
// UnityEngine.AudioClip
struct AudioClip_t70;
// InvGameItem
struct InvGameItem_t178;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// UIItemSlot
struct  UIItemSlot_t175  : public MonoBehaviour_t6
{
	// UISprite UIItemSlot::icon
	UISprite_t172 * ___icon_2;
	// UIWidget UIItemSlot::background
	UIWidget_t176 * ___background_3;
	// UILabel UIItemSlot::label
	UILabel_t177 * ___label_4;
	// UnityEngine.AudioClip UIItemSlot::grabSound
	AudioClip_t70 * ___grabSound_5;
	// UnityEngine.AudioClip UIItemSlot::placeSound
	AudioClip_t70 * ___placeSound_6;
	// UnityEngine.AudioClip UIItemSlot::errorSound
	AudioClip_t70 * ___errorSound_7;
	// InvGameItem UIItemSlot::mItem
	InvGameItem_t178 * ___mItem_8;
	// System.String UIItemSlot::mText
	String_t* ___mText_9;
};
struct UIItemSlot_t175_StaticFields{
	// InvGameItem UIItemSlot::mDraggedItem
	InvGameItem_t178 * ___mDraggedItem_10;
};
