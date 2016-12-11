#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.ParticleSystem
struct ParticleSystem_t381473177;

#include "mscorlib_System_ValueType1744280289.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystem/EmissionModule
struct  EmissionModule_t3736167958 
{
public:
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/EmissionModule::m_ParticleSystem
	ParticleSystem_t381473177 * ___m_ParticleSystem_0;

public:
	inline static int32_t get_offset_of_m_ParticleSystem_0() { return static_cast<int32_t>(offsetof(EmissionModule_t3736167958, ___m_ParticleSystem_0)); }
	inline ParticleSystem_t381473177 * get_m_ParticleSystem_0() const { return ___m_ParticleSystem_0; }
	inline ParticleSystem_t381473177 ** get_address_of_m_ParticleSystem_0() { return &___m_ParticleSystem_0; }
	inline void set_m_ParticleSystem_0(ParticleSystem_t381473177 * value)
	{
		___m_ParticleSystem_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_ParticleSystem_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_t3736167958_marshaled_pinvoke
{
	ParticleSystem_t381473177 * ___m_ParticleSystem_0;
};
// Native definition for marshalling of: UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_t3736167958_marshaled_com
{
	ParticleSystem_t381473177 * ___m_ParticleSystem_0;
};
