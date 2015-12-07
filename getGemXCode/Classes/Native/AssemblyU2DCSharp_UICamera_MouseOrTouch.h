#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t171;
// UnityEngine.GameObject
struct GameObject_t24;

#include "mscorlib_System_Object.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "AssemblyU2DCSharp_UICamera_ClickNotification.h"

// UICamera/MouseOrTouch
struct  MouseOrTouch_t262  : public Object_t
{
	// UnityEngine.Vector2 UICamera/MouseOrTouch::pos
	Vector2_t54  ___pos_0;
	// UnityEngine.Vector2 UICamera/MouseOrTouch::lastPos
	Vector2_t54  ___lastPos_1;
	// UnityEngine.Vector2 UICamera/MouseOrTouch::delta
	Vector2_t54  ___delta_2;
	// UnityEngine.Vector2 UICamera/MouseOrTouch::totalDelta
	Vector2_t54  ___totalDelta_3;
	// UnityEngine.Camera UICamera/MouseOrTouch::pressedCam
	Camera_t171 * ___pressedCam_4;
	// UnityEngine.GameObject UICamera/MouseOrTouch::last
	GameObject_t24 * ___last_5;
	// UnityEngine.GameObject UICamera/MouseOrTouch::current
	GameObject_t24 * ___current_6;
	// UnityEngine.GameObject UICamera/MouseOrTouch::pressed
	GameObject_t24 * ___pressed_7;
	// UnityEngine.GameObject UICamera/MouseOrTouch::dragged
	GameObject_t24 * ___dragged_8;
	// System.Single UICamera/MouseOrTouch::pressTime
	float ___pressTime_9;
	// System.Single UICamera/MouseOrTouch::clickTime
	float ___clickTime_10;
	// UICamera/ClickNotification UICamera/MouseOrTouch::clickNotification
	int32_t ___clickNotification_11;
	// System.Boolean UICamera/MouseOrTouch::touchBegan
	bool ___touchBegan_12;
	// System.Boolean UICamera/MouseOrTouch::pressStarted
	bool ___pressStarted_13;
	// System.Boolean UICamera/MouseOrTouch::dragStarted
	bool ___dragStarted_14;
};
