#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t6;
// System.String
struct String_t;
// EventDelegate/Parameter[]
struct ParameterU5BU5D_t341;
// EventDelegate/Callback
struct Callback_t227;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t342;
// System.Object[]
struct ObjectU5BU5D_t72;

#include "mscorlib_System_Object.h"

// EventDelegate
struct  EventDelegate_t340  : public Object_t
{
	// UnityEngine.MonoBehaviour EventDelegate::mTarget
	MonoBehaviour_t6 * ___mTarget_0;
	// System.String EventDelegate::mMethodName
	String_t* ___mMethodName_1;
	// EventDelegate/Parameter[] EventDelegate::mParameters
	ParameterU5BU5D_t341* ___mParameters_2;
	// System.Boolean EventDelegate::oneShot
	bool ___oneShot_3;
	// EventDelegate/Callback EventDelegate::mCachedCallback
	Callback_t227 * ___mCachedCallback_4;
	// System.Boolean EventDelegate::mRawDelegate
	bool ___mRawDelegate_5;
	// System.Boolean EventDelegate::mCached
	bool ___mCached_6;
	// System.Reflection.MethodInfo EventDelegate::mMethod
	MethodInfo_t * ___mMethod_7;
	// System.Reflection.ParameterInfo[] EventDelegate::mParameterInfos
	ParameterInfoU5BU5D_t342* ___mParameterInfos_8;
	// System.Object[] EventDelegate::mArgs
	ObjectU5BU5D_t72* ___mArgs_9;
};
struct EventDelegate_t340_StaticFields{
	// System.Int32 EventDelegate::s_Hash
	int32_t ___s_Hash_10;
};
