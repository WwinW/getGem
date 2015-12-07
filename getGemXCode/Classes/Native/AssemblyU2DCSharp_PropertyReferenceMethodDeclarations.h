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

// PropertyReference
struct PropertyReference_t362;
// UnityEngine.Component
struct Component_t109;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void PropertyReference::.ctor()
extern "C" void PropertyReference__ctor_m1834 (PropertyReference_t362 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PropertyReference::.ctor(UnityEngine.Component,System.String)
extern "C" void PropertyReference__ctor_m1835 (PropertyReference_t362 * __this, Component_t109 * ___target, String_t* ___fieldName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PropertyReference::.cctor()
extern "C" void PropertyReference__cctor_m1836 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component PropertyReference::get_target()
extern "C" Component_t109 * PropertyReference_get_target_m1837 (PropertyReference_t362 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PropertyReference::set_target(UnityEngine.Component)
extern "C" void PropertyReference_set_target_m1838 (PropertyReference_t362 * __this, Component_t109 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PropertyReference::get_name()
extern "C" String_t* PropertyReference_get_name_m1839 (PropertyReference_t362 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PropertyReference::set_name(System.String)
extern "C" void PropertyReference_set_name_m1840 (PropertyReference_t362 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PropertyReference::get_isValid()
extern "C" bool PropertyReference_get_isValid_m1841 (PropertyReference_t362 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PropertyReference::get_isEnabled()
extern "C" bool PropertyReference_get_isEnabled_m1842 (PropertyReference_t362 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type PropertyReference::GetPropertyType()
extern "C" Type_t * PropertyReference_GetPropertyType_m1843 (PropertyReference_t362 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PropertyReference::Equals(System.Object)
extern "C" bool PropertyReference_Equals_m1844 (PropertyReference_t362 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PropertyReference::GetHashCode()
extern "C" int32_t PropertyReference_GetHashCode_m1845 (PropertyReference_t362 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PropertyReference::Set(UnityEngine.Component,System.String)
extern "C" void PropertyReference_Set_m1846 (PropertyReference_t362 * __this, Component_t109 * ___target, String_t* ___methodName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PropertyReference::Clear()
extern "C" void PropertyReference_Clear_m1847 (PropertyReference_t362 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PropertyReference::Reset()
extern "C" void PropertyReference_Reset_m1848 (PropertyReference_t362 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PropertyReference::ToString()
extern "C" String_t* PropertyReference_ToString_m1849 (PropertyReference_t362 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PropertyReference::ToString(UnityEngine.Component,System.String)
extern "C" String_t* PropertyReference_ToString_m1850 (Object_t * __this /* static, unused */, Component_t109 * ___comp, String_t* ___property, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object PropertyReference::Get()
extern "C" Object_t * PropertyReference_Get_m1851 (PropertyReference_t362 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PropertyReference::Set(System.Object)
extern "C" bool PropertyReference_Set_m1852 (PropertyReference_t362 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PropertyReference::Cache()
extern "C" bool PropertyReference_Cache_m1853 (PropertyReference_t362 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PropertyReference::Convert(System.Object&)
extern "C" bool PropertyReference_Convert_m1854 (PropertyReference_t362 * __this, Object_t ** ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PropertyReference::Convert(System.Type,System.Type)
extern "C" bool PropertyReference_Convert_m1855 (Object_t * __this /* static, unused */, Type_t * ___from, Type_t * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PropertyReference::Convert(System.Object,System.Type)
extern "C" bool PropertyReference_Convert_m1856 (Object_t * __this /* static, unused */, Object_t * ___value, Type_t * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PropertyReference::Convert(System.Object&,System.Type,System.Type)
extern "C" bool PropertyReference_Convert_m1857 (Object_t * __this /* static, unused */, Object_t ** ___value, Type_t * ___from, Type_t * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
