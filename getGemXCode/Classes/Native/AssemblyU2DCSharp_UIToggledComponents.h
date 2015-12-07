#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>
struct List_1_t319;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t6;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// UIToggledComponents
struct  UIToggledComponents_t318  : public MonoBehaviour_t6
{
	// System.Collections.Generic.List`1<UnityEngine.MonoBehaviour> UIToggledComponents::activate
	List_1_t319 * ___activate_2;
	// System.Collections.Generic.List`1<UnityEngine.MonoBehaviour> UIToggledComponents::deactivate
	List_1_t319 * ___deactivate_3;
	// UnityEngine.MonoBehaviour UIToggledComponents::target
	MonoBehaviour_t6 * ___target_4;
	// System.Boolean UIToggledComponents::inverse
	bool ___inverse_5;
};
