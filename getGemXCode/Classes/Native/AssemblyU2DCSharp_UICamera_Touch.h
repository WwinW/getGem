#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object.h"
#include "UnityEngine_UnityEngine_TouchPhase.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// UICamera/Touch
struct  Touch_t435  : public Object_t
{
	// System.Int32 UICamera/Touch::fingerId
	int32_t ___fingerId_0;
	// UnityEngine.TouchPhase UICamera/Touch::phase
	int32_t ___phase_1;
	// UnityEngine.Vector2 UICamera/Touch::position
	Vector2_t54  ___position_2;
	// System.Int32 UICamera/Touch::tapCount
	int32_t ___tapCount_3;
};
