#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t24;

#include "mscorlib_System_ValueType.h"
#include "UnityEngine_UnityEngine_RaycastHit.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// UICamera/DepthEntry
struct  DepthEntry_t434 
{
	// System.Int32 UICamera/DepthEntry::depth
	int32_t ___depth_0;
	// UnityEngine.RaycastHit UICamera/DepthEntry::hit
	RaycastHit_t120  ___hit_1;
	// UnityEngine.Vector3 UICamera/DepthEntry::point
	Vector3_t34  ___point_2;
	// UnityEngine.GameObject UICamera/DepthEntry::go
	GameObject_t24 * ___go_3;
};
