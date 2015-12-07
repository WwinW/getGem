#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t321;
// UnityEngine.GameObject
struct GameObject_t24;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// UIToggledObjects
struct  UIToggledObjects_t320  : public MonoBehaviour_t6
{
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UIToggledObjects::activate
	List_1_t321 * ___activate_2;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UIToggledObjects::deactivate
	List_1_t321 * ___deactivate_3;
	// UnityEngine.GameObject UIToggledObjects::target
	GameObject_t24 * ___target_4;
	// System.Boolean UIToggledObjects::inverse
	bool ___inverse_5;
};
