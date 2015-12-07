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

// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t1698;
// System.Reflection.Assembly
struct Assembly_t1496;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Reflection.Module
struct Module_t1712;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1123;
// System.Reflection.Binder
struct Binder_t1111;
// System.Type[]
struct TypeU5BU5D_t1092;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t1112;
// System.Object[]
struct ObjectU5BU5D_t72;
// System.Reflection.Emit.ConstructorBuilder
struct ConstructorBuilder_t1696;
// System.Type[][]
struct TypeU5BU5DU5BU5D_t1700;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t2170;
// System.Reflection.EventInfo
struct EventInfo_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t2171;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t1764;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Object
struct Object_t;
// System.Globalization.CultureInfo
struct CultureInfo_t1113;
// System.String[]
struct StringU5BU5D_t76;
// System.Exception
struct Exception_t75;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_TypeAttributes.h"
#include "mscorlib_System_Reflection_BindingFlags.h"
#include "mscorlib_System_Reflection_CallingConventions.h"
#include "mscorlib_System_Reflection_MethodAttributes.h"
#include "mscorlib_System_RuntimeTypeHandle.h"

// System.Reflection.TypeAttributes System.Reflection.Emit.TypeBuilder::GetAttributeFlagsImpl()
extern "C" int32_t TypeBuilder_GetAttributeFlagsImpl_m11261 (TypeBuilder_t1698 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.TypeBuilder::setup_internal_class(System.Reflection.Emit.TypeBuilder)
extern "C" void TypeBuilder_setup_internal_class_m11262 (TypeBuilder_t1698 * __this, TypeBuilder_t1698 * ___tb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.TypeBuilder::create_generic_class()
extern "C" void TypeBuilder_create_generic_class_m11263 (TypeBuilder_t1698 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Emit.TypeBuilder::get_Assembly()
extern "C" Assembly_t1496 * TypeBuilder_get_Assembly_m11264 (TypeBuilder_t1698 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_AssemblyQualifiedName()
extern "C" String_t* TypeBuilder_get_AssemblyQualifiedName_m11265 (TypeBuilder_t1698 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_BaseType()
extern "C" Type_t * TypeBuilder_get_BaseType_m11266 (TypeBuilder_t1698 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_DeclaringType()
extern "C" Type_t * TypeBuilder_get_DeclaringType_m11267 (TypeBuilder_t1698 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_UnderlyingSystemType()
extern "C" Type_t * TypeBuilder_get_UnderlyingSystemType_m11268 (TypeBuilder_t1698 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_FullName()
extern "C" String_t* TypeBuilder_get_FullName_m11269 (TypeBuilder_t1698 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.TypeBuilder::get_Module()
extern "C" Module_t1712 * TypeBuilder_get_Module_m11270 (TypeBuilder_t1698 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_Name()
extern "C" String_t* TypeBuilder_get_Name_m11271 (TypeBuilder_t1698 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_Namespace()
extern "C" String_t* TypeBuilder_get_Namespace_m11272 (TypeBuilder_t1698 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_ReflectedType()
extern "C" Type_t * TypeBuilder_get_ReflectedType_m11273 (TypeBuilder_t1698 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Reflection.Emit.TypeBuilder::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" ConstructorInfo_t1123 * TypeBuilder_GetConstructorImpl_m11274 (TypeBuilder_t1698 * __this, int32_t ___bindingAttr, Binder_t1111 * ___binder, int32_t ___callConvention, TypeU5BU5D_t1092* ___types, ParameterModifierU5BU5D_t1112* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsDefined(System.Type,System.Boolean)
extern "C" bool TypeBuilder_IsDefined_m11275 (TypeBuilder_t1698 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.TypeBuilder::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t72* TypeBuilder_GetCustomAttributes_m11276 (TypeBuilder_t1698 * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.TypeBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t72* TypeBuilder_GetCustomAttributes_m11277 (TypeBuilder_t1698 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ConstructorBuilder System.Reflection.Emit.TypeBuilder::DefineConstructor(System.Reflection.MethodAttributes,System.Reflection.CallingConventions,System.Type[])
extern "C" ConstructorBuilder_t1696 * TypeBuilder_DefineConstructor_m11278 (TypeBuilder_t1698 * __this, int32_t ___attributes, int32_t ___callingConvention, TypeU5BU5D_t1092* ___parameterTypes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ConstructorBuilder System.Reflection.Emit.TypeBuilder::DefineConstructor(System.Reflection.MethodAttributes,System.Reflection.CallingConventions,System.Type[],System.Type[][],System.Type[][])
extern "C" ConstructorBuilder_t1696 * TypeBuilder_DefineConstructor_m11279 (TypeBuilder_t1698 * __this, int32_t ___attributes, int32_t ___callingConvention, TypeU5BU5D_t1092* ___parameterTypes, TypeU5BU5DU5BU5D_t1700* ___requiredCustomModifiers, TypeU5BU5DU5BU5D_t1700* ___optionalCustomModifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ConstructorBuilder System.Reflection.Emit.TypeBuilder::DefineDefaultConstructor(System.Reflection.MethodAttributes)
extern "C" ConstructorBuilder_t1696 * TypeBuilder_DefineDefaultConstructor_m11280 (TypeBuilder_t1698 * __this, int32_t ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::create_runtime_class(System.Reflection.Emit.TypeBuilder)
extern "C" Type_t * TypeBuilder_create_runtime_class_m11281 (TypeBuilder_t1698 * __this, TypeBuilder_t1698 * ___tb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::is_nested_in(System.Type)
extern "C" bool TypeBuilder_is_nested_in_m11282 (TypeBuilder_t1698 * __this, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::has_ctor_method()
extern "C" bool TypeBuilder_has_ctor_method_m11283 (TypeBuilder_t1698 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::CreateType()
extern "C" Type_t * TypeBuilder_CreateType_m11284 (TypeBuilder_t1698 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.TypeBuilder::GetConstructors(System.Reflection.BindingFlags)
extern "C" ConstructorInfoU5BU5D_t2170* TypeBuilder_GetConstructors_m11285 (TypeBuilder_t1698 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.TypeBuilder::GetConstructorsInternal(System.Reflection.BindingFlags)
extern "C" ConstructorInfoU5BU5D_t2170* TypeBuilder_GetConstructorsInternal_m11286 (TypeBuilder_t1698 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::GetElementType()
extern "C" Type_t * TypeBuilder_GetElementType_m11287 (TypeBuilder_t1698 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.Reflection.Emit.TypeBuilder::GetEvent(System.String,System.Reflection.BindingFlags)
extern "C" EventInfo_t * TypeBuilder_GetEvent_m11288 (TypeBuilder_t1698 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.Emit.TypeBuilder::GetField(System.String,System.Reflection.BindingFlags)
extern "C" FieldInfo_t * TypeBuilder_GetField_m11289 (TypeBuilder_t1698 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.Reflection.Emit.TypeBuilder::GetFields(System.Reflection.BindingFlags)
extern "C" FieldInfoU5BU5D_t2171* TypeBuilder_GetFields_m11290 (TypeBuilder_t1698 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.TypeBuilder::GetInterfaces()
extern "C" TypeU5BU5D_t1092* TypeBuilder_GetInterfaces_m11291 (TypeBuilder_t1698 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.TypeBuilder::GetMethodsByName(System.String,System.Reflection.BindingFlags,System.Boolean,System.Type)
extern "C" MethodInfoU5BU5D_t1764* TypeBuilder_GetMethodsByName_m11292 (TypeBuilder_t1698 * __this, String_t* ___name, int32_t ___bindingAttr, bool ___ignoreCase, Type_t * ___reflected_type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.TypeBuilder::GetMethods(System.Reflection.BindingFlags)
extern "C" MethodInfoU5BU5D_t1764* TypeBuilder_GetMethods_m11293 (TypeBuilder_t1698 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.TypeBuilder::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" MethodInfo_t * TypeBuilder_GetMethodImpl_m11294 (TypeBuilder_t1698 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1111 * ___binder, int32_t ___callConvention, TypeU5BU5D_t1092* ___types, ParameterModifierU5BU5D_t1112* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Reflection.Emit.TypeBuilder::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C" PropertyInfo_t * TypeBuilder_GetPropertyImpl_m11295 (TypeBuilder_t1698 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1111 * ___binder, Type_t * ___returnType, TypeU5BU5D_t1092* ___types, ParameterModifierU5BU5D_t1112* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::HasElementTypeImpl()
extern "C" bool TypeBuilder_HasElementTypeImpl_m11296 (TypeBuilder_t1698 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.TypeBuilder::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern "C" Object_t * TypeBuilder_InvokeMember_m11297 (TypeBuilder_t1698 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t1111 * ___binder, Object_t * ___target, ObjectU5BU5D_t72* ___args, ParameterModifierU5BU5D_t1112* ___modifiers, CultureInfo_t1113 * ___culture, StringU5BU5D_t76* ___namedParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsArrayImpl()
extern "C" bool TypeBuilder_IsArrayImpl_m11298 (TypeBuilder_t1698 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsByRefImpl()
extern "C" bool TypeBuilder_IsByRefImpl_m11299 (TypeBuilder_t1698 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsPointerImpl()
extern "C" bool TypeBuilder_IsPointerImpl_m11300 (TypeBuilder_t1698 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsPrimitiveImpl()
extern "C" bool TypeBuilder_IsPrimitiveImpl_m11301 (TypeBuilder_t1698 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsValueTypeImpl()
extern "C" bool TypeBuilder_IsValueTypeImpl_m11302 (TypeBuilder_t1698 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::MakeGenericType(System.Type[])
extern "C" Type_t * TypeBuilder_MakeGenericType_m11303 (TypeBuilder_t1698 * __this, TypeU5BU5D_t1092* ___typeArguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Reflection.Emit.TypeBuilder::get_TypeHandle()
extern "C" RuntimeTypeHandle_t1513  TypeBuilder_get_TypeHandle_m11304 (TypeBuilder_t1698 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.TypeBuilder::SetParent(System.Type)
extern "C" void TypeBuilder_SetParent_m11305 (TypeBuilder_t1698 * __this, Type_t * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.TypeBuilder::get_next_table_index(System.Object,System.Int32,System.Boolean)
extern "C" int32_t TypeBuilder_get_next_table_index_m11306 (TypeBuilder_t1698 * __this, Object_t * ___obj, int32_t ___table, bool ___inc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsCompilerContext()
extern "C" bool TypeBuilder_get_IsCompilerContext_m11307 (TypeBuilder_t1698 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_is_created()
extern "C" bool TypeBuilder_get_is_created_m11308 (TypeBuilder_t1698 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.TypeBuilder::not_supported()
extern "C" Exception_t75 * TypeBuilder_not_supported_m11309 (TypeBuilder_t1698 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.TypeBuilder::check_not_created()
extern "C" void TypeBuilder_check_not_created_m11310 (TypeBuilder_t1698 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.TypeBuilder::check_created()
extern "C" void TypeBuilder_check_created_m11311 (TypeBuilder_t1698 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::ToString()
extern "C" String_t* TypeBuilder_ToString_m11312 (TypeBuilder_t1698 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsAssignableFrom(System.Type)
extern "C" bool TypeBuilder_IsAssignableFrom_m11313 (TypeBuilder_t1698 * __this, Type_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsSubclassOf(System.Type)
extern "C" bool TypeBuilder_IsSubclassOf_m11314 (TypeBuilder_t1698 * __this, Type_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsAssignableTo(System.Type)
extern "C" bool TypeBuilder_IsAssignableTo_m11315 (TypeBuilder_t1698 * __this, Type_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.TypeBuilder::GetGenericArguments()
extern "C" TypeU5BU5D_t1092* TypeBuilder_GetGenericArguments_m11316 (TypeBuilder_t1698 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::GetGenericTypeDefinition()
extern "C" Type_t * TypeBuilder_GetGenericTypeDefinition_m11317 (TypeBuilder_t1698 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_ContainsGenericParameters()
extern "C" bool TypeBuilder_get_ContainsGenericParameters_m11318 (TypeBuilder_t1698 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericParameter()
extern "C" bool TypeBuilder_get_IsGenericParameter_m11319 (TypeBuilder_t1698 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericTypeDefinition()
extern "C" bool TypeBuilder_get_IsGenericTypeDefinition_m11320 (TypeBuilder_t1698 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericType()
extern "C" bool TypeBuilder_get_IsGenericType_m11321 (TypeBuilder_t1698 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
