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
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// UIImageButton
struct  UIImageButton_t277  : public MonoBehaviour_t6
{
	// UISprite UIImageButton::target
	UISprite_t172 * ___target_2;
	// System.String UIImageButton::normalSprite
	String_t* ___normalSprite_3;
	// System.String UIImageButton::hoverSprite
	String_t* ___hoverSprite_4;
	// System.String UIImageButton::pressedSprite
	String_t* ___pressedSprite_5;
	// System.String UIImageButton::disabledSprite
	String_t* ___disabledSprite_6;
	// System.Boolean UIImageButton::pixelSnap
	bool ___pixelSnap_7;
};
