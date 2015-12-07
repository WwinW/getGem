#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t24;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "AssemblyU2DCSharp_UIButtonMessage_Trigger.h"

// UIButtonMessage
struct  UIButtonMessage_t243  : public MonoBehaviour_t6
{
	// UnityEngine.GameObject UIButtonMessage::target
	GameObject_t24 * ___target_2;
	// System.String UIButtonMessage::functionName
	String_t* ___functionName_3;
	// UIButtonMessage/Trigger UIButtonMessage::trigger
	int32_t ___trigger_4;
	// System.Boolean UIButtonMessage::includeChildren
	bool ___includeChildren_5;
	// System.Boolean UIButtonMessage::mStarted
	bool ___mStarted_6;
};
