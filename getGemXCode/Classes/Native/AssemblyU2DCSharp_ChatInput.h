#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UITextList
struct UITextList_t196;
// UIInput
struct UIInput_t197;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// ChatInput
struct  ChatInput_t195  : public MonoBehaviour_t6
{
	// UITextList ChatInput::textList
	UITextList_t196 * ___textList_2;
	// System.Boolean ChatInput::fillWithDummyData
	bool ___fillWithDummyData_3;
	// UIInput ChatInput::mInput
	UIInput_t197 * ___mInput_4;
};
