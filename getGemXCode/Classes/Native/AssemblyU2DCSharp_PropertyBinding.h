#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PropertyReference
struct PropertyReference_t362;
// System.Object
struct Object_t;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "AssemblyU2DCSharp_PropertyBinding_Direction.h"
#include "AssemblyU2DCSharp_PropertyBinding_UpdateCondition.h"

// PropertyBinding
struct  PropertyBinding_t361  : public MonoBehaviour_t6
{
	// PropertyReference PropertyBinding::source
	PropertyReference_t362 * ___source_2;
	// PropertyReference PropertyBinding::target
	PropertyReference_t362 * ___target_3;
	// PropertyBinding/Direction PropertyBinding::direction
	int32_t ___direction_4;
	// PropertyBinding/UpdateCondition PropertyBinding::update
	int32_t ___update_5;
	// System.Boolean PropertyBinding::editMode
	bool ___editMode_6;
	// System.Object PropertyBinding::mLastValue
	Object_t * ___mLastValue_7;
};
