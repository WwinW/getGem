﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t1646;
// System.IFormatProvider
struct IFormatProvider_t2163;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t76;
// System.Globalization.Calendar
struct Calendar_t1640;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DayOfWeek.h"

// System.Void System.Globalization.DateTimeFormatInfo::.ctor(System.Boolean)
extern "C" void DateTimeFormatInfo__ctor_m10637 (DateTimeFormatInfo_t1646 * __this, bool ___read_only, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.DateTimeFormatInfo::.ctor()
extern "C" void DateTimeFormatInfo__ctor_m10638 (DateTimeFormatInfo_t1646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.DateTimeFormatInfo::.cctor()
extern "C" void DateTimeFormatInfo__cctor_m10639 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::GetInstance(System.IFormatProvider)
extern "C" DateTimeFormatInfo_t1646 * DateTimeFormatInfo_GetInstance_m10640 (Object_t * __this /* static, unused */, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.DateTimeFormatInfo::get_IsReadOnly()
extern "C" bool DateTimeFormatInfo_get_IsReadOnly_m10641 (DateTimeFormatInfo_t1646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::ReadOnly(System.Globalization.DateTimeFormatInfo)
extern "C" DateTimeFormatInfo_t1646 * DateTimeFormatInfo_ReadOnly_m10642 (Object_t * __this /* static, unused */, DateTimeFormatInfo_t1646 * ___dtfi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.DateTimeFormatInfo::Clone()
extern "C" Object_t * DateTimeFormatInfo_Clone_m10643 (DateTimeFormatInfo_t1646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.DateTimeFormatInfo::GetFormat(System.Type)
extern "C" Object_t * DateTimeFormatInfo_GetFormat_m10644 (DateTimeFormatInfo_t1646 * __this, Type_t * ___formatType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::GetAbbreviatedMonthName(System.Int32)
extern "C" String_t* DateTimeFormatInfo_GetAbbreviatedMonthName_m10645 (DateTimeFormatInfo_t1646 * __this, int32_t ___month, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::GetEraName(System.Int32)
extern "C" String_t* DateTimeFormatInfo_GetEraName_m10646 (DateTimeFormatInfo_t1646 * __this, int32_t ___era, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::GetMonthName(System.Int32)
extern "C" String_t* DateTimeFormatInfo_GetMonthName_m10647 (DateTimeFormatInfo_t1646 * __this, int32_t ___month, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::get_RawAbbreviatedDayNames()
extern "C" StringU5BU5D_t76* DateTimeFormatInfo_get_RawAbbreviatedDayNames_m10648 (DateTimeFormatInfo_t1646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::get_RawAbbreviatedMonthNames()
extern "C" StringU5BU5D_t76* DateTimeFormatInfo_get_RawAbbreviatedMonthNames_m10649 (DateTimeFormatInfo_t1646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::get_RawDayNames()
extern "C" StringU5BU5D_t76* DateTimeFormatInfo_get_RawDayNames_m10650 (DateTimeFormatInfo_t1646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::get_RawMonthNames()
extern "C" StringU5BU5D_t76* DateTimeFormatInfo_get_RawMonthNames_m10651 (DateTimeFormatInfo_t1646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_AMDesignator()
extern "C" String_t* DateTimeFormatInfo_get_AMDesignator_m10652 (DateTimeFormatInfo_t1646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_PMDesignator()
extern "C" String_t* DateTimeFormatInfo_get_PMDesignator_m10653 (DateTimeFormatInfo_t1646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_DateSeparator()
extern "C" String_t* DateTimeFormatInfo_get_DateSeparator_m10654 (DateTimeFormatInfo_t1646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_TimeSeparator()
extern "C" String_t* DateTimeFormatInfo_get_TimeSeparator_m10655 (DateTimeFormatInfo_t1646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_LongDatePattern()
extern "C" String_t* DateTimeFormatInfo_get_LongDatePattern_m10656 (DateTimeFormatInfo_t1646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_ShortDatePattern()
extern "C" String_t* DateTimeFormatInfo_get_ShortDatePattern_m10657 (DateTimeFormatInfo_t1646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_ShortTimePattern()
extern "C" String_t* DateTimeFormatInfo_get_ShortTimePattern_m10658 (DateTimeFormatInfo_t1646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_LongTimePattern()
extern "C" String_t* DateTimeFormatInfo_get_LongTimePattern_m10659 (DateTimeFormatInfo_t1646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_MonthDayPattern()
extern "C" String_t* DateTimeFormatInfo_get_MonthDayPattern_m10660 (DateTimeFormatInfo_t1646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_YearMonthPattern()
extern "C" String_t* DateTimeFormatInfo_get_YearMonthPattern_m10661 (DateTimeFormatInfo_t1646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_FullDateTimePattern()
extern "C" String_t* DateTimeFormatInfo_get_FullDateTimePattern_m10662 (DateTimeFormatInfo_t1646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::get_CurrentInfo()
extern "C" DateTimeFormatInfo_t1646 * DateTimeFormatInfo_get_CurrentInfo_m10663 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::get_InvariantInfo()
extern "C" DateTimeFormatInfo_t1646 * DateTimeFormatInfo_get_InvariantInfo_m10664 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.Calendar System.Globalization.DateTimeFormatInfo::get_Calendar()
extern "C" Calendar_t1640 * DateTimeFormatInfo_get_Calendar_m10665 (DateTimeFormatInfo_t1646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.DateTimeFormatInfo::set_Calendar(System.Globalization.Calendar)
extern "C" void DateTimeFormatInfo_set_Calendar_m10666 (DateTimeFormatInfo_t1646 * __this, Calendar_t1640 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_RFC1123Pattern()
extern "C" String_t* DateTimeFormatInfo_get_RFC1123Pattern_m10667 (DateTimeFormatInfo_t1646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_RoundtripPattern()
extern "C" String_t* DateTimeFormatInfo_get_RoundtripPattern_m10668 (DateTimeFormatInfo_t1646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_SortableDateTimePattern()
extern "C" String_t* DateTimeFormatInfo_get_SortableDateTimePattern_m10669 (DateTimeFormatInfo_t1646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_UniversalSortableDateTimePattern()
extern "C" String_t* DateTimeFormatInfo_get_UniversalSortableDateTimePattern_m10670 (DateTimeFormatInfo_t1646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::GetAllDateTimePatternsInternal()
extern "C" StringU5BU5D_t76* DateTimeFormatInfo_GetAllDateTimePatternsInternal_m10671 (DateTimeFormatInfo_t1646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.DateTimeFormatInfo::FillAllDateTimePatterns()
extern "C" void DateTimeFormatInfo_FillAllDateTimePatterns_m10672 (DateTimeFormatInfo_t1646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::GetAllRawDateTimePatterns(System.Char)
extern "C" StringU5BU5D_t76* DateTimeFormatInfo_GetAllRawDateTimePatterns_m10673 (DateTimeFormatInfo_t1646 * __this, uint16_t ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::GetDayName(System.DayOfWeek)
extern "C" String_t* DateTimeFormatInfo_GetDayName_m10674 (DateTimeFormatInfo_t1646 * __this, int32_t ___dayofweek, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::GetAbbreviatedDayName(System.DayOfWeek)
extern "C" String_t* DateTimeFormatInfo_GetAbbreviatedDayName_m10675 (DateTimeFormatInfo_t1646 * __this, int32_t ___dayofweek, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.DateTimeFormatInfo::FillInvariantPatterns()
extern "C" void DateTimeFormatInfo_FillInvariantPatterns_m10676 (DateTimeFormatInfo_t1646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::PopulateCombinedList(System.String[],System.String[])
extern "C" StringU5BU5D_t76* DateTimeFormatInfo_PopulateCombinedList_m10677 (DateTimeFormatInfo_t1646 * __this, StringU5BU5D_t76* ___dates, StringU5BU5D_t76* ___times, const MethodInfo* method) IL2CPP_METHOD_ATTR;
