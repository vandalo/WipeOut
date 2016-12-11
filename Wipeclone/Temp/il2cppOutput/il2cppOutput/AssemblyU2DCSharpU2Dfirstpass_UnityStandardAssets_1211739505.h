#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_t1536434148;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Effects.ExtinguishableParticleSystem
struct  ExtinguishableParticleSystem_t1211739505  : public MonoBehaviour_t667441552
{
public:
	// System.Single UnityStandardAssets.Effects.ExtinguishableParticleSystem::multiplier
	float ___multiplier_2;
	// UnityEngine.ParticleSystem[] UnityStandardAssets.Effects.ExtinguishableParticleSystem::m_Systems
	ParticleSystemU5BU5D_t1536434148* ___m_Systems_3;

public:
	inline static int32_t get_offset_of_multiplier_2() { return static_cast<int32_t>(offsetof(ExtinguishableParticleSystem_t1211739505, ___multiplier_2)); }
	inline float get_multiplier_2() const { return ___multiplier_2; }
	inline float* get_address_of_multiplier_2() { return &___multiplier_2; }
	inline void set_multiplier_2(float value)
	{
		___multiplier_2 = value;
	}

	inline static int32_t get_offset_of_m_Systems_3() { return static_cast<int32_t>(offsetof(ExtinguishableParticleSystem_t1211739505, ___m_Systems_3)); }
	inline ParticleSystemU5BU5D_t1536434148* get_m_Systems_3() const { return ___m_Systems_3; }
	inline ParticleSystemU5BU5D_t1536434148** get_address_of_m_Systems_3() { return &___m_Systems_3; }
	inline void set_m_Systems_3(ParticleSystemU5BU5D_t1536434148* value)
	{
		___m_Systems_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_Systems_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
