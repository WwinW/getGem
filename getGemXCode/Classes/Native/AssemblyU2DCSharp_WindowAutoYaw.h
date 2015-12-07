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

// WindowAutoYaw
struct  WindowAutoYaw_t223  : public MonoBehaviour_t6
{
	// System.Int32 WindowAutoYaw::updateOrder
	int32_t ___updateOrder_2;
	// UnityEngine.Camera WindowAutoYaw::uiCamera
	Camera_t171 * ___uiCamera_3;
	// System.Single WindowAutoYaw::yawAmount
	float ___yawAmount_4;
	// UnityEngine.Transform WindowAutoYaw::mTrans
	Transform_t9 * ___mTrans_5;
};
