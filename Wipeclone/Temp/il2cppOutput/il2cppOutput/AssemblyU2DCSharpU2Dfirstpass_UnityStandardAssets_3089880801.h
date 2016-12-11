#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityStandardAssets.Utility.WaypointCircuit
struct WaypointCircuit_t3049971822;
// UnityEngine.Transform[]
struct TransformU5BU5D_t3792884695;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.WaypointCircuit/WaypointList
struct  WaypointList_t3089880801  : public Il2CppObject
{
public:
	// UnityStandardAssets.Utility.WaypointCircuit UnityStandardAssets.Utility.WaypointCircuit/WaypointList::circuit
	WaypointCircuit_t3049971822 * ___circuit_0;
	// UnityEngine.Transform[] UnityStandardAssets.Utility.WaypointCircuit/WaypointList::items
	TransformU5BU5D_t3792884695* ___items_1;

public:
	inline static int32_t get_offset_of_circuit_0() { return static_cast<int32_t>(offsetof(WaypointList_t3089880801, ___circuit_0)); }
	inline WaypointCircuit_t3049971822 * get_circuit_0() const { return ___circuit_0; }
	inline WaypointCircuit_t3049971822 ** get_address_of_circuit_0() { return &___circuit_0; }
	inline void set_circuit_0(WaypointCircuit_t3049971822 * value)
	{
		___circuit_0 = value;
		Il2CppCodeGenWriteBarrier(&___circuit_0, value);
	}

	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(WaypointList_t3089880801, ___items_1)); }
	inline TransformU5BU5D_t3792884695* get_items_1() const { return ___items_1; }
	inline TransformU5BU5D_t3792884695** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(TransformU5BU5D_t3792884695* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier(&___items_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
