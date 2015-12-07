#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIAtlas
struct UIAtlas_t173;
// System.String
struct String_t;
// UISpriteData
struct UISpriteData_t335;

#include "AssemblyU2DCSharp_UIBasicSprite.h"

// UISprite
struct  UISprite_t172  : public UIBasicSprite_t222
{
	// UIAtlas UISprite::mAtlas
	UIAtlas_t173 * ___mAtlas_66;
	// System.String UISprite::mSpriteName
	String_t* ___mSpriteName_67;
	// System.Boolean UISprite::mFillCenter
	bool ___mFillCenter_68;
	// UISpriteData UISprite::mSprite
	UISpriteData_t335 * ___mSprite_69;
	// System.Boolean UISprite::mSpriteSet
	bool ___mSpriteSet_70;
};
