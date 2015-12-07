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
// UnityEngine.Collider
struct Collider_t256;
// UnityEngine.Collider2D
struct Collider2D_t257;
// UIButton
struct UIButton_t233;
// UIRoot
struct UIRoot_t258;
// UIGrid
struct UIGrid_t259;
// UITable
struct UITable_t260;
// UIDragScrollView
struct UIDragScrollView_t261;
// UICamera/MouseOrTouch
struct MouseOrTouch_t262;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "AssemblyU2DCSharp_UIDragDropItem_Restriction.h"

// UIDragDropItem
struct  UIDragDropItem_t204  : public MonoBehaviour_t6
{
	// UIDragDropItem/Restriction UIDragDropItem::restriction
	int32_t ___restriction_2;
	// System.Boolean UIDragDropItem::cloneOnDrag
	bool ___cloneOnDrag_3;
	// System.Single UIDragDropItem::pressAndHoldDelay
	float ___pressAndHoldDelay_4;
	// System.Boolean UIDragDropItem::interactable
	bool ___interactable_5;
	// UnityEngine.Transform UIDragDropItem::mTrans
	Transform_t9 * ___mTrans_6;
	// UnityEngine.Transform UIDragDropItem::mParent
	Transform_t9 * ___mParent_7;
	// UnityEngine.Collider UIDragDropItem::mCollider
	Collider_t256 * ___mCollider_8;
	// UnityEngine.Collider2D UIDragDropItem::mCollider2D
	Collider2D_t257 * ___mCollider2D_9;
	// UIButton UIDragDropItem::mButton
	UIButton_t233 * ___mButton_10;
	// UIRoot UIDragDropItem::mRoot
	UIRoot_t258 * ___mRoot_11;
	// UIGrid UIDragDropItem::mGrid
	UIGrid_t259 * ___mGrid_12;
	// UITable UIDragDropItem::mTable
	UITable_t260 * ___mTable_13;
	// System.Single UIDragDropItem::mDragStartTime
	float ___mDragStartTime_14;
	// UIDragScrollView UIDragDropItem::mDragScrollView
	UIDragScrollView_t261 * ___mDragScrollView_15;
	// System.Boolean UIDragDropItem::mPressed
	bool ___mPressed_16;
	// System.Boolean UIDragDropItem::mDragging
	bool ___mDragging_17;
	// UICamera/MouseOrTouch UIDragDropItem::mTouch
	MouseOrTouch_t262 * ___mTouch_18;
};
