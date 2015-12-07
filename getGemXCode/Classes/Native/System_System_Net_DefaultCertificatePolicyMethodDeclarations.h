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

// System.Net.DefaultCertificatePolicy
struct DefaultCertificatePolicy_t1358;
// System.Net.ServicePoint
struct ServicePoint_t1322;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1262;
// System.Net.WebRequest
struct WebRequest_t1326;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.DefaultCertificatePolicy::.ctor()
extern "C" void DefaultCertificatePolicy__ctor_m7962 (DefaultCertificatePolicy_t1358 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.DefaultCertificatePolicy::CheckValidationResult(System.Net.ServicePoint,System.Security.Cryptography.X509Certificates.X509Certificate,System.Net.WebRequest,System.Int32)
extern "C" bool DefaultCertificatePolicy_CheckValidationResult_m7963 (DefaultCertificatePolicy_t1358 * __this, ServicePoint_t1322 * ___point, X509Certificate_t1262 * ___certificate, WebRequest_t1326 * ___request, int32_t ___certificateProblem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
