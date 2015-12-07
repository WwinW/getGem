#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Sprite
struct Sprite_t235;
// UnityEngine.Material
struct Material_t89;
// UnityEngine.Shader
struct Shader_t377;

#include "AssemblyU2DCSharp_UIBasicSprite.h"
#include "UnityEngine_UnityEngine_Vector4.h"

// UI2DSprite
struct  UI2DSprite_t236  : public UIBasicSprite_t222
{
	// UnityEngine.Sprite UI2DSprite::mSprite
	Sprite_t235 * ___mSprite_66;
	// UnityEngine.Material UI2DSprite::mMat
	Material_t89 * ___mMat_67;
	// UnityEngine.Shader UI2DSprite::mShader
	Shader_t377 * ___mShader_68;
	// UnityEngine.Vector4 UI2DSprite::mBorder
	Vector4_t391  ___mBorder_69;
	// System.Boolean UI2DSprite::mFixedAspect
	bool ___mFixedAspect_70;
	// System.Single UI2DSprite::mPixelSize
	float ___mPixelSize_71;
	// UnityEngine.Sprite UI2DSprite::nextSprite
	Sprite_t235 * ___nextSprite_72;
	// System.Int32 UI2DSprite::mPMA
	int32_t ___mPMA_73;
};
