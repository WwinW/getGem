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

// UnityEngine.GUILayer
struct GUILayer_t907;
// UnityEngine.GUIElement
struct GUIElement_t906;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// UnityEngine.GUIElement UnityEngine.GUILayer::HitTest(UnityEngine.Vector3)
extern "C" GUIElement_t906 * GUILayer_HitTest_m5621 (GUILayer_t907 * __this, Vector3_t34  ___screenPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIElement UnityEngine.GUILayer::INTERNAL_CALL_HitTest(UnityEngine.GUILayer,UnityEngine.Vector3&)
extern "C" GUIElement_t906 * GUILayer_INTERNAL_CALL_HitTest_m5622 (Object_t * __this /* static, unused */, GUILayer_t907 * ___self, Vector3_t34 * ___screenPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
