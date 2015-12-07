#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture
struct Texture_t376;
// UnityEngine.Material
struct Material_t89;
// UnityEngine.Shader
struct Shader_t377;

#include "AssemblyU2DCSharp_UIBasicSprite.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_Vector4.h"

// UITexture
struct  UITexture_t200  : public UIBasicSprite_t222
{
	// UnityEngine.Rect UITexture::mRect
	Rect_t55  ___mRect_66;
	// UnityEngine.Texture UITexture::mTexture
	Texture_t376 * ___mTexture_67;
	// UnityEngine.Material UITexture::mMat
	Material_t89 * ___mMat_68;
	// UnityEngine.Shader UITexture::mShader
	Shader_t377 * ___mShader_69;
	// UnityEngine.Vector4 UITexture::mBorder
	Vector4_t391  ___mBorder_70;
	// System.Boolean UITexture::mFixedAspect
	bool ___mFixedAspect_71;
	// System.Int32 UITexture::mPMA
	int32_t ___mPMA_72;
};
