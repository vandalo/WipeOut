#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityStandardAssets.Utility.WaypointCircuit/WaypointList
struct WaypointList_t3089880801;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t215400611;
// System.Single[]
struct SingleU5BU5D_t2316563989;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.WaypointCircuit
struct  WaypointCircuit_t3049971822  : public MonoBehaviour_t667441552
{
public:
	// UnityStandardAssets.Utility.WaypointCircuit/WaypointList UnityStandardAssets.Utility.WaypointCircuit::waypointList
	WaypointList_t3089880801 * ___waypointList_2;
	// System.Boolean UnityStandardAssets.Utility.WaypointCircuit::smoothRoute
	bool ___smoothRoute_3;
	// System.Int32 UnityStandardAssets.Utility.WaypointCircuit::numPoints
	int32_t ___numPoints_4;
	// UnityEngine.Vector3[] UnityStandardAssets.Utility.WaypointCircuit::points
	Vector3U5BU5D_t215400611* ___points_5;
	// System.Single[] UnityStandardAssets.Utility.WaypointCircuit::distances
	SingleU5BU5D_t2316563989* ___distances_6;
	// System.Single UnityStandardAssets.Utility.WaypointCircuit::editorVisualisationSubsteps
	float ___editorVisualisationSubsteps_7;
	// System.Int32 UnityStandardAssets.Utility.WaypointCircuit::p0n
	int32_t ___p0n_8;
	// System.Int32 UnityStandardAssets.Utility.WaypointCircuit::p1n
	int32_t ___p1n_9;
	// System.Int32 UnityStandardAssets.Utility.WaypointCircuit::p2n
	int32_t ___p2n_10;
	// System.Int32 UnityStandardAssets.Utility.WaypointCircuit::p3n
	int32_t ___p3n_11;
	// System.Single UnityStandardAssets.Utility.WaypointCircuit::i
	float ___i_12;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::P0
	Vector3_t4282066566  ___P0_13;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::P1
	Vector3_t4282066566  ___P1_14;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::P2
	Vector3_t4282066566  ___P2_15;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::P3
	Vector3_t4282066566  ___P3_16;
	// System.Single UnityStandardAssets.Utility.WaypointCircuit::<Length>k__BackingField
	float ___U3CLengthU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_waypointList_2() { return static_cast<int32_t>(offsetof(WaypointCircuit_t3049971822, ___waypointList_2)); }
	inline WaypointList_t3089880801 * get_waypointList_2() const { return ___waypointList_2; }
	inline WaypointList_t3089880801 ** get_address_of_waypointList_2() { return &___waypointList_2; }
	inline void set_waypointList_2(WaypointList_t3089880801 * value)
	{
		___waypointList_2 = value;
		Il2CppCodeGenWriteBarrier(&___waypointList_2, value);
	}

	inline static int32_t get_offset_of_smoothRoute_3() { return static_cast<int32_t>(offsetof(WaypointCircuit_t3049971822, ___smoothRoute_3)); }
	inline bool get_smoothRoute_3() const { return ___smoothRoute_3; }
	inline bool* get_address_of_smoothRoute_3() { return &___smoothRoute_3; }
	inline void set_smoothRoute_3(bool value)
	{
		___smoothRoute_3 = value;
	}

	inline static int32_t get_offset_of_numPoints_4() { return static_cast<int32_t>(offsetof(WaypointCircuit_t3049971822, ___numPoints_4)); }
	inline int32_t get_numPoints_4() const { return ___numPoints_4; }
	inline int32_t* get_address_of_numPoints_4() { return &___numPoints_4; }
	inline void set_numPoints_4(int32_t value)
	{
		___numPoints_4 = value;
	}

	inline static int32_t get_offset_of_points_5() { return static_cast<int32_t>(offsetof(WaypointCircuit_t3049971822, ___points_5)); }
	inline Vector3U5BU5D_t215400611* get_points_5() const { return ___points_5; }
	inline Vector3U5BU5D_t215400611** get_address_of_points_5() { return &___points_5; }
	inline void set_points_5(Vector3U5BU5D_t215400611* value)
	{
		___points_5 = value;
		Il2CppCodeGenWriteBarrier(&___points_5, value);
	}

	inline static int32_t get_offset_of_distances_6() { return static_cast<int32_t>(offsetof(WaypointCircuit_t3049971822, ___distances_6)); }
	inline SingleU5BU5D_t2316563989* get_distances_6() const { return ___distances_6; }
	inline SingleU5BU5D_t2316563989** get_address_of_distances_6() { return &___distances_6; }
	inline void set_distances_6(SingleU5BU5D_t2316563989* value)
	{
		___distances_6 = value;
		Il2CppCodeGenWriteBarrier(&___distances_6, value);
	}

	inline static int32_t get_offset_of_editorVisualisationSubsteps_7() { return static_cast<int32_t>(offsetof(WaypointCircuit_t3049971822, ___editorVisualisationSubsteps_7)); }
	inline float get_editorVisualisationSubsteps_7() const { return ___editorVisualisationSubsteps_7; }
	inline float* get_address_of_editorVisualisationSubsteps_7() { return &___editorVisualisationSubsteps_7; }
	inline void set_editorVisualisationSubsteps_7(float value)
	{
		___editorVisualisationSubsteps_7 = value;
	}

	inline static int32_t get_offset_of_p0n_8() { return static_cast<int32_t>(offsetof(WaypointCircuit_t3049971822, ___p0n_8)); }
	inline int32_t get_p0n_8() const { return ___p0n_8; }
	inline int32_t* get_address_of_p0n_8() { return &___p0n_8; }
	inline void set_p0n_8(int32_t value)
	{
		___p0n_8 = value;
	}

	inline static int32_t get_offset_of_p1n_9() { return static_cast<int32_t>(offsetof(WaypointCircuit_t3049971822, ___p1n_9)); }
	inline int32_t get_p1n_9() const { return ___p1n_9; }
	inline int32_t* get_address_of_p1n_9() { return &___p1n_9; }
	inline void set_p1n_9(int32_t value)
	{
		___p1n_9 = value;
	}

	inline static int32_t get_offset_of_p2n_10() { return static_cast<int32_t>(offsetof(WaypointCircuit_t3049971822, ___p2n_10)); }
	inline int32_t get_p2n_10() const { return ___p2n_10; }
	inline int32_t* get_address_of_p2n_10() { return &___p2n_10; }
	inline void set_p2n_10(int32_t value)
	{
		___p2n_10 = value;
	}

	inline static int32_t get_offset_of_p3n_11() { return static_cast<int32_t>(offsetof(WaypointCircuit_t3049971822, ___p3n_11)); }
	inline int32_t get_p3n_11() const { return ___p3n_11; }
	inline int32_t* get_address_of_p3n_11() { return &___p3n_11; }
	inline void set_p3n_11(int32_t value)
	{
		___p3n_11 = value;
	}

	inline static int32_t get_offset_of_i_12() { return static_cast<int32_t>(offsetof(WaypointCircuit_t3049971822, ___i_12)); }
	inline float get_i_12() const { return ___i_12; }
	inline float* get_address_of_i_12() { return &___i_12; }
	inline void set_i_12(float value)
	{
		___i_12 = value;
	}

	inline static int32_t get_offset_of_P0_13() { return static_cast<int32_t>(offsetof(WaypointCircuit_t3049971822, ___P0_13)); }
	inline Vector3_t4282066566  get_P0_13() const { return ___P0_13; }
	inline Vector3_t4282066566 * get_address_of_P0_13() { return &___P0_13; }
	inline void set_P0_13(Vector3_t4282066566  value)
	{
		___P0_13 = value;
	}

	inline static int32_t get_offset_of_P1_14() { return static_cast<int32_t>(offsetof(WaypointCircuit_t3049971822, ___P1_14)); }
	inline Vector3_t4282066566  get_P1_14() const { return ___P1_14; }
	inline Vector3_t4282066566 * get_address_of_P1_14() { return &___P1_14; }
	inline void set_P1_14(Vector3_t4282066566  value)
	{
		___P1_14 = value;
	}

	inline static int32_t get_offset_of_P2_15() { return static_cast<int32_t>(offsetof(WaypointCircuit_t3049971822, ___P2_15)); }
	inline Vector3_t4282066566  get_P2_15() const { return ___P2_15; }
	inline Vector3_t4282066566 * get_address_of_P2_15() { return &___P2_15; }
	inline void set_P2_15(Vector3_t4282066566  value)
	{
		___P2_15 = value;
	}

	inline static int32_t get_offset_of_P3_16() { return static_cast<int32_t>(offsetof(WaypointCircuit_t3049971822, ___P3_16)); }
	inline Vector3_t4282066566  get_P3_16() const { return ___P3_16; }
	inline Vector3_t4282066566 * get_address_of_P3_16() { return &___P3_16; }
	inline void set_P3_16(Vector3_t4282066566  value)
	{
		___P3_16 = value;
	}

	inline static int32_t get_offset_of_U3CLengthU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(WaypointCircuit_t3049971822, ___U3CLengthU3Ek__BackingField_17)); }
	inline float get_U3CLengthU3Ek__BackingField_17() const { return ___U3CLengthU3Ek__BackingField_17; }
	inline float* get_address_of_U3CLengthU3Ek__BackingField_17() { return &___U3CLengthU3Ek__BackingField_17; }
	inline void set_U3CLengthU3Ek__BackingField_17(float value)
	{
		___U3CLengthU3Ek__BackingField_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
