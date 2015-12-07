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

// BMFont
struct BMFont_t329;
// System.String
struct String_t;
// System.Collections.Generic.List`1<BMGlyph>
struct List_1_t330;
// BMGlyph
struct BMGlyph_t332;

#include "codegen/il2cpp-codegen.h"

// System.Void BMFont::.ctor()
extern "C" void BMFont__ctor_m1536 (BMFont_t329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BMFont::get_isValid()
extern "C" bool BMFont_get_isValid_m1537 (BMFont_t329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BMFont::get_charSize()
extern "C" int32_t BMFont_get_charSize_m1538 (BMFont_t329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BMFont::set_charSize(System.Int32)
extern "C" void BMFont_set_charSize_m1539 (BMFont_t329 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BMFont::get_baseOffset()
extern "C" int32_t BMFont_get_baseOffset_m1540 (BMFont_t329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BMFont::set_baseOffset(System.Int32)
extern "C" void BMFont_set_baseOffset_m1541 (BMFont_t329 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BMFont::get_texWidth()
extern "C" int32_t BMFont_get_texWidth_m1542 (BMFont_t329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BMFont::set_texWidth(System.Int32)
extern "C" void BMFont_set_texWidth_m1543 (BMFont_t329 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BMFont::get_texHeight()
extern "C" int32_t BMFont_get_texHeight_m1544 (BMFont_t329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BMFont::set_texHeight(System.Int32)
extern "C" void BMFont_set_texHeight_m1545 (BMFont_t329 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BMFont::get_glyphCount()
extern "C" int32_t BMFont_get_glyphCount_m1546 (BMFont_t329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BMFont::get_spriteName()
extern "C" String_t* BMFont_get_spriteName_m1547 (BMFont_t329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BMFont::set_spriteName(System.String)
extern "C" void BMFont_set_spriteName_m1548 (BMFont_t329 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<BMGlyph> BMFont::get_glyphs()
extern "C" List_1_t330 * BMFont_get_glyphs_m1549 (BMFont_t329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BMGlyph BMFont::GetGlyph(System.Int32,System.Boolean)
extern "C" BMGlyph_t332 * BMFont_GetGlyph_m1550 (BMFont_t329 * __this, int32_t ___index, bool ___createIfMissing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BMGlyph BMFont::GetGlyph(System.Int32)
extern "C" BMGlyph_t332 * BMFont_GetGlyph_m1551 (BMFont_t329 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BMFont::Clear()
extern "C" void BMFont_Clear_m1552 (BMFont_t329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BMFont::Trim(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void BMFont_Trim_m1553 (BMFont_t329 * __this, int32_t ___xMin, int32_t ___yMin, int32_t ___xMax, int32_t ___yMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
