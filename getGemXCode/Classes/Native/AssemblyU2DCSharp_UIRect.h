#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIRect/AnchorPoint
struct AnchorPoint_t392;
// UnityEngine.GameObject
struct GameObject_t24;
// UnityEngine.Transform
struct Transform_t9;
// BetterList`1<UIRect>
struct BetterList_1_t394;
// UIRoot
struct UIRoot_t258;
// UIRect
struct UIRect_t267;
// UnityEngine.Camera
struct Camera_t171;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t36;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "AssemblyU2DCSharp_UIRect_AnchorUpdate.h"

// UIRect
struct  UIRect_t267  : public MonoBehaviour_t6
{
	// UIRect/AnchorPoint UIRect::leftAnchor
	AnchorPoint_t392 * ___leftAnchor_2;
	// UIRect/AnchorPoint UIRect::rightAnchor
	AnchorPoint_t392 * ___rightAnchor_3;
	// UIRect/AnchorPoint UIRect::bottomAnchor
	AnchorPoint_t392 * ___bottomAnchor_4;
	// UIRect/AnchorPoint UIRect::topAnchor
	AnchorPoint_t392 * ___topAnchor_5;
	// UIRect/AnchorUpdate UIRect::updateAnchors
	int32_t ___updateAnchors_6;
	// UnityEngine.GameObject UIRect::mGo
	GameObject_t24 * ___mGo_7;
	// UnityEngine.Transform UIRect::mTrans
	Transform_t9 * ___mTrans_8;
	// BetterList`1<UIRect> UIRect::mChildren
	BetterList_1_t394 * ___mChildren_9;
	// System.Boolean UIRect::mChanged
	bool ___mChanged_10;
	// System.Boolean UIRect::mStarted
	bool ___mStarted_11;
	// System.Boolean UIRect::mParentFound
	bool ___mParentFound_12;
	// System.Boolean UIRect::mUpdateAnchors
	bool ___mUpdateAnchors_13;
	// System.Int32 UIRect::mUpdateFrame
	int32_t ___mUpdateFrame_14;
	// System.Boolean UIRect::mAnchorsCached
	bool ___mAnchorsCached_15;
	// UIRoot UIRect::mRoot
	UIRoot_t258 * ___mRoot_16;
	// UIRect UIRect::mParent
	UIRect_t267 * ___mParent_17;
	// System.Boolean UIRect::mRootSet
	bool ___mRootSet_18;
	// UnityEngine.Camera UIRect::mCam
	Camera_t171 * ___mCam_19;
	// System.Single UIRect::finalAlpha
	float ___finalAlpha_20;
};
struct UIRect_t267_StaticFields{
	// UnityEngine.Vector3[] UIRect::mSides
	Vector3U5BU5D_t36* ___mSides_21;
};
