#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// iPhoneTouch[]
struct iPhoneTouchU5BU5D_t503;

#include "mscorlib_System_Object.h"
#include "AssemblyU2DCSharp_iPhoneOrientation.h"

// iPhoneInput
struct  iPhoneInput_t502  : public Object_t
{
};
struct iPhoneInput_t502_StaticFields{
	// iPhoneTouch[] iPhoneInput::touches
	iPhoneTouchU5BU5D_t503* ___touches_0;
	// System.Int32 iPhoneInput::touchCount
	int32_t ___touchCount_1;
	// System.Boolean iPhoneInput::multiTouchEnabled
	bool ___multiTouchEnabled_2;
	// iPhoneOrientation iPhoneInput::orientation
	int32_t ___orientation_3;
};
