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
// UnityEngine.Transform
struct Transform_t9;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// UIViewport
struct  UIViewport_t490  : public MonoBehaviour_t6
{
	// UnityEngine.Camera UIViewport::sourceCamera
	Camera_t171 * ___sourceCamera_2;
	// UnityEngine.Transform UIViewport::topLeft
	Transform_t9 * ___topLeft_3;
	// UnityEngine.Transform UIViewport::bottomRight
	Transform_t9 * ___bottomRight_4;
	// System.Single UIViewport::fullSize
	float ___fullSize_5;
	// UnityEngine.Camera UIViewport::mCam
	Camera_t171 * ___mCam_6;
};
