#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// TimedObjectDestructor
struct TimedObjectDestructor_t587;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array.h"
#include "AssemblyU2DUnityScript_U3CModuleU3E.h"
#include "AssemblyU2DUnityScript_U3CModuleU3EMethodDeclarations.h"
#include "AssemblyU2DUnityScript_TimedObjectDestructor.h"
#include "AssemblyU2DUnityScript_TimedObjectDestructorMethodDeclarations.h"
#include "mscorlib_System_Void.h"
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
#include "mscorlib_System_Single.h"
#include "mscorlib_System_String.h"
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
#include "mscorlib_System_Boolean.h"
#include "UnityEngine_UnityEngine_Transform.h"
#include "UnityEngine_UnityEngine_GameObject.h"
#include "UnityEngine_UnityEngine_Object.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TimedObjectDestructor::.ctor()
extern "C" void TimedObjectDestructor__ctor_m3671 (TimedObjectDestructor_t587 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m474(__this, /*hidden argument*/NULL);
		__this->___timeOut_2 = (1.0f);
		return;
	}
}
// System.Void TimedObjectDestructor::Awake()
extern Il2CppCodeGenString* _stringLiteral438;
extern "C" void TimedObjectDestructor_Awake_m3672 (TimedObjectDestructor_t587 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral438 = il2cpp_codegen_string_literal_from_index(438);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = (__this->___timeOut_2);
		MonoBehaviour_Invoke_m3663(__this, _stringLiteral438, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TimedObjectDestructor::DestroyNow()
extern "C" void TimedObjectDestructor_DestroyNow_m3673 (TimedObjectDestructor_t587 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___detachChildren_3);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Transform_t9 * L_1 = Component_get_transform_m475(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_DetachChildren_m3675(L_1, /*hidden argument*/NULL);
	}

IL_0016:
	{
		GameObject_t24 * L_2 = Component_get_gameObject_m468(__this, /*hidden argument*/NULL);
		Object_DestroyObject_m3662(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TimedObjectDestructor::Main()
extern "C" void TimedObjectDestructor_Main_m3674 (TimedObjectDestructor_t587 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
