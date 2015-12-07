#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIPopupList
struct UIPopupList_t226;
// UIAtlas
struct UIAtlas_t173;
// UIFont
struct UIFont_t295;
// UnityEngine.Font
struct Font_t296;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t90;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t297;
// System.Collections.Generic.List`1<EventDelegate>
struct List_1_t231;
// UIPanel
struct UIPanel_t266;
// UnityEngine.GameObject
struct GameObject_t24;
// UISprite
struct UISprite_t172;
// UILabel
struct UILabel_t177;
// System.Collections.Generic.List`1<UILabel>
struct List_1_t298;
// UIPopupList/LegacyEvent
struct LegacyEvent_t291;

#include "AssemblyU2DCSharp_UIWidgetContainer.h"
#include "UnityEngine_UnityEngine_FontStyle.h"
#include "AssemblyU2DCSharp_UIPopupList_Position.h"
#include "AssemblyU2DCSharp_NGUIText_Alignment.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "AssemblyU2DCSharp_UIPopupList_OpenOn.h"

// UIPopupList
struct  UIPopupList_t226  : public UIWidgetContainer_t239
{
	// UIAtlas UIPopupList::atlas
	UIAtlas_t173 * ___atlas_4;
	// UIFont UIPopupList::bitmapFont
	UIFont_t295 * ___bitmapFont_5;
	// UnityEngine.Font UIPopupList::trueTypeFont
	Font_t296 * ___trueTypeFont_6;
	// System.Int32 UIPopupList::fontSize
	int32_t ___fontSize_7;
	// UnityEngine.FontStyle UIPopupList::fontStyle
	int32_t ___fontStyle_8;
	// System.String UIPopupList::backgroundSprite
	String_t* ___backgroundSprite_9;
	// System.String UIPopupList::highlightSprite
	String_t* ___highlightSprite_10;
	// UIPopupList/Position UIPopupList::position
	int32_t ___position_11;
	// NGUIText/Alignment UIPopupList::alignment
	int32_t ___alignment_12;
	// System.Collections.Generic.List`1<System.String> UIPopupList::items
	List_1_t90 * ___items_13;
	// System.Collections.Generic.List`1<System.Object> UIPopupList::itemData
	List_1_t297 * ___itemData_14;
	// UnityEngine.Vector2 UIPopupList::padding
	Vector2_t54  ___padding_15;
	// UnityEngine.Color UIPopupList::textColor
	Color_t33  ___textColor_16;
	// UnityEngine.Color UIPopupList::backgroundColor
	Color_t33  ___backgroundColor_17;
	// UnityEngine.Color UIPopupList::highlightColor
	Color_t33  ___highlightColor_18;
	// System.Boolean UIPopupList::isAnimated
	bool ___isAnimated_19;
	// System.Boolean UIPopupList::isLocalized
	bool ___isLocalized_20;
	// UIPopupList/OpenOn UIPopupList::openOn
	int32_t ___openOn_21;
	// System.Collections.Generic.List`1<EventDelegate> UIPopupList::onChange
	List_1_t231 * ___onChange_22;
	// System.String UIPopupList::mSelectedItem
	String_t* ___mSelectedItem_23;
	// UIPanel UIPopupList::mPanel
	UIPanel_t266 * ___mPanel_24;
	// UnityEngine.GameObject UIPopupList::mChild
	GameObject_t24 * ___mChild_25;
	// UISprite UIPopupList::mBackground
	UISprite_t172 * ___mBackground_26;
	// UISprite UIPopupList::mHighlight
	UISprite_t172 * ___mHighlight_27;
	// UILabel UIPopupList::mHighlightedLabel
	UILabel_t177 * ___mHighlightedLabel_28;
	// System.Collections.Generic.List`1<UILabel> UIPopupList::mLabelList
	List_1_t298 * ___mLabelList_29;
	// System.Single UIPopupList::mBgBorder
	float ___mBgBorder_30;
	// UnityEngine.GameObject UIPopupList::mSelection
	GameObject_t24 * ___mSelection_31;
	// UnityEngine.GameObject UIPopupList::eventReceiver
	GameObject_t24 * ___eventReceiver_32;
	// System.String UIPopupList::functionName
	String_t* ___functionName_33;
	// System.Single UIPopupList::textScale
	float ___textScale_34;
	// UIFont UIPopupList::font
	UIFont_t295 * ___font_35;
	// UILabel UIPopupList::textLabel
	UILabel_t177 * ___textLabel_36;
	// UIPopupList/LegacyEvent UIPopupList::mLegacyEvent
	LegacyEvent_t291 * ___mLegacyEvent_37;
	// System.Boolean UIPopupList::mUseDynamicFont
	bool ___mUseDynamicFont_38;
	// System.Boolean UIPopupList::mTweening
	bool ___mTweening_39;
};
struct UIPopupList_t226_StaticFields{
	// UIPopupList UIPopupList::current
	UIPopupList_t226 * ___current_3;
};
