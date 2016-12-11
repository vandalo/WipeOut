#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType1744280289.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint
struct  RoutePoint_t2172029929 
{
public:
	// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit/RoutePoint::position
	Vector3_t4282066566  ___position_0;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit/RoutePoint::direction
	Vector3_t4282066566  ___direction_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(RoutePoint_t2172029929, ___position_0)); }
	inline Vector3_t4282066566  get_position_0() const { return ___position_0; }
	inline Vector3_t4282066566 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t4282066566  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_direction_1() { return static_cast<int32_t>(offsetof(RoutePoint_t2172029929, ___direction_1)); }
	inline Vector3_t4282066566  get_direction_1() const { return ___direction_1; }
	inline Vector3_t4282066566 * get_address_of_direction_1() { return &___direction_1; }
	inline void set_direction_1(Vector3_t4282066566  value)
	{
		___direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: UnityStandardAssets.Utility.WaypointCircuit/RoutePoint
struct RoutePoint_t2172029929_marshaled_pinvoke
{
	Vector3_t4282066566_marshaled_pinvoke ___position_0;
	Vector3_t4282066566_marshaled_pinvoke ___direction_1;
};
// Native definition for marshalling of: UnityStandardAssets.Utility.WaypointCircuit/RoutePoint
struct RoutePoint_t2172029929_marshaled_com
{
	Vector3_t4282066566_marshaled_com ___position_0;
	Vector3_t4282066566_marshaled_com ___direction_1;
};
