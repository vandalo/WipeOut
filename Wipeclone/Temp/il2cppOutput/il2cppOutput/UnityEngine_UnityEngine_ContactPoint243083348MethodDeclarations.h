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

// UnityEngine.ContactPoint
struct ContactPoint_t243083348;
struct ContactPoint_t243083348_marshaled_pinvoke;
struct ContactPoint_t243083348_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_ContactPoint243083348.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

// UnityEngine.Vector3 UnityEngine.ContactPoint::get_point()
extern "C"  Vector3_t4282066566  ContactPoint_get_point_m1387782344 (ContactPoint_t243083348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.ContactPoint::get_normal()
extern "C"  Vector3_t4282066566  ContactPoint_get_normal_m1137164497 (ContactPoint_t243083348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct ContactPoint_t243083348;
struct ContactPoint_t243083348_marshaled_pinvoke;

extern "C" void ContactPoint_t243083348_marshal_pinvoke(const ContactPoint_t243083348& unmarshaled, ContactPoint_t243083348_marshaled_pinvoke& marshaled);
extern "C" void ContactPoint_t243083348_marshal_pinvoke_back(const ContactPoint_t243083348_marshaled_pinvoke& marshaled, ContactPoint_t243083348& unmarshaled);
extern "C" void ContactPoint_t243083348_marshal_pinvoke_cleanup(ContactPoint_t243083348_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct ContactPoint_t243083348;
struct ContactPoint_t243083348_marshaled_com;

extern "C" void ContactPoint_t243083348_marshal_com(const ContactPoint_t243083348& unmarshaled, ContactPoint_t243083348_marshaled_com& marshaled);
extern "C" void ContactPoint_t243083348_marshal_com_back(const ContactPoint_t243083348_marshaled_com& marshaled, ContactPoint_t243083348& unmarshaled);
extern "C" void ContactPoint_t243083348_marshal_com_cleanup(ContactPoint_t243083348_marshaled_com& marshaled);
