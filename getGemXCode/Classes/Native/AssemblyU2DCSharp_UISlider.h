#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t9;

#include "AssemblyU2DCSharp_UIProgressBar.h"
#include "AssemblyU2DCSharp_UISlider_Direction.h"

// UISlider
struct  UISlider_t305  : public UIProgressBar_t221
{
	// UnityEngine.Transform UISlider::foreground
	Transform_t9 * ___foreground_15;
	// System.Single UISlider::rawValue
	float ___rawValue_16;
	// UISlider/Direction UISlider::direction
	int32_t ___direction_17;
	// System.Boolean UISlider::mInverted
	bool ___mInverted_18;
};
