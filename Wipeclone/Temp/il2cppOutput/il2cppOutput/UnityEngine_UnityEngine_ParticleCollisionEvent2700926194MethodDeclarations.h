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

// UnityEngine.Component
struct Component_t3501516275;
// UnityEngine.ParticleCollisionEvent
struct ParticleCollisionEvent_t2700926194;
struct ParticleCollisionEvent_t2700926194_marshaled_pinvoke;
struct ParticleCollisionEvent_t2700926194_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_ParticleCollisionEvent2700926194.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

// UnityEngine.Vector3 UnityEngine.ParticleCollisionEvent::get_velocity()
extern "C"  Vector3_t4282066566  ParticleCollisionEvent_get_velocity_m1889477221 (ParticleCollisionEvent_t2700926194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.ParticleCollisionEvent::get_colliderComponent()
extern "C"  Component_t3501516275 * ParticleCollisionEvent_get_colliderComponent_m2607092912 (ParticleCollisionEvent_t2700926194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.ParticleCollisionEvent::InstanceIDToColliderComponent(System.Int32)
extern "C"  Component_t3501516275 * ParticleCollisionEvent_InstanceIDToColliderComponent_m1593768767 (Il2CppObject * __this /* static, unused */, int32_t ___instanceID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct ParticleCollisionEvent_t2700926194;
struct ParticleCollisionEvent_t2700926194_marshaled_pinvoke;

extern "C" void ParticleCollisionEvent_t2700926194_marshal_pinvoke(const ParticleCollisionEvent_t2700926194& unmarshaled, ParticleCollisionEvent_t2700926194_marshaled_pinvoke& marshaled);
extern "C" void ParticleCollisionEvent_t2700926194_marshal_pinvoke_back(const ParticleCollisionEvent_t2700926194_marshaled_pinvoke& marshaled, ParticleCollisionEvent_t2700926194& unmarshaled);
extern "C" void ParticleCollisionEvent_t2700926194_marshal_pinvoke_cleanup(ParticleCollisionEvent_t2700926194_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct ParticleCollisionEvent_t2700926194;
struct ParticleCollisionEvent_t2700926194_marshaled_com;

extern "C" void ParticleCollisionEvent_t2700926194_marshal_com(const ParticleCollisionEvent_t2700926194& unmarshaled, ParticleCollisionEvent_t2700926194_marshaled_com& marshaled);
extern "C" void ParticleCollisionEvent_t2700926194_marshal_com_back(const ParticleCollisionEvent_t2700926194_marshaled_com& marshaled, ParticleCollisionEvent_t2700926194& unmarshaled);
extern "C" void ParticleCollisionEvent_t2700926194_marshal_com_cleanup(ParticleCollisionEvent_t2700926194_marshaled_com& marshaled);
