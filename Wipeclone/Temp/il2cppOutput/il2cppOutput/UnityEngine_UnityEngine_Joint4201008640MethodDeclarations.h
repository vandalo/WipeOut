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

// UnityEngine.Joint
struct Joint_t4201008640;
// UnityEngine.Rigidbody
struct Rigidbody_t3346577219;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rigidbody3346577219.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

// UnityEngine.Rigidbody UnityEngine.Joint::get_connectedBody()
extern "C"  Rigidbody_t3346577219 * Joint_get_connectedBody_m3483565964 (Joint_t4201008640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Joint::set_connectedBody(UnityEngine.Rigidbody)
extern "C"  void Joint_set_connectedBody_m2794572257 (Joint_t4201008640 * __this, Rigidbody_t3346577219 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Joint::set_anchor(UnityEngine.Vector3)
extern "C"  void Joint_set_anchor_m1010170386 (Joint_t4201008640 * __this, Vector3_t4282066566  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Joint::INTERNAL_set_anchor(UnityEngine.Vector3&)
extern "C"  void Joint_INTERNAL_set_anchor_m3282986580 (Joint_t4201008640 * __this, Vector3_t4282066566 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
