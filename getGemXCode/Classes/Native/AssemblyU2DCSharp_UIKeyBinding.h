#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_KeyCode.h"
#include "AssemblyU2DCSharp_UIKeyBinding_Modifier.h"
#include "AssemblyU2DCSharp_UIKeyBinding_Action.h"

// UIKeyBinding
struct  UIKeyBinding_t280  : public MonoBehaviour_t6
{
	// UnityEngine.KeyCode UIKeyBinding::keyCode
	int32_t ___keyCode_2;
	// UIKeyBinding/Modifier UIKeyBinding::modifier
	int32_t ___modifier_3;
	// UIKeyBinding/Action UIKeyBinding::action
	int32_t ___action_4;
	// System.Boolean UIKeyBinding::mIgnoreUp
	bool ___mIgnoreUp_5;
	// System.Boolean UIKeyBinding::mIsInput
	bool ___mIsInput_6;
	// System.Boolean UIKeyBinding::mPress
	bool ___mPress_7;
};
