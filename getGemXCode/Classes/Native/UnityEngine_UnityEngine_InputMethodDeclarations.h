#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_KeyCode.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Touch.h"
#include "UnityEngine_UnityEngine_IMECompositionMode.h"

// System.Void UnityEngine.Input::.cctor()
extern "C" void Input__cctor_m5916 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetKeyInt(System.Int32)
extern "C" bool Input_GetKeyInt_m5917 (Object_t * __this /* static, unused */, int32_t ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetKeyUpInt(System.Int32)
extern "C" bool Input_GetKeyUpInt_m5918 (Object_t * __this /* static, unused */, int32_t ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetKeyDownInt(System.Int32)
extern "C" bool Input_GetKeyDownInt_m5919 (Object_t * __this /* static, unused */, int32_t ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Input::GetAxis(System.String)
extern "C" float Input_GetAxis_m3533 (Object_t * __this /* static, unused */, String_t* ___axisName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
extern "C" float Input_GetAxisRaw_m5109 (Object_t * __this /* static, unused */, String_t* ___axisName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
extern "C" bool Input_GetButtonDown_m5108 (Object_t * __this /* static, unused */, String_t* ___buttonName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
extern "C" bool Input_GetKey_m3150 (Object_t * __this /* static, unused */, int32_t ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
extern "C" bool Input_GetKeyDown_m3151 (Object_t * __this /* static, unused */, int32_t ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
extern "C" bool Input_GetKeyUp_m3152 (Object_t * __this /* static, unused */, int32_t ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
extern "C" bool Input_GetMouseButton_m3565 (Object_t * __this /* static, unused */, int32_t ___button, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
extern "C" bool Input_GetMouseButtonDown_m2936 (Object_t * __this /* static, unused */, int32_t ___button, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
extern "C" bool Input_GetMouseButtonUp_m3566 (Object_t * __this /* static, unused */, int32_t ___button, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
extern "C" Vector3_t34  Input_get_mousePosition_m2933 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Input::INTERNAL_get_mousePosition(UnityEngine.Vector3&)
extern "C" void Input_INTERNAL_get_mousePosition_m5920 (Object_t * __this /* static, unused */, Vector3_t34 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Input::get_mouseScrollDelta()
extern "C" Vector2_t54  Input_get_mouseScrollDelta_m5092 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Input::INTERNAL_get_mouseScrollDelta(UnityEngine.Vector2&)
extern "C" void Input_INTERNAL_get_mouseScrollDelta_m5921 (Object_t * __this /* static, unused */, Vector2_t54 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::get_mousePresent()
extern "C" bool Input_get_mousePresent_m5107 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Input::get_inputString()
extern "C" String_t* Input_get_inputString_m3592 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
extern "C" Touch_t582  Input_GetTouch_m3568 (Object_t * __this /* static, unused */, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Input::get_touchCount()
extern "C" int32_t Input_get_touchCount_m3567 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::get_touchSupported()
extern "C" bool Input_get_touchSupported_m5123 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Input::set_imeCompositionMode(UnityEngine.IMECompositionMode)
extern "C" void Input_set_imeCompositionMode_m3586 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Input::get_compositionString()
extern "C" String_t* Input_get_compositionString_m3596 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Input::set_compositionCursorPos(UnityEngine.Vector2)
extern "C" void Input_set_compositionCursorPos_m3591 (Object_t * __this /* static, unused */, Vector2_t54  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Input::INTERNAL_set_compositionCursorPos(UnityEngine.Vector2&)
extern "C" void Input_INTERNAL_set_compositionCursorPos_m5922 (Object_t * __this /* static, unused */, Vector2_t54 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
