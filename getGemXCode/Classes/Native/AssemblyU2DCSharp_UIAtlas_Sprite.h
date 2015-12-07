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

#include "mscorlib_System_Object.h"
#include "UnityEngine_UnityEngine_Rect.h"

// UIAtlas/Sprite
struct  Sprite_t426  : public Object_t
{
	// System.String UIAtlas/Sprite::name
	String_t* ___name_0;
	// UnityEngine.Rect UIAtlas/Sprite::outer
	Rect_t55  ___outer_1;
	// UnityEngine.Rect UIAtlas/Sprite::inner
	Rect_t55  ___inner_2;
	// System.Boolean UIAtlas/Sprite::rotated
	bool ___rotated_3;
	// System.Single UIAtlas/Sprite::paddingLeft
	float ___paddingLeft_4;
	// System.Single UIAtlas/Sprite::paddingRight
	float ___paddingRight_5;
	// System.Single UIAtlas/Sprite::paddingTop
	float ___paddingTop_6;
	// System.Single UIAtlas/Sprite::paddingBottom
	float ___paddingBottom_7;
};
