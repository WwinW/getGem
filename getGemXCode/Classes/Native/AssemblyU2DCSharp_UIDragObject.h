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
// UIPanel
struct UIPanel_t266;
// UIRect
struct UIRect_t267;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "AssemblyU2DCSharp_UIDragObject_DragEffect.h"
#include "UnityEngine_UnityEngine_Plane.h"
#include "UnityEngine_UnityEngine_Bounds.h"

// UIDragObject
struct  UIDragObject_t265  : public MonoBehaviour_t6
{
	// UnityEngine.Transform UIDragObject::target
	Transform_t9 * ___target_2;
	// UIPanel UIDragObject::panelRegion
	UIPanel_t266 * ___panelRegion_3;
	// UnityEngine.Vector3 UIDragObject::scrollMomentum
	Vector3_t34  ___scrollMomentum_4;
	// System.Boolean UIDragObject::restrictWithinPanel
	bool ___restrictWithinPanel_5;
	// UIRect UIDragObject::contentRect
	UIRect_t267 * ___contentRect_6;
	// UIDragObject/DragEffect UIDragObject::dragEffect
	int32_t ___dragEffect_7;
	// System.Single UIDragObject::momentumAmount
	float ___momentumAmount_8;
	// UnityEngine.Vector3 UIDragObject::scale
	Vector3_t34  ___scale_9;
	// System.Single UIDragObject::scrollWheelFactor
	float ___scrollWheelFactor_10;
	// UnityEngine.Plane UIDragObject::mPlane
	Plane_t268  ___mPlane_11;
	// UnityEngine.Vector3 UIDragObject::mTargetPos
	Vector3_t34  ___mTargetPos_12;
	// UnityEngine.Vector3 UIDragObject::mLastPos
	Vector3_t34  ___mLastPos_13;
	// UnityEngine.Vector3 UIDragObject::mMomentum
	Vector3_t34  ___mMomentum_14;
	// UnityEngine.Vector3 UIDragObject::mScroll
	Vector3_t34  ___mScroll_15;
	// UnityEngine.Bounds UIDragObject::mBounds
	Bounds_t269  ___mBounds_16;
	// System.Int32 UIDragObject::mTouchID
	int32_t ___mTouchID_17;
	// System.Boolean UIDragObject::mStarted
	bool ___mStarted_18;
	// System.Boolean UIDragObject::mPressed
	bool ___mPressed_19;
};
