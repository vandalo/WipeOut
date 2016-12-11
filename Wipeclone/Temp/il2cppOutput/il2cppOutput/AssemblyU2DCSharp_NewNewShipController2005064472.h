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

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NewNewShipController
struct  NewNewShipController_t2005064472  : public MonoBehaviour_t667441552
{
public:
	// System.Single NewNewShipController::speed
	float ___speed_2;
	// System.Single NewNewShipController::turnSpeed
	float ___turnSpeed_3;
	// System.Single NewNewShipController::forwardRotationRegen
	float ___forwardRotationRegen_4;
	// System.Single NewNewShipController::hoverForce
	float ___hoverForce_5;
	// System.Single NewNewShipController::hoverHeight
	float ___hoverHeight_6;
	// System.Single NewNewShipController::powerInput
	float ___powerInput_7;
	// System.Single NewNewShipController::turnInput
	float ___turnInput_8;
	// UnityEngine.Rigidbody NewNewShipController::carRigidbody
	Rigidbody_t3346577219 * ___carRigidbody_9;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(NewNewShipController_t2005064472, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_turnSpeed_3() { return static_cast<int32_t>(offsetof(NewNewShipController_t2005064472, ___turnSpeed_3)); }
	inline float get_turnSpeed_3() const { return ___turnSpeed_3; }
	inline float* get_address_of_turnSpeed_3() { return &___turnSpeed_3; }
	inline void set_turnSpeed_3(float value)
	{
		___turnSpeed_3 = value;
	}

	inline static int32_t get_offset_of_forwardRotationRegen_4() { return static_cast<int32_t>(offsetof(NewNewShipController_t2005064472, ___forwardRotationRegen_4)); }
	inline float get_forwardRotationRegen_4() const { return ___forwardRotationRegen_4; }
	inline float* get_address_of_forwardRotationRegen_4() { return &___forwardRotationRegen_4; }
	inline void set_forwardRotationRegen_4(float value)
	{
		___forwardRotationRegen_4 = value;
	}

	inline static int32_t get_offset_of_hoverForce_5() { return static_cast<int32_t>(offsetof(NewNewShipController_t2005064472, ___hoverForce_5)); }
	inline float get_hoverForce_5() const { return ___hoverForce_5; }
	inline float* get_address_of_hoverForce_5() { return &___hoverForce_5; }
	inline void set_hoverForce_5(float value)
	{
		___hoverForce_5 = value;
	}

	inline static int32_t get_offset_of_hoverHeight_6() { return static_cast<int32_t>(offsetof(NewNewShipController_t2005064472, ___hoverHeight_6)); }
	inline float get_hoverHeight_6() const { return ___hoverHeight_6; }
	inline float* get_address_of_hoverHeight_6() { return &___hoverHeight_6; }
	inline void set_hoverHeight_6(float value)
	{
		___hoverHeight_6 = value;
	}

	inline static int32_t get_offset_of_powerInput_7() { return static_cast<int32_t>(offsetof(NewNewShipController_t2005064472, ___powerInput_7)); }
	inline float get_powerInput_7() const { return ___powerInput_7; }
	inline float* get_address_of_powerInput_7() { return &___powerInput_7; }
	inline void set_powerInput_7(float value)
	{
		___powerInput_7 = value;
	}

	inline static int32_t get_offset_of_turnInput_8() { return static_cast<int32_t>(offsetof(NewNewShipController_t2005064472, ___turnInput_8)); }
	inline float get_turnInput_8() const { return ___turnInput_8; }
	inline float* get_address_of_turnInput_8() { return &___turnInput_8; }
	inline void set_turnInput_8(float value)
	{
		___turnInput_8 = value;
	}

	inline static int32_t get_offset_of_carRigidbody_9() { return static_cast<int32_t>(offsetof(NewNewShipController_t2005064472, ___carRigidbody_9)); }
	inline Rigidbody_t3346577219 * get_carRigidbody_9() const { return ___carRigidbody_9; }
	inline Rigidbody_t3346577219 ** get_address_of_carRigidbody_9() { return &___carRigidbody_9; }
	inline void set_carRigidbody_9(Rigidbody_t3346577219 * value)
	{
		___carRigidbody_9 = value;
		Il2CppCodeGenWriteBarrier(&___carRigidbody_9, value);
	}
};

struct NewNewShipController_t2005064472_StaticFields
{
public:
	// System.Boolean NewNewShipController::playing
	bool ___playing_10;

public:
	inline static int32_t get_offset_of_playing_10() { return static_cast<int32_t>(offsetof(NewNewShipController_t2005064472_StaticFields, ___playing_10)); }
	inline bool get_playing_10() const { return ___playing_10; }
	inline bool* get_address_of_playing_10() { return &___playing_10; }
	inline void set_playing_10(bool value)
	{
		___playing_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
