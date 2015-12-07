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

// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t72;
// System.Reflection.ICustomAttributeProvider
struct ICustomAttributeProvider_t2185;
// System.Type
struct Type_t;
// System.Attribute
struct Attribute_t165;
// System.Reflection.CustomAttributeData[]
struct CustomAttributeDataU5BU5D_t2184;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeData>
struct IList_1_t2174;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.AttributeUsageAttribute
struct AttributeUsageAttribute_t1503;

#include "codegen/il2cpp-codegen.h"

// System.Void System.MonoCustomAttrs::.cctor()
extern "C" void MonoCustomAttrs__cctor_m13611 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoCustomAttrs::IsUserCattrProvider(System.Object)
extern "C" bool MonoCustomAttrs_IsUserCattrProvider_m13612 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoCustomAttrs::GetCustomAttributesInternal(System.Reflection.ICustomAttributeProvider,System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t72* MonoCustomAttrs_GetCustomAttributesInternal_m13613 (Object_t * __this /* static, unused */, Object_t * ___obj, Type_t * ___attributeType, bool ___pseudoAttrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoCustomAttrs::GetPseudoCustomAttributes(System.Reflection.ICustomAttributeProvider,System.Type)
extern "C" ObjectU5BU5D_t72* MonoCustomAttrs_GetPseudoCustomAttributes_m13614 (Object_t * __this /* static, unused */, Object_t * ___obj, Type_t * ___attributeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoCustomAttrs::GetCustomAttributesBase(System.Reflection.ICustomAttributeProvider,System.Type)
extern "C" ObjectU5BU5D_t72* MonoCustomAttrs_GetCustomAttributesBase_m13615 (Object_t * __this /* static, unused */, Object_t * ___obj, Type_t * ___attributeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute System.MonoCustomAttrs::GetCustomAttribute(System.Reflection.ICustomAttributeProvider,System.Type,System.Boolean)
extern "C" Attribute_t165 * MonoCustomAttrs_GetCustomAttribute_m13616 (Object_t * __this /* static, unused */, Object_t * ___obj, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoCustomAttrs::GetCustomAttributes(System.Reflection.ICustomAttributeProvider,System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t72* MonoCustomAttrs_GetCustomAttributes_m13617 (Object_t * __this /* static, unused */, Object_t * ___obj, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoCustomAttrs::GetCustomAttributes(System.Reflection.ICustomAttributeProvider,System.Boolean)
extern "C" ObjectU5BU5D_t72* MonoCustomAttrs_GetCustomAttributes_m13618 (Object_t * __this /* static, unused */, Object_t * ___obj, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CustomAttributeData[] System.MonoCustomAttrs::GetCustomAttributesDataInternal(System.Reflection.ICustomAttributeProvider)
extern "C" CustomAttributeDataU5BU5D_t2184* MonoCustomAttrs_GetCustomAttributesDataInternal_m13619 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeData> System.MonoCustomAttrs::GetCustomAttributesData(System.Reflection.ICustomAttributeProvider)
extern "C" Object_t* MonoCustomAttrs_GetCustomAttributesData_m13620 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoCustomAttrs::IsDefined(System.Reflection.ICustomAttributeProvider,System.Type,System.Boolean)
extern "C" bool MonoCustomAttrs_IsDefined_m13621 (Object_t * __this /* static, unused */, Object_t * ___obj, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoCustomAttrs::IsDefinedInternal(System.Reflection.ICustomAttributeProvider,System.Type)
extern "C" bool MonoCustomAttrs_IsDefinedInternal_m13622 (Object_t * __this /* static, unused */, Object_t * ___obj, Type_t * ___AttributeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.MonoCustomAttrs::GetBasePropertyDefinition(System.Reflection.PropertyInfo)
extern "C" PropertyInfo_t * MonoCustomAttrs_GetBasePropertyDefinition_m13623 (Object_t * __this /* static, unused */, PropertyInfo_t * ___property, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ICustomAttributeProvider System.MonoCustomAttrs::GetBase(System.Reflection.ICustomAttributeProvider)
extern "C" Object_t * MonoCustomAttrs_GetBase_m13624 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AttributeUsageAttribute System.MonoCustomAttrs::RetrieveAttributeUsage(System.Type)
extern "C" AttributeUsageAttribute_t1503 * MonoCustomAttrs_RetrieveAttributeUsage_m13625 (Object_t * __this /* static, unused */, Type_t * ___attributeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
