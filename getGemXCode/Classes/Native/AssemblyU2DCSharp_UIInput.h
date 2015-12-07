#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIInput
struct UIInput_t197;
// UILabel
struct UILabel_t177;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t24;
// System.Collections.Generic.List`1<EventDelegate>
struct List_1_t231;
// UIInput/OnValidate
struct OnValidate_t461;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t462;
// UITexture
struct UITexture_t200;
// UnityEngine.Texture2D
struct Texture2D_t71;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "AssemblyU2DCSharp_UIInput_InputType.h"
#include "AssemblyU2DCSharp_UIInput_OnReturnKey.h"
#include "AssemblyU2DCSharp_UIInput_KeyboardType.h"
#include "AssemblyU2DCSharp_UIInput_Validation.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "AssemblyU2DCSharp_UIWidget_Pivot.h"

// UIInput
struct  UIInput_t197  : public MonoBehaviour_t6
{
	// UILabel UIInput::label
	UILabel_t177 * ___label_4;
	// UIInput/InputType UIInput::inputType
	int32_t ___inputType_5;
	// UIInput/OnReturnKey UIInput::onReturnKey
	int32_t ___onReturnKey_6;
	// UIInput/KeyboardType UIInput::keyboardType
	int32_t ___keyboardType_7;
	// System.Boolean UIInput::hideInput
	bool ___hideInput_8;
	// System.Boolean UIInput::selectAllTextOnFocus
	bool ___selectAllTextOnFocus_9;
	// UIInput/Validation UIInput::validation
	int32_t ___validation_10;
	// System.Int32 UIInput::characterLimit
	int32_t ___characterLimit_11;
	// System.String UIInput::savedAs
	String_t* ___savedAs_12;
	// UnityEngine.GameObject UIInput::selectOnTab
	GameObject_t24 * ___selectOnTab_13;
	// UnityEngine.Color UIInput::activeTextColor
	Color_t33  ___activeTextColor_14;
	// UnityEngine.Color UIInput::caretColor
	Color_t33  ___caretColor_15;
	// UnityEngine.Color UIInput::selectionColor
	Color_t33  ___selectionColor_16;
	// System.Collections.Generic.List`1<EventDelegate> UIInput::onSubmit
	List_1_t231 * ___onSubmit_17;
	// System.Collections.Generic.List`1<EventDelegate> UIInput::onChange
	List_1_t231 * ___onChange_18;
	// UIInput/OnValidate UIInput::onValidate
	OnValidate_t461 * ___onValidate_19;
	// System.String UIInput::mValue
	String_t* ___mValue_20;
	// System.String UIInput::mDefaultText
	String_t* ___mDefaultText_21;
	// UnityEngine.Color UIInput::mDefaultColor
	Color_t33  ___mDefaultColor_22;
	// System.Single UIInput::mPosition
	float ___mPosition_23;
	// System.Boolean UIInput::mDoInit
	bool ___mDoInit_24;
	// UIWidget/Pivot UIInput::mPivot
	int32_t ___mPivot_25;
	// System.Boolean UIInput::mLoadSavedValue
	bool ___mLoadSavedValue_26;
	// System.Int32 UIInput::mSelectionStart
	int32_t ___mSelectionStart_31;
	// System.Int32 UIInput::mSelectionEnd
	int32_t ___mSelectionEnd_32;
	// UITexture UIInput::mHighlight
	UITexture_t200 * ___mHighlight_33;
	// UITexture UIInput::mCaret
	UITexture_t200 * ___mCaret_34;
	// UnityEngine.Texture2D UIInput::mBlankTex
	Texture2D_t71 * ___mBlankTex_35;
	// System.Single UIInput::mNextBlink
	float ___mNextBlink_36;
	// System.Single UIInput::mLastAlpha
	float ___mLastAlpha_37;
	// System.String UIInput::mCached
	String_t* ___mCached_38;
	// System.Int32 UIInput::mSelectMe
	int32_t ___mSelectMe_39;
};
struct UIInput_t197_StaticFields{
	// UIInput UIInput::current
	UIInput_t197 * ___current_2;
	// UIInput UIInput::selection
	UIInput_t197 * ___selection_3;
	// System.Int32 UIInput::mDrawStart
	int32_t ___mDrawStart_27;
	// System.String UIInput::mLastIME
	String_t* ___mLastIME_28;
	// UnityEngine.TouchScreenKeyboard UIInput::mKeyboard
	TouchScreenKeyboard_t462 * ___mKeyboard_29;
	// System.Boolean UIInput::mWaitForKeyboard
	bool ___mWaitForKeyboard_30;
};
