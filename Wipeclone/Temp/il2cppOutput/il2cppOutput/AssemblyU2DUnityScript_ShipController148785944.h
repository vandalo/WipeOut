#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.ParticleSystem
struct ParticleSystem_t381473177;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ShipController
struct  ShipController_t148785944  : public MonoBehaviour_t667441552
{
public:
	// System.Single ShipController::speed
	float ___speed_2;
	// System.Single ShipController::torque
	float ___torque_3;
	// System.Int32 ShipController::maxVel
	int32_t ___maxVel_4;
	// System.Int32 ShipController::turboSpeed
	int32_t ___turboSpeed_5;
	// UnityEngine.Transform ShipController::rotationPoint
	Transform_t1659122786 * ___rotationPoint_6;
	// System.Single ShipController::maxAngularVelocity
	float ___maxAngularVelocity_7;
	// UnityEngine.ParticleSystem ShipController::fire
	ParticleSystem_t381473177 * ___fire_8;
	// System.Boolean ShipController::playing
	bool ___playing_10;
	// UnityEngine.Transform ShipController::projectile
	Transform_t1659122786 * ___projectile_11;
	// System.Single ShipController::bulletSpeed
	float ___bulletSpeed_12;
	// System.Int32 ShipController::is_correct
	int32_t ___is_correct_13;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(ShipController_t148785944, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_torque_3() { return static_cast<int32_t>(offsetof(ShipController_t148785944, ___torque_3)); }
	inline float get_torque_3() const { return ___torque_3; }
	inline float* get_address_of_torque_3() { return &___torque_3; }
	inline void set_torque_3(float value)
	{
		___torque_3 = value;
	}

	inline static int32_t get_offset_of_maxVel_4() { return static_cast<int32_t>(offsetof(ShipController_t148785944, ___maxVel_4)); }
	inline int32_t get_maxVel_4() const { return ___maxVel_4; }
	inline int32_t* get_address_of_maxVel_4() { return &___maxVel_4; }
	inline void set_maxVel_4(int32_t value)
	{
		___maxVel_4 = value;
	}

	inline static int32_t get_offset_of_turboSpeed_5() { return static_cast<int32_t>(offsetof(ShipController_t148785944, ___turboSpeed_5)); }
	inline int32_t get_turboSpeed_5() const { return ___turboSpeed_5; }
	inline int32_t* get_address_of_turboSpeed_5() { return &___turboSpeed_5; }
	inline void set_turboSpeed_5(int32_t value)
	{
		___turboSpeed_5 = value;
	}

	inline static int32_t get_offset_of_rotationPoint_6() { return static_cast<int32_t>(offsetof(ShipController_t148785944, ___rotationPoint_6)); }
	inline Transform_t1659122786 * get_rotationPoint_6() const { return ___rotationPoint_6; }
	inline Transform_t1659122786 ** get_address_of_rotationPoint_6() { return &___rotationPoint_6; }
	inline void set_rotationPoint_6(Transform_t1659122786 * value)
	{
		___rotationPoint_6 = value;
		Il2CppCodeGenWriteBarrier(&___rotationPoint_6, value);
	}

	inline static int32_t get_offset_of_maxAngularVelocity_7() { return static_cast<int32_t>(offsetof(ShipController_t148785944, ___maxAngularVelocity_7)); }
	inline float get_maxAngularVelocity_7() const { return ___maxAngularVelocity_7; }
	inline float* get_address_of_maxAngularVelocity_7() { return &___maxAngularVelocity_7; }
	inline void set_maxAngularVelocity_7(float value)
	{
		___maxAngularVelocity_7 = value;
	}

	inline static int32_t get_offset_of_fire_8() { return static_cast<int32_t>(offsetof(ShipController_t148785944, ___fire_8)); }
	inline ParticleSystem_t381473177 * get_fire_8() const { return ___fire_8; }
	inline ParticleSystem_t381473177 ** get_address_of_fire_8() { return &___fire_8; }
	inline void set_fire_8(ParticleSystem_t381473177 * value)
	{
		___fire_8 = value;
		Il2CppCodeGenWriteBarrier(&___fire_8, value);
	}

	inline static int32_t get_offset_of_playing_10() { return static_cast<int32_t>(offsetof(ShipController_t148785944, ___playing_10)); }
	inline bool get_playing_10() const { return ___playing_10; }
	inline bool* get_address_of_playing_10() { return &___playing_10; }
	inline void set_playing_10(bool value)
	{
		___playing_10 = value;
	}

	inline static int32_t get_offset_of_projectile_11() { return static_cast<int32_t>(offsetof(ShipController_t148785944, ___projectile_11)); }
	inline Transform_t1659122786 * get_projectile_11() const { return ___projectile_11; }
	inline Transform_t1659122786 ** get_address_of_projectile_11() { return &___projectile_11; }
	inline void set_projectile_11(Transform_t1659122786 * value)
	{
		___projectile_11 = value;
		Il2CppCodeGenWriteBarrier(&___projectile_11, value);
	}

	inline static int32_t get_offset_of_bulletSpeed_12() { return static_cast<int32_t>(offsetof(ShipController_t148785944, ___bulletSpeed_12)); }
	inline float get_bulletSpeed_12() const { return ___bulletSpeed_12; }
	inline float* get_address_of_bulletSpeed_12() { return &___bulletSpeed_12; }
	inline void set_bulletSpeed_12(float value)
	{
		___bulletSpeed_12 = value;
	}

	inline static int32_t get_offset_of_is_correct_13() { return static_cast<int32_t>(offsetof(ShipController_t148785944, ___is_correct_13)); }
	inline int32_t get_is_correct_13() const { return ___is_correct_13; }
	inline int32_t* get_address_of_is_correct_13() { return &___is_correct_13; }
	inline void set_is_correct_13(int32_t value)
	{
		___is_correct_13 = value;
	}
};

struct ShipController_t148785944_StaticFields
{
public:
	// System.Int32 ShipController::lap
	int32_t ___lap_9;

public:
	inline static int32_t get_offset_of_lap_9() { return static_cast<int32_t>(offsetof(ShipController_t148785944_StaticFields, ___lap_9)); }
	inline int32_t get_lap_9() const { return ___lap_9; }
	inline int32_t* get_address_of_lap_9() { return &___lap_9; }
	inline void set_lap_9(int32_t value)
	{
		___lap_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
