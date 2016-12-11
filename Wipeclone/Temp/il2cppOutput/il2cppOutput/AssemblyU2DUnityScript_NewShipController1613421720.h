#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody
struct Rigidbody_t3346577219;
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

// NewShipController
struct  NewShipController_t1613421720  : public MonoBehaviour_t667441552
{
public:
	// System.Single NewShipController::speed
	float ___speed_2;
	// System.Single NewShipController::torque
	float ___torque_3;
	// System.Single NewShipController::hoverForce
	float ___hoverForce_4;
	// System.Single NewShipController::hoverHeight
	float ___hoverHeight_5;
	// System.Single NewShipController::powerInput
	float ___powerInput_6;
	// System.Single NewShipController::turnInput
	float ___turnInput_7;
	// UnityEngine.Rigidbody NewShipController::shipRigidBody
	Rigidbody_t3346577219 * ___shipRigidBody_8;
	// System.Int32 NewShipController::maxVel
	int32_t ___maxVel_9;
	// UnityEngine.Transform NewShipController::rotationPoint
	Transform_t1659122786 * ___rotationPoint_10;
	// System.Single NewShipController::maxAngularVelocity
	float ___maxAngularVelocity_11;
	// UnityEngine.ParticleSystem NewShipController::fire
	ParticleSystem_t381473177 * ___fire_12;
	// UnityEngine.Transform NewShipController::projectile
	Transform_t1659122786 * ___projectile_13;
	// System.Single NewShipController::bulletSpeed
	float ___bulletSpeed_14;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(NewShipController_t1613421720, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_torque_3() { return static_cast<int32_t>(offsetof(NewShipController_t1613421720, ___torque_3)); }
	inline float get_torque_3() const { return ___torque_3; }
	inline float* get_address_of_torque_3() { return &___torque_3; }
	inline void set_torque_3(float value)
	{
		___torque_3 = value;
	}

	inline static int32_t get_offset_of_hoverForce_4() { return static_cast<int32_t>(offsetof(NewShipController_t1613421720, ___hoverForce_4)); }
	inline float get_hoverForce_4() const { return ___hoverForce_4; }
	inline float* get_address_of_hoverForce_4() { return &___hoverForce_4; }
	inline void set_hoverForce_4(float value)
	{
		___hoverForce_4 = value;
	}

	inline static int32_t get_offset_of_hoverHeight_5() { return static_cast<int32_t>(offsetof(NewShipController_t1613421720, ___hoverHeight_5)); }
	inline float get_hoverHeight_5() const { return ___hoverHeight_5; }
	inline float* get_address_of_hoverHeight_5() { return &___hoverHeight_5; }
	inline void set_hoverHeight_5(float value)
	{
		___hoverHeight_5 = value;
	}

	inline static int32_t get_offset_of_powerInput_6() { return static_cast<int32_t>(offsetof(NewShipController_t1613421720, ___powerInput_6)); }
	inline float get_powerInput_6() const { return ___powerInput_6; }
	inline float* get_address_of_powerInput_6() { return &___powerInput_6; }
	inline void set_powerInput_6(float value)
	{
		___powerInput_6 = value;
	}

	inline static int32_t get_offset_of_turnInput_7() { return static_cast<int32_t>(offsetof(NewShipController_t1613421720, ___turnInput_7)); }
	inline float get_turnInput_7() const { return ___turnInput_7; }
	inline float* get_address_of_turnInput_7() { return &___turnInput_7; }
	inline void set_turnInput_7(float value)
	{
		___turnInput_7 = value;
	}

	inline static int32_t get_offset_of_shipRigidBody_8() { return static_cast<int32_t>(offsetof(NewShipController_t1613421720, ___shipRigidBody_8)); }
	inline Rigidbody_t3346577219 * get_shipRigidBody_8() const { return ___shipRigidBody_8; }
	inline Rigidbody_t3346577219 ** get_address_of_shipRigidBody_8() { return &___shipRigidBody_8; }
	inline void set_shipRigidBody_8(Rigidbody_t3346577219 * value)
	{
		___shipRigidBody_8 = value;
		Il2CppCodeGenWriteBarrier(&___shipRigidBody_8, value);
	}

	inline static int32_t get_offset_of_maxVel_9() { return static_cast<int32_t>(offsetof(NewShipController_t1613421720, ___maxVel_9)); }
	inline int32_t get_maxVel_9() const { return ___maxVel_9; }
	inline int32_t* get_address_of_maxVel_9() { return &___maxVel_9; }
	inline void set_maxVel_9(int32_t value)
	{
		___maxVel_9 = value;
	}

	inline static int32_t get_offset_of_rotationPoint_10() { return static_cast<int32_t>(offsetof(NewShipController_t1613421720, ___rotationPoint_10)); }
	inline Transform_t1659122786 * get_rotationPoint_10() const { return ___rotationPoint_10; }
	inline Transform_t1659122786 ** get_address_of_rotationPoint_10() { return &___rotationPoint_10; }
	inline void set_rotationPoint_10(Transform_t1659122786 * value)
	{
		___rotationPoint_10 = value;
		Il2CppCodeGenWriteBarrier(&___rotationPoint_10, value);
	}

	inline static int32_t get_offset_of_maxAngularVelocity_11() { return static_cast<int32_t>(offsetof(NewShipController_t1613421720, ___maxAngularVelocity_11)); }
	inline float get_maxAngularVelocity_11() const { return ___maxAngularVelocity_11; }
	inline float* get_address_of_maxAngularVelocity_11() { return &___maxAngularVelocity_11; }
	inline void set_maxAngularVelocity_11(float value)
	{
		___maxAngularVelocity_11 = value;
	}

	inline static int32_t get_offset_of_fire_12() { return static_cast<int32_t>(offsetof(NewShipController_t1613421720, ___fire_12)); }
	inline ParticleSystem_t381473177 * get_fire_12() const { return ___fire_12; }
	inline ParticleSystem_t381473177 ** get_address_of_fire_12() { return &___fire_12; }
	inline void set_fire_12(ParticleSystem_t381473177 * value)
	{
		___fire_12 = value;
		Il2CppCodeGenWriteBarrier(&___fire_12, value);
	}

	inline static int32_t get_offset_of_projectile_13() { return static_cast<int32_t>(offsetof(NewShipController_t1613421720, ___projectile_13)); }
	inline Transform_t1659122786 * get_projectile_13() const { return ___projectile_13; }
	inline Transform_t1659122786 ** get_address_of_projectile_13() { return &___projectile_13; }
	inline void set_projectile_13(Transform_t1659122786 * value)
	{
		___projectile_13 = value;
		Il2CppCodeGenWriteBarrier(&___projectile_13, value);
	}

	inline static int32_t get_offset_of_bulletSpeed_14() { return static_cast<int32_t>(offsetof(NewShipController_t1613421720, ___bulletSpeed_14)); }
	inline float get_bulletSpeed_14() const { return ___bulletSpeed_14; }
	inline float* get_address_of_bulletSpeed_14() { return &___bulletSpeed_14; }
	inline void set_bulletSpeed_14(float value)
	{
		___bulletSpeed_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
