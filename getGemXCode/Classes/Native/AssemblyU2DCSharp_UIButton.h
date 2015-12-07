#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIButton
struct UIButton_t233;
// System.String
struct String_t;
// UnityEngine.Sprite
struct Sprite_t235;
// System.Collections.Generic.List`1<EventDelegate>
struct List_1_t231;
// UISprite
struct UISprite_t172;
// UI2DSprite
struct UI2DSprite_t236;

#include "AssemblyU2DCSharp_UIButtonColor.h"

// UIButton
struct  UIButton_t233  : public UIButtonColor_t234
{
	// System.Boolean UIButton::dragHighlight
	bool ___dragHighlight_13;
	// System.String UIButton::hoverSprite
	String_t* ___hoverSprite_14;
	// System.String UIButton::pressedSprite
	String_t* ___pressedSprite_15;
	// System.String UIButton::disabledSprite
	String_t* ___disabledSprite_16;
	// UnityEngine.Sprite UIButton::hoverSprite2D
	Sprite_t235 * ___hoverSprite2D_17;
	// UnityEngine.Sprite UIButton::pressedSprite2D
	Sprite_t235 * ___pressedSprite2D_18;
	// UnityEngine.Sprite UIButton::disabledSprite2D
	Sprite_t235 * ___disabledSprite2D_19;
	// System.Boolean UIButton::pixelSnap
	bool ___pixelSnap_20;
	// System.Collections.Generic.List`1<EventDelegate> UIButton::onClick
	List_1_t231 * ___onClick_21;
	// UISprite UIButton::mSprite
	UISprite_t172 * ___mSprite_22;
	// UI2DSprite UIButton::mSprite2D
	UI2DSprite_t236 * ___mSprite2D_23;
	// System.String UIButton::mNormalSprite
	String_t* ___mNormalSprite_24;
	// UnityEngine.Sprite UIButton::mNormalSprite2D
	Sprite_t235 * ___mNormalSprite2D_25;
};
struct UIButton_t233_StaticFields{
	// UIButton UIButton::current
	UIButton_t233 * ___current_12;
};
