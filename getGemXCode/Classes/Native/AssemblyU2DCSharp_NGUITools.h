#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioListener
struct AudioListener_t358;
// UnityEngine.AudioClip
struct AudioClip_t70;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t36;

#include "mscorlib_System_Object.h"

// NGUITools
struct  NGUITools_t357  : public Object_t
{
};
struct NGUITools_t357_StaticFields{
	// UnityEngine.AudioListener NGUITools::mListener
	AudioListener_t358 * ___mListener_0;
	// System.Boolean NGUITools::mLoaded
	bool ___mLoaded_1;
	// System.Single NGUITools::mGlobalVolume
	float ___mGlobalVolume_2;
	// System.Single NGUITools::mLastTimestamp
	float ___mLastTimestamp_3;
	// UnityEngine.AudioClip NGUITools::mLastClip
	AudioClip_t70 * ___mLastClip_4;
	// UnityEngine.Vector3[] NGUITools::mSides
	Vector3U5BU5D_t36* ___mSides_5;
};
