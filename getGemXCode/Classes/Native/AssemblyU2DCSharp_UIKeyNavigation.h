#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// BetterList`1<UIKeyNavigation>
struct BetterList_1_t282;
// UnityEngine.GameObject
struct GameObject_t24;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "AssemblyU2DCSharp_UIKeyNavigation_Constraint.h"

// UIKeyNavigation
struct  UIKeyNavigation_t241  : public MonoBehaviour_t6
{
	// UIKeyNavigation/Constraint UIKeyNavigation::constraint
	int32_t ___constraint_3;
	// UnityEngine.GameObject UIKeyNavigation::onUp
	GameObject_t24 * ___onUp_4;
	// UnityEngine.GameObject UIKeyNavigation::onDown
	GameObject_t24 * ___onDown_5;
	// UnityEngine.GameObject UIKeyNavigation::onLeft
	GameObject_t24 * ___onLeft_6;
	// UnityEngine.GameObject UIKeyNavigation::onRight
	GameObject_t24 * ___onRight_7;
	// UnityEngine.GameObject UIKeyNavigation::onClick
	GameObject_t24 * ___onClick_8;
	// System.Boolean UIKeyNavigation::startsSelected
	bool ___startsSelected_9;
};
struct UIKeyNavigation_t241_StaticFields{
	// BetterList`1<UIKeyNavigation> UIKeyNavigation::list
	BetterList_1_t282 * ___list_2;
};
