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
// UnityEngine.Texture2D
struct Texture2D_t71;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// DownloadTexture
struct  DownloadTexture_t201  : public MonoBehaviour_t6
{
	// System.String DownloadTexture::url
	String_t* ___url_2;
	// System.Boolean DownloadTexture::pixelPerfect
	bool ___pixelPerfect_3;
	// UnityEngine.Texture2D DownloadTexture::mTex
	Texture2D_t71 * ___mTex_4;
};
