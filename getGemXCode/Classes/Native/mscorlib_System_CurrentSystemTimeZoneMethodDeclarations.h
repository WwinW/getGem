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

// System.CurrentSystemTimeZone
struct CurrentSystemTimeZone_t2129;
// System.Object
struct Object_t;
// System.Int64[]
struct Int64U5BU5D_t2166;
// System.String[]
struct StringU5BU5D_t76;
// System.Globalization.DaylightTime
struct DaylightTime_t1650;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan.h"
#include "mscorlib_System_DateTime.h"

// System.Void System.CurrentSystemTimeZone::.ctor()
extern "C" void CurrentSystemTimeZone__ctor_m13874 (CurrentSystemTimeZone_t2129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::.ctor(System.Int64)
extern "C" void CurrentSystemTimeZone__ctor_m13875 (CurrentSystemTimeZone_t2129 * __this, int64_t ___lnow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C" void CurrentSystemTimeZone_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m13876 (CurrentSystemTimeZone_t2129 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.CurrentSystemTimeZone::GetTimeZoneData(System.Int32,System.Int64[]&,System.String[]&)
extern "C" bool CurrentSystemTimeZone_GetTimeZoneData_m13877 (Object_t * __this /* static, unused */, int32_t ___year, Int64U5BU5D_t2166** ___data, StringU5BU5D_t76** ___names, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DaylightTime System.CurrentSystemTimeZone::GetDaylightChanges(System.Int32)
extern "C" DaylightTime_t1650 * CurrentSystemTimeZone_GetDaylightChanges_m13878 (CurrentSystemTimeZone_t2129 * __this, int32_t ___year, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.CurrentSystemTimeZone::GetUtcOffset(System.DateTime)
extern "C" TimeSpan_t1400  CurrentSystemTimeZone_GetUtcOffset_m13879 (CurrentSystemTimeZone_t2129 * __this, DateTime_t515  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::OnDeserialization(System.Globalization.DaylightTime)
extern "C" void CurrentSystemTimeZone_OnDeserialization_m13880 (CurrentSystemTimeZone_t2129 * __this, DaylightTime_t1650 * ___dlt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DaylightTime System.CurrentSystemTimeZone::GetDaylightTimeFromData(System.Int64[])
extern "C" DaylightTime_t1650 * CurrentSystemTimeZone_GetDaylightTimeFromData_m13881 (CurrentSystemTimeZone_t2129 * __this, Int64U5BU5D_t2166* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
