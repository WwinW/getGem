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

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// WindowDragTilt
struct  WindowDragTilt_t224  : public MonoBehaviour_t6
{
	// System.Int32 WindowDragTilt::updateOrder
	int32_t ___updateOrder_2;
	// System.Single WindowDragTilt::degrees
	float ___degrees_3;
	// UnityEngine.Vector3 WindowDragTilt::mLastPos
	Vector3_t34  ___mLastPos_4;
	// UnityEngine.Transform WindowDragTilt::mTrans
	Transform_t9 * ___mTrans_5;
	// System.Single WindowDragTilt::mAngle
	float ___mAngle_6;
};
