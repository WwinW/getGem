#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "AssemblyU2DCSharp_iPhoneTouchPhase.h"

// iPhoneTouch
struct  iPhoneTouch_t500 
{
	// System.Int32 iPhoneTouch::fingerId
	int32_t ___fingerId_0;
	// UnityEngine.Vector2 iPhoneTouch::position
	Vector2_t54  ___position_1;
	// UnityEngine.Vector2 iPhoneTouch::positionDelta
	Vector2_t54  ___positionDelta_2;
	// System.Single iPhoneTouch::timeDelta
	float ___timeDelta_3;
	// System.Int32 iPhoneTouch::tapCount
	int32_t ___tapCount_4;
	// iPhoneTouchPhase iPhoneTouch::phase
	int32_t ___phase_5;
};
// Native definition for marshalling of: iPhoneTouch
struct iPhoneTouch_t500_marshaled
{
	int32_t ___fingerId_0;
	Vector2_t54  ___position_1;
	Vector2_t54  ___positionDelta_2;
	float ___timeDelta_3;
	int32_t ___tapCount_4;
	int32_t ___phase_5;
};
