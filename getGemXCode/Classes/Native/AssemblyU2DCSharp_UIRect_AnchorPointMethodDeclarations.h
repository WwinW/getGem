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

// UIRect/AnchorPoint
struct AnchorPoint_t392;
// UnityEngine.Transform
struct Transform_t9;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t36;

#include "codegen/il2cpp-codegen.h"

// System.Void UIRect/AnchorPoint::.ctor()
extern "C" void AnchorPoint__ctor_m1988 (AnchorPoint_t392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect/AnchorPoint::.ctor(System.Single)
extern "C" void AnchorPoint__ctor_m1989 (AnchorPoint_t392 * __this, float ___relative, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect/AnchorPoint::Set(System.Single,System.Single)
extern "C" void AnchorPoint_Set_m1990 (AnchorPoint_t392 * __this, float ___relative, float ___absolute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect/AnchorPoint::Set(UnityEngine.Transform,System.Single,System.Single)
extern "C" void AnchorPoint_Set_m1991 (AnchorPoint_t392 * __this, Transform_t9 * ___target, float ___relative, float ___absolute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect/AnchorPoint::SetToNearest(System.Single,System.Single,System.Single)
extern "C" void AnchorPoint_SetToNearest_m1992 (AnchorPoint_t392 * __this, float ___abs0, float ___abs1, float ___abs2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect/AnchorPoint::SetToNearest(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C" void AnchorPoint_SetToNearest_m1993 (AnchorPoint_t392 * __this, float ___rel0, float ___rel1, float ___rel2, float ___abs0, float ___abs1, float ___abs2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect/AnchorPoint::SetHorizontal(UnityEngine.Transform,System.Single)
extern "C" void AnchorPoint_SetHorizontal_m1994 (AnchorPoint_t392 * __this, Transform_t9 * ___parent, float ___localPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRect/AnchorPoint::SetVertical(UnityEngine.Transform,System.Single)
extern "C" void AnchorPoint_SetVertical_m1995 (AnchorPoint_t392 * __this, Transform_t9 * ___parent, float ___localPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UIRect/AnchorPoint::GetSides(UnityEngine.Transform)
extern "C" Vector3U5BU5D_t36* AnchorPoint_GetSides_m1996 (AnchorPoint_t392 * __this, Transform_t9 * ___relativeTo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
