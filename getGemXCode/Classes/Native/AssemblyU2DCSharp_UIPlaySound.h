#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t70;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "AssemblyU2DCSharp_UIPlaySound_Trigger.h"

// UIPlaySound
struct  UIPlaySound_t286  : public MonoBehaviour_t6
{
	// UnityEngine.AudioClip UIPlaySound::audioClip
	AudioClip_t70 * ___audioClip_2;
	// UIPlaySound/Trigger UIPlaySound::trigger
	int32_t ___trigger_3;
	// System.Single UIPlaySound::volume
	float ___volume_4;
	// System.Single UIPlaySound::pitch
	float ___pitch_5;
	// System.Boolean UIPlaySound::mIsOver
	bool ___mIsOver_6;
};
