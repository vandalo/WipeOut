#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.ParticleCollisionEvent>
struct List_1_t4069111746;
// UnityEngine.ParticleSystem
struct ParticleSystem_t381473177;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Effects.WaterHoseParticles
struct  WaterHoseParticles_t3439746453  : public MonoBehaviour_t667441552
{
public:
	// System.Single UnityStandardAssets.Effects.WaterHoseParticles::force
	float ___force_3;
	// System.Collections.Generic.List`1<UnityEngine.ParticleCollisionEvent> UnityStandardAssets.Effects.WaterHoseParticles::m_CollisionEvents
	List_1_t4069111746 * ___m_CollisionEvents_4;
	// UnityEngine.ParticleSystem UnityStandardAssets.Effects.WaterHoseParticles::m_ParticleSystem
	ParticleSystem_t381473177 * ___m_ParticleSystem_5;

public:
	inline static int32_t get_offset_of_force_3() { return static_cast<int32_t>(offsetof(WaterHoseParticles_t3439746453, ___force_3)); }
	inline float get_force_3() const { return ___force_3; }
	inline float* get_address_of_force_3() { return &___force_3; }
	inline void set_force_3(float value)
	{
		___force_3 = value;
	}

	inline static int32_t get_offset_of_m_CollisionEvents_4() { return static_cast<int32_t>(offsetof(WaterHoseParticles_t3439746453, ___m_CollisionEvents_4)); }
	inline List_1_t4069111746 * get_m_CollisionEvents_4() const { return ___m_CollisionEvents_4; }
	inline List_1_t4069111746 ** get_address_of_m_CollisionEvents_4() { return &___m_CollisionEvents_4; }
	inline void set_m_CollisionEvents_4(List_1_t4069111746 * value)
	{
		___m_CollisionEvents_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_CollisionEvents_4, value);
	}

	inline static int32_t get_offset_of_m_ParticleSystem_5() { return static_cast<int32_t>(offsetof(WaterHoseParticles_t3439746453, ___m_ParticleSystem_5)); }
	inline ParticleSystem_t381473177 * get_m_ParticleSystem_5() const { return ___m_ParticleSystem_5; }
	inline ParticleSystem_t381473177 ** get_address_of_m_ParticleSystem_5() { return &___m_ParticleSystem_5; }
	inline void set_m_ParticleSystem_5(ParticleSystem_t381473177 * value)
	{
		___m_ParticleSystem_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_ParticleSystem_5, value);
	}
};

struct WaterHoseParticles_t3439746453_StaticFields
{
public:
	// System.Single UnityStandardAssets.Effects.WaterHoseParticles::lastSoundTime
	float ___lastSoundTime_2;

public:
	inline static int32_t get_offset_of_lastSoundTime_2() { return static_cast<int32_t>(offsetof(WaterHoseParticles_t3439746453_StaticFields, ___lastSoundTime_2)); }
	inline float get_lastSoundTime_2() const { return ___lastSoundTime_2; }
	inline float* get_address_of_lastSoundTime_2() { return &___lastSoundTime_2; }
	inline void set_lastSoundTime_2(float value)
	{
		___lastSoundTime_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
