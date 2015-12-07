#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Component
struct Component_t109;
// System.String
struct String_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;

#include "mscorlib_System_Object.h"

// PropertyReference
struct  PropertyReference_t362  : public Object_t
{
	// UnityEngine.Component PropertyReference::mTarget
	Component_t109 * ___mTarget_0;
	// System.String PropertyReference::mName
	String_t* ___mName_1;
	// System.Reflection.FieldInfo PropertyReference::mField
	FieldInfo_t * ___mField_2;
	// System.Reflection.PropertyInfo PropertyReference::mProperty
	PropertyInfo_t * ___mProperty_3;
};
struct PropertyReference_t362_StaticFields{
	// System.Int32 PropertyReference::s_Hash
	int32_t ___s_Hash_4;
};
