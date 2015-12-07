#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_Object.h"
#include "AssemblyU2DCSharp_iPhoneScreenOrientation.h"

// iPhoneSettings
struct  iPhoneSettings_t501  : public Object_t
{
};
struct iPhoneSettings_t501_StaticFields{
	// iPhoneScreenOrientation iPhoneSettings::screenOrientation
	int32_t ___screenOrientation_0;
	// System.Boolean iPhoneSettings::screenCanDarken
	bool ___screenCanDarken_1;
	// System.String iPhoneSettings::uniqueIdentifier
	String_t* ___uniqueIdentifier_2;
	// System.String iPhoneSettings::name
	String_t* ___name_3;
	// System.String iPhoneSettings::model
	String_t* ___model_4;
	// System.String iPhoneSettings::systemName
	String_t* ___systemName_5;
	// System.String iPhoneSettings::systemVersion
	String_t* ___systemVersion_6;
};
