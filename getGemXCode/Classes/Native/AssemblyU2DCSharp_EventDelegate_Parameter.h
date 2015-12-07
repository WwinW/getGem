#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Object
struct Object_t85;
struct Object_t85_marshaled;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;

#include "mscorlib_System_Object.h"

// EventDelegate/Parameter
struct  Parameter_t339  : public Object_t
{
	// UnityEngine.Object EventDelegate/Parameter::obj
	Object_t85 * ___obj_0;
	// System.String EventDelegate/Parameter::field
	String_t* ___field_1;
	// System.Object EventDelegate/Parameter::mValue
	Object_t * ___mValue_2;
	// System.Type EventDelegate/Parameter::expectedType
	Type_t * ___expectedType_3;
	// System.Boolean EventDelegate/Parameter::cached
	bool ___cached_4;
	// System.Reflection.PropertyInfo EventDelegate/Parameter::propInfo
	PropertyInfo_t * ___propInfo_5;
	// System.Reflection.FieldInfo EventDelegate/Parameter::fieldInfo
	FieldInfo_t * ___fieldInfo_6;
};
