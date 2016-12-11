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

// UnityEngine.ParticleSystem
struct ParticleSystem_t381473177;
// UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_t3736167958;
struct EmissionModule_t3736167958_marshaled_pinvoke;
struct EmissionModule_t3736167958_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_ParticleSystem_EmissionMod3736167958.h"
#include "UnityEngine_UnityEngine_ParticleSystem381473177.h"

// System.Void UnityEngine.ParticleSystem/EmissionModule::.ctor(UnityEngine.ParticleSystem)
extern "C"  void EmissionModule__ctor_m1408409344 (EmissionModule_t3736167958 * __this, ParticleSystem_t381473177 * ___particleSystem0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/EmissionModule::set_enabled(System.Boolean)
extern "C"  void EmissionModule_set_enabled_m3114269541 (EmissionModule_t3736167958 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/EmissionModule::SetEnabled(UnityEngine.ParticleSystem,System.Boolean)
extern "C"  void EmissionModule_SetEnabled_m1550105266 (Il2CppObject * __this /* static, unused */, ParticleSystem_t381473177 * ___system0, bool ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct EmissionModule_t3736167958;
struct EmissionModule_t3736167958_marshaled_pinvoke;

extern "C" void EmissionModule_t3736167958_marshal_pinvoke(const EmissionModule_t3736167958& unmarshaled, EmissionModule_t3736167958_marshaled_pinvoke& marshaled);
extern "C" void EmissionModule_t3736167958_marshal_pinvoke_back(const EmissionModule_t3736167958_marshaled_pinvoke& marshaled, EmissionModule_t3736167958& unmarshaled);
extern "C" void EmissionModule_t3736167958_marshal_pinvoke_cleanup(EmissionModule_t3736167958_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct EmissionModule_t3736167958;
struct EmissionModule_t3736167958_marshaled_com;

extern "C" void EmissionModule_t3736167958_marshal_com(const EmissionModule_t3736167958& unmarshaled, EmissionModule_t3736167958_marshaled_com& marshaled);
extern "C" void EmissionModule_t3736167958_marshal_com_back(const EmissionModule_t3736167958_marshaled_com& marshaled, EmissionModule_t3736167958& unmarshaled);
extern "C" void EmissionModule_t3736167958_marshal_com_cleanup(EmissionModule_t3736167958_marshaled_com& marshaled);
