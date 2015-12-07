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
// UIRect
struct UIRect_t267;
// UnityEngine.Camera
struct Camera_t171;

#include "mscorlib_System_Object.h"

// UIRect/AnchorPoint
struct  AnchorPoint_t392  : public Object_t
{
	// UnityEngine.Transform UIRect/AnchorPoint::target
	Transform_t9 * ___target_0;
	// System.Single UIRect/AnchorPoint::relative
	float ___relative_1;
	// System.Int32 UIRect/AnchorPoint::absolute
	int32_t ___absolute_2;
	// UIRect UIRect/AnchorPoint::rect
	UIRect_t267 * ___rect_3;
	// UnityEngine.Camera UIRect/AnchorPoint::targetCam
	Camera_t171 * ___targetCam_4;
};
