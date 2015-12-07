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

// BMSymbol
struct BMSymbol_t334;
// UIAtlas
struct UIAtlas_t173;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void BMSymbol::.ctor()
extern "C" void BMSymbol__ctor_m1558 (BMSymbol_t334 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BMSymbol::get_length()
extern "C" int32_t BMSymbol_get_length_m1559 (BMSymbol_t334 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BMSymbol::get_offsetX()
extern "C" int32_t BMSymbol_get_offsetX_m1560 (BMSymbol_t334 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BMSymbol::get_offsetY()
extern "C" int32_t BMSymbol_get_offsetY_m1561 (BMSymbol_t334 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BMSymbol::get_width()
extern "C" int32_t BMSymbol_get_width_m1562 (BMSymbol_t334 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BMSymbol::get_height()
extern "C" int32_t BMSymbol_get_height_m1563 (BMSymbol_t334 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BMSymbol::get_advance()
extern "C" int32_t BMSymbol_get_advance_m1564 (BMSymbol_t334 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect BMSymbol::get_uvRect()
extern "C" Rect_t55  BMSymbol_get_uvRect_m1565 (BMSymbol_t334 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BMSymbol::MarkAsChanged()
extern "C" void BMSymbol_MarkAsChanged_m1566 (BMSymbol_t334 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BMSymbol::Validate(UIAtlas)
extern "C" bool BMSymbol_Validate_m1567 (BMSymbol_t334 * __this, UIAtlas_t173 * ___atlas, const MethodInfo* method) IL2CPP_METHOD_ATTR;
