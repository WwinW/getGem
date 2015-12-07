#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.SendMouseEvents/HitInfo[]
struct HitInfoU5BU5D_t1042;
// UnityEngine.Camera[]
struct CameraU5BU5D_t557;

#include "mscorlib_System_Object.h"

// UnityEngine.SendMouseEvents
struct  SendMouseEvents_t1041  : public Object_t
{
};
struct SendMouseEvents_t1041_StaticFields{
	// System.Boolean UnityEngine.SendMouseEvents::s_MouseUsed
	bool ___s_MouseUsed_3;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_LastHit
	HitInfoU5BU5D_t1042* ___m_LastHit_4;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_MouseDownHit
	HitInfoU5BU5D_t1042* ___m_MouseDownHit_5;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_CurrentHit
	HitInfoU5BU5D_t1042* ___m_CurrentHit_6;
	// UnityEngine.Camera[] UnityEngine.SendMouseEvents::m_Cameras
	CameraU5BU5D_t557* ___m_Cameras_7;
};
