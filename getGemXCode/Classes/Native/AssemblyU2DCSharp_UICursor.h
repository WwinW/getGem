#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UICursor
struct UICursor_t170;
// UnityEngine.Camera
struct Camera_t171;
// UnityEngine.Transform
struct Transform_t9;
// UISprite
struct UISprite_t172;
// UIAtlas
struct UIAtlas_t173;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// UICursor
struct  UICursor_t170  : public MonoBehaviour_t6
{
	// UnityEngine.Camera UICursor::uiCamera
	Camera_t171 * ___uiCamera_3;
	// UnityEngine.Transform UICursor::mTrans
	Transform_t9 * ___mTrans_4;
	// UISprite UICursor::mSprite
	UISprite_t172 * ___mSprite_5;
	// UIAtlas UICursor::mAtlas
	UIAtlas_t173 * ___mAtlas_6;
	// System.String UICursor::mSpriteName
	String_t* ___mSpriteName_7;
};
struct UICursor_t170_StaticFields{
	// UICursor UICursor::instance
	UICursor_t170 * ___instance_2;
};
